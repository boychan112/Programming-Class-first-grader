//p138_41linear2
#include <stdio.h>
#include <time.h>
#define NO 10
main()
{
	int s,a, i, j, n[NO], flag=0; //search - 검색 / i = 증가하는 값 / n = 난수 
	
	srand(time(NULL));
	printf("검색할 숫자를 정수로 입력하시오 : ");
	s = getche() - '0';
	
	for(i=0;i<NO;i++)
	{
		n[i]=1+rand()%9;
	}
//	for(i=0;i<NO;i++)
//	{
//		if(a==n[i])
//		{
//			a=a+1;
//		}
//	}
//	if(a==0)
//	{
//		continue;
//	}
	printf("\n%d는(은) 배열의",s); 
	for(i=0;i<NO;i++)
		if(s==n[i])
		{
		
			printf(" %d ", i+1);
			flag=1;
		}	
		
	for(j=0;j<i;j++)
		if(n[i]==n[j])
		{
			printf(", %d", i+1);
			break;
		}
		printf("번째에 위치합니다."); 
	if(flag==0) 		
		printf("\n입력한 자료가 존재하지 않습니다.");
		printf("\n난수 => ");
	for(i=0;i<NO;i++)
		printf("%2d ", n[i]); 
}

