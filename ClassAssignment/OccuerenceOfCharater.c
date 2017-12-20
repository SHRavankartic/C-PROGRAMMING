#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[100];
	int i,l,f[26];
	printf("Enter a string:\n");
	gets(s);
	l=strlen(s);
	for(i=0;i<26;i++)
		f[i] = 0;
	for(i=0; i<l; i++)
	{
		if(s[i]>='a' && s[i]<='z')
			f[s[i] - 97]++;
		else if(s[i]>='A'&&s[i]<='Z')
			f[s[i]-65]++;
	}
	for(i=0; i<26; i++)
	{
		if(f[i] != 0)
			printf("'%c'=%d\n",(i+97),f[i]);
	}
}
