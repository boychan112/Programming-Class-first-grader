//버블 정렬(bubble sort)-p138_1bubble1 
#include <stdio.h>
#define NO 8
#define p int i, j, flag, temp, n[NO]={71,12,32,4,18,10,33,24};
main()
{
	p;
	
	srand(time(NULL));
	for(i=0;i<NO;i++) 
		n[i]=rand()%100;
		
	printf("정렬 전 : ");
	for(i=0;i<NO;i++) 
		printf("%2d\t", n[i]); 
	
	for(i=NO-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(n[j]>n[j+1]) 
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
				flag=1;
			}
			if(flag==0) break;
		}	
	}
	
	printf("\n정렬 후 : "); 
	for(i=0;i<NO;i++)
		printf("%2d\t", n[i]);
}
