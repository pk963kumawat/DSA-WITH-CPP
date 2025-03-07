#include<iostream>
using namespace std;
int maxthree(int a, int b, int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>c && b>a){
		return b;
	}
	else return c;
}
int main(){
	int a = 2, b = 5 , c = 56;
	cout<<maxthree(a,b,c);
}
