#pragma once
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Rend
{
public:
	Rend(vector<vector<double>> ppc, vector<vector<double>> trc, double f);
	~Rend();

	vector<vector<double>> PPC;//�������
	vector<vector<double>> TRC;//���������
	double Scale;//������
	double F;//����
	double Xs, Ys, Zs, FAI, OMEGA, KAPPA;//�ⷽλ
	double delta[6];
	vector<vector<double>> Rotate;
	


};

