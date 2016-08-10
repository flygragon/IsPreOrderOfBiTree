// IsPreOrderOfBiTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"IsPreOrderOfBiTree.h"
using namespace std;

int main()
{
	string test;
	cin >> test;
	IspreOrderOfBiTree IsPre;
	cout << boolalpha << IsPre.isValidSerialization(test) << '\n';
    return 0;
}

