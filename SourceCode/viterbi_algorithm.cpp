/*
indent -npro -kr -i8 -ts8 -sob -l280 -ss -ncs -cp1 viterbi_algorithm.cpp
g++ viterbi_algorithm.cpp -o viterbi_algorithm
./viterbi_algorithm 2 1 0
*/


// Copyright 2016-2016 University of Electronic Science and Technology of China
//                     (author : Xiaoming Qin)
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file expect in compliance with the License.

// Tongguang Zhang, programming again, 2020.01.17


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// non-member friend function declaration in class interface HMM
float **create_array(const int row, const int col);
float *create_array(const int col);

int *create_int_array(const int col);
int **create_int_array(const int row, const int col);

void find_max_value_index(float *p, float *q, float d, const int K, float &delta_val, int &psi_idx);
int find_max_index(float *p, const int K);

//------------------------------------------------------------------------------------
class HMM {
      public:
	// transition probability
	float **trans_prob;
	// emission probability
	float **emiss_prob;
	// start probability pi
	float *pi_prob;

	// constructor of class HMM
	 HMM(int a, int b):K(a), N(b) {
	}
	// create all three matrix in Hidden Markov Model
	void create_prob_array(float trans__prob[2][2], float emiss__prob[3][2], float pi__prob[2]);

      private:
	// number of hidden states
	int K;
	// number of observations
	int N;

	// create array
	friend float **create_array(const int row, const int col);
	friend float *create_array(const int col);
};

void HMM::create_prob_array(float trans__prob[2][2], float emiss__prob[3][2], float pi__prob[2])
{
	trans_prob = create_array(K, K);
	emiss_prob = create_array(N, K);
	pi_prob = create_array(K);

	int row = K, col = K;
	for (int i = 0; i < row; ++i) {
		pi_prob[i] = pi__prob[i];
		for (int j = 0; j < col; ++j) {
			trans_prob[i][j] = trans__prob[i][j];
		}
	}

	row = N, col = K;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			emiss_prob[i][j] = emiss__prob[i][j];
		}
	}
}
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
class ViterbiDecoder {
      public:
	// the sequence of observations
	int *obs_seq;
	// the most likely hidden state sequence
	int *hid_seq;
	// local probability
	float **delta;
	// store argmax index
	int **psi;

	// constructor
	ViterbiDecoder(int a, int b, int c, float **trans, float **emiss, float *pi)
	:K(a), N(b), T(c), trans_prob(trans), emiss_prob(emiss), pi_prob(pi) {
	}
	// load observation sequence
	void load_obs_sequence(int num, int *obs__seq);
	void viterbi_computer();

      public:
	// number of hidden states
	int K;
	// number of possible observations
	int N;
	// length of the observation sequence
	int T;
	// transition probability
	float **trans_prob;
	// emission probability
	float **emiss_prob;
	// start probability pi
	float *pi_prob;

	// create array
	friend int *create_int_array(const int col);
	friend int **create_int_array(const int row, const int col);
	friend float **create_array(const int row, const int col);

	friend void find_max_value_index(float *p, float *q, float d, const int K, float &delta_val, int &psi_idx);
	friend int find_max_index(float *p, const int K);
};

void ViterbiDecoder::load_obs_sequence(int num, int *obs__seq)
{
	obs_seq = new int[num];
	for (int i = 0; i < num; ++i) {
		obs_seq[i] = obs__seq[i];
	}
}

void ViterbiDecoder::viterbi_computer()
{
	// allocate memory
	hid_seq = create_int_array(T);
	delta = create_array(T, K);
	psi = create_int_array(T, K);

	for (int i = 0; i != K; ++i) {
		delta[0][i] = pi_prob[i] * emiss_prob[obs_seq[0]][i];
		psi[0][i] = 0;
	}

	for (int j = 1; j != T; ++j)
		for (int i = 0; i != K; ++i)
			find_max_value_index(delta[j - 1], trans_prob[i], emiss_prob[obs_seq[j]][i], K, delta[j][i], psi[j][i]);

	hid_seq[T - 1] = find_max_index(delta[T - 1], K);

	for (int t = T - 2; t != -1; --t) {
		hid_seq[t] = psi[t][hid_seq[t + 1]];
	}
}
//------------------------------------------------------------------------------------

