#include<stdio.h>
#include<conio.h>
main()
{
	int i, n, m, a,b,c,d, s=0;
	printf("Enter any 5 digit number: ");
	scanf("%d",&n);
	m=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	s=a+b+c+d+n;
	printf("The sum of digits of %d is %d",m,s);
	getch();
}
