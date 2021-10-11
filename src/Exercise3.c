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

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int d;
	for (int i=2;i<=testcase;i++) {
		int count = 0;
		for(int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				count++;
			}	
		}
		if(count == 0) {
		
		}

	}
	return 0;
}
