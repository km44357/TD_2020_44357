

#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int A = 1;
	int f = 5;
	double pi = 3.14;
	double th = 3 * pi;
	double dts = 1.0 / 500;
	
	double t;
	
	double tab[3501];
	double tab2[7001];

	ofstream outfile1;
	outfile1.open("data.txt", ios::trunc | ios::out);

	
	for(int i = 0; i < 3500; i++)
	{
		t = i * dts;

		
		outfile1 << double(A * sin(2 * pi*f*t + th)) << "\n";
		
		
	}
	outfile1.close();

	ofstream outfile2;
	outfile2.open("time.txt", ios::trunc | ios::out);

	
	for (int i = 0; i < 3500; i++)
	{
		t = i * dts;
		outfile2 << t << "\n";
		

	}
	outfile2.close();




	for (int i = 0; i < 3500; i++)
	{
		t = i * dts;

		tab[i] = double(A * sin(2 * pi*f*t + th)) + 1;
		//cout << tab[i] << endl;
	}

	int q = 16;
	double nq0 = 2.0 / 65536;

	
	ofstream outfile3;
	outfile3.open("dataq1.txt", ios::trunc | ios::out);	
	
	double x;

	for (int i = 0; i < 3500; i++) {
		x = tab[i];
		x = floor(x * pow(2, 16));
		outfile3 << (long int)x << endl;
	}


	outfile3.close();




	ofstream outfile4;
	outfile4.open("dataq2.txt", ios::trunc | ios::out);

	for (int i = 0; i < 7000; i++)
	{
		t = i * dts;

		tab2[i] = double(A * sin(2 * pi*f*t + th)) + 1;
		//cout << tab[i] << endl;
	}

	double y;

	for (int i = 0; i < 7000; i++) {
		y = tab2[i];
		y = floor(y * pow(2, 8));
		outfile4 << (long int)y << endl;
	}


	outfile4.close();

	ofstream outfile5;
	outfile5.open("time2.txt", ios::trunc | ios::out);


	for (int i = 0; i < 7000; i++)
	{
		t = i * dts;
		outfile5 << t << "\n";


	}
	outfile5.close();

	return 0;
}

