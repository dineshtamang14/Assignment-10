#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n, sum = 0, range[2];
	cout<<"Enter the size of an array: ";
	cin>>n;
	
	int *arr = new int[n];
	
	cout<<"Enter the array elements: "<<endl;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the range only two range of array to find sum fo array elements: "<<endl;
	for(int i = 0; i<2; i++){
		cin>>range[i];		
	}
	
//	int len = sizeof(range)/sizeof(range[0]);
	
	for(int i = range[0]; i< range[1]+1; i++){
		sum += arr[i];
	}

	cout<<sqrt(sum);
	
	return 0;
}
