#include <stdio.h>
int main()
{
	int i,n,max,min,n1;
	printf("Enter total number of elements\n");
	scanf("%d",&n);
	
	printf("Enter first number\n");
	scanf("%d",&n1);
	
	max=n1;
	min=n1;
	for(i=1;i<=n-1;i++){
		printf("\n Enter another number\n");
		scanf("%d",&n1);
		if(n1>max)
		max=n1;
		if(n1<min)
		min=n1;
	}
	printf("\n The largest number is %d\n",max);
	printf("\n The smallest number is %d\n",min);
	return 0;
}