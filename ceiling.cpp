#include<iostream>
using namespace std;
int main(){
	float a;
	int b;

	cout<<"Enter a Real number: ";
	cin>>a;
	b=a;

	 if(a<0){
	cout<<"Floor value of given number "<<a<<" is :"<<b-1<<endl;
	cout<<"Ceiling value of given number "<<a<<" is :"<<b<<endl;
     }
 if(a!=b && a>0){
	
	cout<<"Floor value of given number "<<a<<" is :"<<b<<endl;
	cout<<"Ceiling value of given number "<<a<<" is :"<<b+1<<endl;
    }
 if(a==b){
	cout<<"Floor value of given number "<<a<<" is :"<<b<<endl;
	cout<<"Ceiling value of given number "<<a<<" is :"<<b<<endl;
	
}

return 0;
}
