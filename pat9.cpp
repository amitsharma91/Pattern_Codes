/*
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/


#include<iostream>
using namespace std;

int main(){
	int flag = 0;
	int k=1;
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			if(j<=k){
				cout << "* ";
			}
		}
		if(k==5){
			flag = 1;
			i = 1;
		}
		if(flag == 0){
			k+=1;}
		if(flag == 1){
			k-=1;}
		cout << endl;
	}	


return 0;
}

