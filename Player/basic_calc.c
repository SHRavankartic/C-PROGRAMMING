#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g;
	printf("Enter the no.s to perform basic calculator oerrations:\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("%d\n%d\n%d\n%d\n%d\n",c,d,e,f,g);
}
