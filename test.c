#include<stdio.h>
#include<stdlib.h>
int main()
{
	
}
int *g(void)
{
	int *px;
	px = (int *)malloc(sizeof(int));
	*px = 10;
	printf("%d", **px);
	return(px);
}
