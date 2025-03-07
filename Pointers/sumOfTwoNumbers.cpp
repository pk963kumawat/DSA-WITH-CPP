#include<iostream>
using namespace std;
int mian(){
//	int x = 4;
//	int y = 7;
//	int* P1 = &x;
//	int* p2 = &y;
//	cout<<*p1 + *p2;
	
	int x,y;
	int* p1 = &x;
	int* p2 = &y;
	cout<<"Enter first Number : ";
	cin>>*p1;
	cout<<"Enter second Number : ";
	cin>>*p2;
	cout<<*p1 + *p2;
}
