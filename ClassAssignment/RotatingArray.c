#include<stdio.h>
int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7,8,9};
	l2(a,3,9);
	display(a,9);
	getchar();
}
void l1(int a[], int n);
void l2(int a[], int d, int n);
void l2(int a[], int d, int n)
{
	int i;
	for (i = 0; i < d; i++)
	l1(a, n);
}
void l1(int a[], int n)
{
	int i, temp;
	temp = a[0];
	for (i = 0; i < n-1; i++)
	a[i] = a[i+1];
	a[i] = temp;
}
void display(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	printf("%d ", a[i]);
}
