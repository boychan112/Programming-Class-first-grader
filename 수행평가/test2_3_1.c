//2학기 3차 1회 수행평가(test2_3_1.c)
//1. 20명의 점수를 40~100 사이의 난수로 배열에 저장
//2. 3의 배수이면서 5의 배수인 수를 모두 출력
//3. 총점과 평균(소수 둘째자리까지)을 출력
//4, 최댓값과 최솟값을 출력
//5. 홀수와 짝수의 개수를 출력

#include <stdio.h>
#include <time.h>
#define NO 20
main()
{
	int i, a[NO], sum=0, max=0, min=100, odd=0, even=0, su;
	float avg=0;
	
	srand(time(NULL));
	printf("1. 발생한 난수 => ");
	for(i=1;i<=NO;i++)
	{
		a[i]=40+rand()%61;
		printf ("%d ,", a[i]);
	}
	printf("\n"); 
	
	for(i=1;i<=NO;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
		
		if(a[i]%3==0&&a[i]%5==0)
		{
			su=a[i];
		}
		if(a[i]%2==1)
		{
			odd++; 
		}
		if(a[i]%2==0)
		{
			even++;
		}
		sum=sum+a[i];
	}
		avg=(float)sum/20;
		printf ("2. 3과 5의 배수인 =>%d\n", su);
		printf ("3. 총점과 평균 : %d, %.2f\n", sum, avg);
		printf ("4. 최댓값과 최솟값 : %d, %d\n", max, min);
		printf ("5. 홀수와 짝수의 개수 : %d, %d\n",odd, even); 
} 
