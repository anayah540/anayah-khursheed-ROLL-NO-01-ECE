#include<stdio.h>
//printing * pattern
int main(){
	int i ,j,k;
	
	
	for(i=1;i<=4;i++ )
	{
		for(j=1;j<4;j++);
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