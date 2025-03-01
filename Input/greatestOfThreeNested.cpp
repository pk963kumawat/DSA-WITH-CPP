#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	cout<<"Enter 3rd number : ";
	cin>>c;
	if(a>b){
		cout<<a<<" is greatest";
	}
	else{ // C > a , a > b - > c>a>b
		cout<<c<<" is greatest";
	}
}
else{ // b >  a
	if(b>c){
		cout<<b<<" is greatest";
	}
	else{ // c > b > a
		cout<<c<<" is greatest";
	}
}

