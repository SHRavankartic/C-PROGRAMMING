#include <stdio.h>
int main(void)
{
	int n,temp,m=0,x=10,a;
	int t=3;
	printf("Enter the no.:\n");
	scanf("%d",&n);
	temp=n;
	int y=n;
	while(t>0)
	{
		m=(n*x);
		a=m+y;
		x*=10;
		temp+=a;
		t--;
		y=a;
	}
	printf("%d",temp);
}
