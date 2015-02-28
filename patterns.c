#include <stdio.h>

main()
{

	// Make some patterns
	int i, j, k, l, m, n, o;

	// 1
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	printf("\n");

	// 2
	for (j = 10; j > 0; j--)
	{
		for (k = j; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");	
	}  
	printf("\n");	

	// 3
	for (j = 10; j > 0; j--)
	{
		for (k = j; k > 0; k--)
		{
			printf(" ");
		}
		for (l = j; l <= 10; l++)
		{
			printf("*");
		}
		printf("\n");		
	}  
	printf("\n");

	// 4
	for (m = 0; m <= 10; m++)
	{
		for (n = 0; n < m; n++)
		{
			printf(" ");
		}
		for (o = m; o <= 10; o++)
		{
			printf("*");
		}
		printf("\n");	
	}
	printf("\n");

}	
