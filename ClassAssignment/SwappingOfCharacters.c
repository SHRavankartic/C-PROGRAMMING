#include <stdio.h>
#include <string.h>
void main()
{
	char str[20],tmp;
	int i;
	printf("Enter a string:");
	scanf("%s",str);
	for(i=0;i<strlen(str)-1;i=i+2)
	{
		tmp = str[i];
		str[i] = str[i+1];
		str[i+1] = tmp;
	}
	printf("\nAfter Swap String:%s",str);
}
