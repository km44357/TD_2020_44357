#include <iostream>
#include <math.h>
//#include "gnuplot.h"
#include "matplotlibcpp.h"

using namespace std;

int main(int argc, char** argv) {
	
	int a = 7;
	int b = 5;
	int c = 3;
	
	int	D;
	D = b*b - 4*a*c;
	
	float t1, t2;
	
	if(D > 0)
	{
		t1 = ((-1)*t1+sqrt(D))/2*a;
		t2 = ((-1)*t1-sqrt(D))/2*a;
		
		cout << "miejsca zerowe: " << endl << "  " << t1 << endl << "  " << t2 << endl;
	}
	else
	{
		cout << "brak; delta: " << D << endl;
	}
	
	
	
	return 0;
}