float **create_array(const int row, const int col)
{
	float **p;
	p = new float *[row];
	for (int i = 0; i <= row; ++i)
		p[i] = new float[col];
	return p;
}

float *create_array(const int col)
{
	float *p;
	p = new float[col];
	return p;
}

int **create_int_array(const int row, const int col)
{
	int **p;
	p = new int *[row];
	for (int i = 0; i <= row; ++i)
		p[i] = new int[col];
	return p;
}

int *create_int_array(const int col)
{
	int *p;
	p = new int[col];
	return p;
}



// find maximum value and index
void find_max_value_index(float *p, float *q, float d, const int K, float &delta_val, int &psi_idx)
{
	float tmp = 0.0;
	int max_index = 0;
	float max_val = p[0] * q[0] * d;

	for (int i = 1; i != K; ++i) {
		tmp = p[i] * q[i] * d;
		if (max_val < tmp) {
			max_val = tmp;
			max_index = i;
		}

	}

	delta_val = max_val;
	psi_idx = max_index;
}

int find_max_index(float *p, const int K)
{
	float max_val = p[0];
	int max_index = 0;

	for (int i = 1; i != K; ++i) {
		if (max_val < p[i]) {
			max_val = p[i];
			max_index = i;
		}
	}

	return max_index;
}

//------------------------------------------------------------------------------------
// print 1-d array(int)
void print_array(int *data, const int col)
{
	cout << "------------------" << endl;

	for (int i = 0; i != col; ++i)
		cout << data[i] << " ";
	cout << endl;

	cout << "------------------" << endl;
}

// print 1-d array(float)
void print_array(float *data, const int col)
{
	cout << "------------------" << endl;

	for (int i = 0; i != col; ++i)
		cout << data[i] << " ";
	cout << endl;

	cout << "------------------" << endl;
}

// print 2-d array
void print_array(float **data, const int row, const int col)
{
	cout << "------------------" << endl;

	for (int i = 0; i != row; ++i) {
		for (int j = 0; j != col; ++j)
			cout << data[i][j] << " ";
		cout << endl;
	}

	cout << "------------------" << endl;
}
//------------------------------------------------------------------------------------



int main(int argc, char **argv)
{
	const int num_state = 2;		// number of hidden state                   (connect disconnect)
	const int num_obs_space = 3;	// number of possible observation state     (good moderate bad)
	const int num_obs_seq = 3;		// length of the sequence of observation

	float pi__prob[2] = {0.65, 0.35};					//initial probabilities
	float emiss__prob[3][2] = {0.55, 0.1, 0.35, 0.3, 0.1, 0.6};	//emission matrix(transposed)
	float trans__prob[2][2] = {0.7, 0.4, 0.3, 0.6};			//transition matrix(transposed)


	// the key when executing
	int obs__seq[3] = {2, 1, 0};					//the observation sequence: bad moderate good
	if (argc != 4) {cout << "The length of the sequence of observation is 3" << endl; return 0;}
	for(int i = 1; i < argc; i++) obs__seq[i-1] = atoi(argv[i]);	// ./viterbi_algorithm 2 1 0



	HMM hmm(num_state, num_obs_space);				// create a Hidden Markov Model
	hmm.create_prob_array(trans__prob, emiss__prob, pi__prob);	// create all three matrix in HMM

	ViterbiDecoder viterbi(num_state, num_obs_space, num_obs_seq, hmm.trans_prob, hmm.emiss_prob, hmm.pi_prob);	// create a viterbi decoder
	viterbi.load_obs_sequence(num_obs_seq, obs__seq);		// load the sequence of observation
	viterbi.viterbi_computer();					// find the most likely path using viterbi algorithm

	cout << "*** Example of viterbi algorithm from Wikipedia ***" << endl;
	cout << "transition matrix(transposed)" << endl;
	print_array(hmm.trans_prob, num_state, num_state);
	cout << "emission matrix(transposed)" << endl;
	print_array(hmm.emiss_prob, num_obs_space, num_state);
	cout << "initial probabilities" << endl;
	print_array(hmm.pi_prob, num_state);
	cout << " the observation sequence" << endl;
	print_array(viterbi.obs_seq, num_obs_seq);
	cout << "the most likely state sequence" << endl;
	print_array(viterbi.hid_seq, num_obs_seq);

	return 0;
}
