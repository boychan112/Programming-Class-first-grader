//두 개의 정수(~100)를 연락받아 출력-test2_4_1.c
//조건1 : 정수를 입력할 때는 'Enter'사용하지 않음(1~10점은 제외)
//조건2 : 불필요한 문자는 입력받지 않음
//조건3 : 반복문은 3개 이하만 사용
//조건4 : 분량은 주석문과 빈줄, 블럭({})을 제외하고 30라인 이하로 작성
#include <stdio.h>
main()
{
	int a, b, c;
	
	printf("점수를 입력하세요 =>");
	do{
		a=getch()-'0';
	}while(a<0||a>9);
	printf("\n점수 : %d",a);	
	
	if(a==0) { return;}
	do {
		b=getch()-'0';	
	}while(b<0||b>9);
	printf("%d\n", b);
		
	if(b==1&&a==0) { 
		do {
			c=getch()-'0';
			if(c==-35) { return; }
		}while(c!=0);
	printf("%d",c); 
	}
	
	
//#include <stdio.h> 
//main() {
//    int a,b,c
//    printf("점수를 입력하세요");
//
//    do
//    {
//        a = getch() - '0';
//    }while(a[0]<0 || a>9);
//    printf("\n점수 : %d", a[0]);
//
//    if(a==0) {
//
//        return;
//    }
//    do
//    {
//        b = getch() - '0';
//    }while(b<0 || b>9);
//    printf("%d", a[1]);
//
//    if(a[1]==0 && b==1) {
//        do
//        {
//           c=getch()-'0';
//           if(c==-35) {
//               return;
//           }
//      }while(c!=0);
//    printf("%d", );
//}
//}	
}
