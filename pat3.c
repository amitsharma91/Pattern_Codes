/*
        * 
      * * 
    * * * 
  * * * * 
* * * * *

*/

#include<stdio.h>

int main(){
	int i,j,k=3;
	
	for(i=0;i<5;i++){
		for(int j=0;j<5;j++){
			//printf("%d-%d-%d",k,i,j);
			if(j<=k)
				printf("  ");
			else
				printf("* ");
		}printf("\n");k--;
	}
	
	return 0;

}
