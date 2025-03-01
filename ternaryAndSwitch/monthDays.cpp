#include<iostream>
using namespace std;
int main(){
	int x ;
	cout<<"Emter month number : ";
	cin>>x;
	switch(x){ 
		case 1 : // jan
			cout<<"31";
			break;
		case 2 : // Feb
			cout<<"28";
			break;
		case 3 : // mar
			cout<<"31";
			break;
		case 4 : // April
			cout<<"30";
			break;
		case 5 : // may
			cout<<"31";
			break;
		case 6 : // june
			cout<<"30";
			break;
		case 7 : // july
			cout<<"31";
			break;
		case 8 : // Aug
			cout<<"31";
			break;
		case 9 : // sep
			cout<<"30";
			break;
		case 10 : // oct
			cout<<"31";
			break;
		case 11 : // Nov
			cout<<"30";
			break;
		case 12 : // DEc
			cout<<"31";
			break;
			default:
			cout<<"Invalid Number"	;													
	}
	
}
