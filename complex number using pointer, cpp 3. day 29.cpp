#include<iostream>
using namespace std;
class complex{
	int real, imaginary;
	public:
		void getdata(){
			cout<<"the real part is "<<real<< endl;
			cout<<"the imaginary part is "<<imaginary<< endl;
		}
		void setdata(int a, int b){
			real = a;
			imaginary =b;
			
		}
};
int main(){
	complex c;
	complex *ptr = &c;
	//(*ptr).setdata(2,3); is same as -->
	ptr->setdata(2,3);
	(*ptr).getdata();
	return 0;
}
