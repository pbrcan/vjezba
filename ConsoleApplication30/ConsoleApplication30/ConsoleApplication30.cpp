// ConsoleApplication30.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

int faktorijela(int);

void main(void) {
	int broj;

	cout << "unesi pozitivan broj: ";
	cin >> broj;
	if (broj < 0)
		cout << "broj je negativan.\n";
	else
		cout << broj << " faktorijela iznosi: " << faktorijela(broj) << endl;
}

int faktorijela(int broj) {
	int temp;

	if (broj <= 1) return 1;

	temp = broj * faktorijela(broj - 1);
	return temp;
}