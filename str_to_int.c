#include <stdio.h>
#include <stdlib.h>

int conv( char * str, int size )
{
	int i;
	int result = 0;
	
	for ( i = 0; (i < size) && (str[i] != NULL); ++i )
	{
	    result *= 10;
		result += str[ i ] - '0';
	}
	
	return result;
}

int main()
{
	printf("Hello\n");
	printf("integer = %d\n", conv("2345", 7)); 
}
