#include<iostream>
using namespace std;

class Student{
	int roll;
	public: 
		Student(int r){
			roll = r;
		}
		
		int rollNo(){
			return roll;
		}
		int marksSum(int a, int b){
			return a+b;
		}
		
		~Student(){
			roll = 0;
		}
};

int main(){
	Student s(10);
	cout<<"Roll no: "<<s.rollNo()<<endl;
	cout<<"Marks of student : "<<s.marksSum(5,6)<<endl;
	return 0;
}
