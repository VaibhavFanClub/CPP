#include<iostream>
using namespace std;
int main(){
	int n, flag = 0;
	cout<<"Enter Number: ";
	cin>>n;
	for(int i = 2; i < n; i++){
		if (n % i == 0)
			break;
		else
			flag = 1;
	}
	cout<<"Number is "<<(flag ? "Prime" : "not Prime")<<endl;
	return 0;
}
