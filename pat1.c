#include<stdio.h>

int main(){
	int i,n,pr=1,j;

	printf("Enter the rows: ");
	scanf("%d",&n);	
	
	for(i = 1;i<=n;i++){
		for(j = 0;j<i;j++)
		{
			printf("%d ",pr++);
		}printf("\n");
	}

	return 0;	
}
