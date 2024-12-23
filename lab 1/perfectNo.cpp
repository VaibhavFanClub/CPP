#include<iostream>
using namespace std;
int main(){
	int n, sum = 0, temp;
	cout<<"Enter Number: ";
	cin>>n;
	temp = n;
	for(int i = 1; i < n; i++){
		if (n % i == 0)
			sum += i;
	}
	if (sum == temp){
		cout<<"Number is Perfect\n";
	}else{
		cout<<"Number is not Perfect\n";
	}
	return 0;
}
