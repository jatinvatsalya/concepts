#include <stdio.h>
#include <stdlib.h>

char * dup(char * str, int size)
{
	int i;
	char * result;
	
	result = malloc( size + 1);
	//memset(result, 0, size );
	for( i = 0; i < size; ++i )
	{
		result[ i ] = str[ i ];
	}
	result[i] = '\0';
	
	return result;
}

int main()
{
	printf("Hello\n");
	printf("duplicate = %s\n", dup("getting there", 14)); 
}
