#include<stdio.h>
int main()
{
	int x(int a);
	int y(int c);
	int t,i,n,m;
	scanf("%d",&n);
	t=1;
	i=x(n);
	m=y(n);
	while(i<=m)
	{
	t=t*i;
	i=i+1;
	}
	printf("%d\n",t);
	return 0;
 } 
 int x(int a)
 {
 	int b;
    if(1<a)b=2;
	else b=1;
	return (b);
 }
 int y(int c)
 {
 	int d;
 	d=c;
 	return (d);
 }
