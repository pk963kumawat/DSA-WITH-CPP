#include<iostream>
using namespace std;
int main(){
	int x = 7;
	int* ptr = &x;
	cout<<ptr<<endl; //0x6ffe44
	ptr = ptr + 1;
	cout<<ptr<<endl; // 
}
