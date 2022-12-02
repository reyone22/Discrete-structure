
/*Q.n 1. Write a program that takes two or more sets as input and produces set
operations like union, intersection, difference and symmetric difference as
its output.*/
#include<iostream>
#include<stdlib.h>
using namespace std;
void unionfun(int setA[10] ){
   
   cout<<"{";
	for(int i=0;i<10;i++){
		
	int flag = 0;
        for (int j =i+1;j<10;j++)
        {
            
            if (setA[i] == setA[j])
            {
                flag = 1;
                
                  
               break;
            }
            
        }
        if (flag == 0)
            cout<<" "<<setA[i];
    }
    cout<<" }"<<endl;
 }
 void intersection(int setA[10]){
 	cout<<"{";
    for(int i=0;i<10;i++){
        for (int j =i+1;j<10;j++)
        {
           if (setA[i] == setA[j] && i != j)
            {
                cout<<" "<<setA[i];
                
                
            }
        }
        
 }
 cout<<" }"<<endl;
}
void difference(int setA[5],int setB[5]){
	cout<<"{";
  for(int i=0;i<5;i++){
  	int flag=0;
  	for(int j=0;j<5;j++){
  		if(setA[i]==setB[j]){
  			flag=1;
  			break;
		  }
	  }
	  if(flag==0){
	  	cout<<" "<<setA[i];
	  }
  }
  cout<<" }"<<endl;
}
void sydifference(int setA[10]){
	cout<<"{";
  for(int i=0;i<10;i++){
  	int flag=0;
  	for(int j=0;j<10;j++){
  		if(setA[i]==setA[j]&&i!=j){
  			flag=1;
  			break;
		  }
	  }
	  if(flag==0){
	  	cout<<" "<<setA[i];
	  }
  }
  cout<<" }";
}
int main(){
	int setA[5],setB[10],setC[10];
	cout<<"Enter elements for set A:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"For element no."<<i+1<<":";
		cin>>setA[i];
	}
	cout<<"Enter for set B:"<<endl;
	for(int j=0;j<5;j++){
		cout<<"For element no."<<j+1<<":";
		cin>>setB[j];
	}
    system("CLS");
    cout<<"Set A is:"<<endl<<"{";
    for(int i=0;i<5;i++){
		cout<<" "<<setA[i];
	}
	cout<<"}"<<endl;
	cout<<endl;
	cout<<"Set B is:"<<endl<<"{";
	for(int j=0;j<5;j++){
		cout<<" "<<setB[j];
	}
	cout<<"}"<<endl;
	cout<<endl;
	for(int i=0;i<5;i++){
		setC[i]=setA[i];
	}
	for(int j=0;j<5;j++){
		setC[j+5]=setB[j];
	}
	cout<<"A U B is:"<<endl;
	unionfun(setC);
	cout<<endl;
	cout<<"A n B is:"<<endl;
	intersection(setC);
	cout<<endl;
	cout<<"A - B is:"<<endl;
	difference(setA,setB);
	cout<<endl;
	cout<<"A "<<char(30)<<" B is:"<<endl;
	sydifference(setC);
	return 0;
}
