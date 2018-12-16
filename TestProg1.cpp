// TestProg1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>

using namespace std;

void add(int i,int j);

//function have below 3 sections
//1. return type
//2. function name
//3. function argument

int main()
{
	cout<<"Hello .."<<endl;
	int a; 
	float b;
	char name[20];
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	cout<<"enter name:";
	cin>>name;
	cout<<"Hi,"<<name<<endl;
	add(a,b);
	cout<<"division is:"<<a/b<<endl;
	cout<<"multiplication is:"<<a*b<<endl;
	//cout<<"Addition is:"<<d<<endl;
	return 0;
}

void add(int i,int j)
{
	int c = i+j;
	cout<<"print inside fun:"<<c<<endl;
	//console output - cout
	//console input  - cin
	//return 0;
}

