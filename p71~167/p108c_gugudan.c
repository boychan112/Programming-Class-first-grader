//p108c_gugudan
main()
{
	int i, dan;
	char ch, yes;
	
	do 
	{
		system("cls"); //화면 지우는 것 
		printf ("출력할 구구단은? => ");
		ch=getche();
		putchar('\n');
		
		printf ("========%c단===========\n", ch);
		dan=ch-'0';
		for(i=1;i<=9;i++);
			printf ("%d * %d = %2d\n", dan, i, dan*i);
		printf ("-------------\n");
		printf ("다시 하겠습니다? (Y/N) => ");
		yes=getche();
		putchar('\n');
	} while (yes=='y');
}
