#include<iostream>
using namespace std;
int main(){
	int a = 4;
	int *ptr = &a;
	cout<<"the value of a is: "<<*(ptr)<<endl;
	cout<<"the value of a is: "<<a<<endl;
	
	//new operator
	int *p = new int (50);
	float *k = new float (50.98);
	cout<<"the value at address p is "<<*(p)<<endl;
		cout<<"the value at address k is "<<*(k)<<endl<<endl;
	
	//array
	int *arr = new int [3];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	//delete[] arr;	--> to free the memory
	cout<<"the value of arr[0] is: "<<arr[0]<<endl;
	cout<<"the value of arr[1] is: "<<arr[1]<<endl;
	cout<<"the value of arr[2] is: "<<arr[2]<<endl;
	
	//delete operator
	

	return 0;
}
