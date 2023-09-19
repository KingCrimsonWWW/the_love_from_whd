#include "MyRend.h"

Rend::Rend(vector<vector<double>> ppc, vector<vector<double>> trc, double f)
{
	this->PPC = ppc;
	this->TRC = trc;
	
	double scale = 50000;
	this->F = f;
	for (int i = 0; i < PPC.size(); i++)
	{
		for (int j = 0; j < PPC[i].size(); j++)
		{
			PPC[i][j] /= 1000.0;
		}
	}
	for (int i = 0; i < TRC.size(); i++)
	{
		for (int j = 0; j < TRC[i].size(); j++)
		{
			TRC[i][j] /= 1000.0;
		}
	}
	Xs = 0.0, Ys = 0.0, Zs = 0.0, FAI = 0.0, OMEGA = 0.0, KAPPA = 0.0;
	vector<double> temp(3,0);
	vector<vector<double>>Rotate(3, temp);
	*delta = { 0 };

	Zs = Scale * F;
	for (int i = 0; i < TRC.size(); i++) {
			Xs = Xs + TRC[i][0] / 4;
			Ys = Ys + TRC[i][1] / 4;
			Zs = Zs + TRC[i][2] / 4;


	}
}

Rend::~Rend()
{

}

