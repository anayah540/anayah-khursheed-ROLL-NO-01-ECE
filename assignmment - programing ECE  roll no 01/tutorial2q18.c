#include<stdio.h>
//b part of pattern question 18
void main(){
	int i,k,j;
	int n=4;
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	

	
	return 0;

	
}
	