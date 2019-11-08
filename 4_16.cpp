//init_ptr.cpp --initialize a pointer
#include "stdafx.h"
#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int * pt = &higgens;
	
	cout << "value of higgens = " << higgens << " value of *pt = " << pt << endl;
	cout << "value of pt = " << pt << endl;
	return 0;
}