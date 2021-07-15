#include<iostream>
using namespace std;
int main(){
	//pointer declaration
	int*p;
	//array declaration
	int arr[]={2,3,5,4};
	//assignment
	p=arr;
	for(int i=0;i<4;i++){
		cout<<*p<<endl;
		//++moves the pointer to next int position
		p++;
	}
	return 0;
}
