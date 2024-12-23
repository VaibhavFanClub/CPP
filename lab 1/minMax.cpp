#include<iostream>
using namespace std;
int main(){
	int a, b, min, max;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	cout<<"Min: "<<(a < b ? a : b)<<endl;
	cout<<"Max: "<<(a < b ? b : a)<<endl;
	return 0;
}
