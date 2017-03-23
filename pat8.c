/*
	  * * *   
	*   *   * 
	* *   * * 
	*   *   * 
	  * * *  

	*       * 
	  *   *   
		 *     
	  *   *   
	*       *

*/


#include<stdio.h>

int main(){
	
	int i,j,x=1,y=5,flag = 0;

	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if((j==x) || (j==y)){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}printf("\n");
		
		if(flag == 1){
			x--;y++;
		}
		if(x<3 && y>3 && flag == 0){
			x++;y--;
			if(x==y)
				flag = 1;
		}	
		
	}
	return 0;
}
