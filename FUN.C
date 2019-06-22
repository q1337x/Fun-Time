#include<stdio.h>
#include<conio.h>
int mprint();
int mprint2();
int mprint3();
int mprint4();
int main()
{
	int i;
	for(i=1;i<10;i++)
	{   clrscr();
		  mprint();
		  delay(500);
		  clrscr();
		  mprint2();
		  delay(500);
		  clrscr();
		  mprint3();
		  delay(500);
		  clrscr();
		  mprint4();
		  delay(500);
	}
	return 0;
}
int mprint()
{
	printf("\n\n\t\t1\n\n\n\t4\t\t2\n\n\n\t\t3\n");
	return 0;
}
int mprint2()
{
	printf("\n\n\t\t2\n\n\n\t1\t\t3\n\n\n\t\t4\n");
	return 0;
}
int mprint3()
{
	printf("\n\n\t\t3\n\n\n\t2\t\t4\n\n\n\t\t1\n");
	return 0;
}
int mprint4()
{
	printf("\n\n\t\t4\n\n\n\t3\t\t1\n\n\n\t\t2\n");
	return 0;
}