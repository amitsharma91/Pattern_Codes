/*
	* * * * * 
	  * * * * 
		 * * * 
		   * * 
		     *
*/

#include<stdio.h>

int main(){
	int i,j,k=-1;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j<=k)
				printf("  ");
			else
				printf("* ");
		}printf("\n");k++;
	}	
	
	return 0;
}
