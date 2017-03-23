#include<stdio.h>

int main(){
	int i,j,k=3;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j<=k)
				printf(" ");
			else 
				printf("* ");
		}printf("\n");k--;
	}	
}
