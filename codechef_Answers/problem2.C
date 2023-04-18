////Final Population/////
// Problem 
// There were initially X million people in a town, out of which 
// Y million people left the town and 
// Z million people immigrated to this town.
// Determine the final population of town in millions.
  
// Input Format
// The first line of input will contain a single integer 

// T, denoting the number of test cases.
// The first and only line of each test case consists of three integers 
// X, Y and  Z.
// Output Format
// For each test case, output the final population of the town in millions.
/// answer///////////////////////////////

#include <stdio.h>
int main(void) {
	int i;
	scanf("%d",&i);
	for(int n= 0;n<i;n++){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    printf("%d \n",(x-y)+z);
	}
	return 0;
}
