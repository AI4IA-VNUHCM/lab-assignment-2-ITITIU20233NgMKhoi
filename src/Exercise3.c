/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i;
void primefactors(int n)
	{
		while ( n % 2==0)
		{
			printf("%d ", 2);
			n = n/2;
		}
		for (int i=3; i<= sqrt(n); i=i+2)
		{
			while (n%i ==0)
			{
				printf("%d *",i);
				n=n/i;
			}
		}
		if (n>2)
		printf(" %d ",n);
	}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	//Your codes here	
	primefactors(n);
	return 0;
}