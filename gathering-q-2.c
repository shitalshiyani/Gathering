#include<stdio.h>

void sum(int arr[])
{
   int i,Sum=0;

   for(i=0;arr[i]!=NULL;i++)
     {
	    Sum=Sum+arr[i];
     }
     
	 printf("Addition of array=%d",Sum);
     
}
main()
{
	int a[100],n,i;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	sum(a);
}
