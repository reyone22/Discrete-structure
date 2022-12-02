/*Q.n 2 Write a program that takes two or more sets as input and produces their
Cartesian product as output. */
#include <iostream>
using namespace std;

int main(){
	int setA[10],setB[10],sizeA,sizeB,i,j;
	cout<<"Enter the number of elements in setA: ";
	cin>>sizeA;
	for(i=0;i<sizeA;i++){
		cin>>setA[i];
	}
	cout<<"Enter the number of elements in setB: ";
	cin>>sizeB;
	for(i=0;i<sizeB;i++){
		cin>>setB[i];
	}
    cout<<"Cartesian Product of setA and set B is";
	cout<<"{";
	for(i=0;i<sizeA;i++){
		for(j=0;j<sizeB;j++){
			cout<<"("<<setA[i]<<" "<<setB[j]<<")";
		}
	}
	cout<<"}";
	
}
