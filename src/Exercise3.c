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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int i=2;
	while (testcase!=1)
	{ 	if (testcase%i==0){
		testcase=testcase/i;
		printf("%d ",i);
		if(testcase!=1){
			printf("* ");
		}
		i=2;
	}
	    else{
			i++;
		}
	
		
	}
	
	
	return 0;
}