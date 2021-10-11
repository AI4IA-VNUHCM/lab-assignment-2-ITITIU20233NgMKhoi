/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int len = argc;
	int arr[len],i;
	for(i=0; i<len;i++){
		arr[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int temp, len;

    for (i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
	    {
	        if(arr[j] < arr[i])
	        {
	            temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
    }
    //printing first half of the array
  
    for (i = 0; i < len / 2; i++)
    {
        printf ("%d ", arr[i]);
    }
    //printing second half of the array
  
    for (i = len - 1; i >= len / 2; i--)
    {
        printf ("%d ", arr[i]);
    }
     return 0;
}
