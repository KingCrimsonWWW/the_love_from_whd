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

	vector<vector<double>> PPC;//像点坐标
	vector<vector<double>> TRC;//地面点坐标
	double Scale;//比例尺
	double F;//焦距
	double Xs, Ys, Zs, FAI, OMEGA, KAPPA;//外方位
	double delta[6];
	vector<vector<double>> Rotate;
	


};

