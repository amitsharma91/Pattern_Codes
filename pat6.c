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

#include<stdio.h>

int main(){
	int i,j,k=3,flag=0;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j<=k)
				printf("  ");
			else 
				printf("* ");
		}printf("\n");
		if(k==-1){
			flag = 1;
			i=0;
		}
		if(flag == 0)
			k--;
		if(flag == 1)
			k++;
	}
	return 0;
}
