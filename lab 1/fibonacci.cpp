#include<iostream>
using namespace std;
int main(){
	int n1 = 0, n2 = 1, n3, n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Fibonnaci series: "<<n1<<" "<<n2;
	for(int i = 2; i < n; i++){
		n3 = n1+n2;
		cout<<" "<<n3;
		n1 = n2;
		n2 = n3;
	}
	cout<<endl;
	return 0;
}
