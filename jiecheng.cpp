#include<stdio.h>
int factorial( int n );

int main(  )
{
	int n,res ;
	
	scanf( "%d",&n ) ;
	res = factorial( n ) ;
	
	printf( "res = %d\n",res ) ;
	return 0 ;
}

int factorial( int n )
{
	int i , t ;
	i = 1 ;
	t = 2 ;
	
	if(n <= 1) return 1 ;
	while(n-- > 1)
	{
		i = t * i ;
		t = t + 1 ;
	}
	
	return i ;
}
