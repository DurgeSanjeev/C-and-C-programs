#include<iostream>
using namespace std;

int main(){
	
	int array[]={23,34,45,23,1,4,5,67};
	int mid,i,found,n;
	int start=0;
	int end=n-1;
	int key=1;
	while(start<=end){
		mid= (start+end)/2;
		if(key<array[mid])
		{
		    end=mid-1;
			
		}
		else if (key > array[mid])
		{
			start=mid+1;
		
			
		}
		else if ( key==array[mid])
		{
			cout<<"found at:"<< mid;
			found=1;
			break;
		}
		i=i+1;
	}
}
