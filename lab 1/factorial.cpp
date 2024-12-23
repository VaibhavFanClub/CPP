#include<iostream>
using namespace std;
int main(){
	int fact = 1, n;
	cout<<"Enter n: ";
	cin>>n;
	
	for(int i = 2; i <= n; i++)
		fact *= i; 
	cout<<"factorial = "<<fact<<endl;
	return 0;
}
