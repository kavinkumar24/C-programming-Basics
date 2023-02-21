
///////Discount////////////////
/*Problem
Alice buys a toy with a selling price of 
100
100 rupees. There is a discount of 
x percent on the toy. Find the amount Alice needs to pay for it.
Input Format
The first line of input will contain a single integer 
T, denoting the number of test cases.
The first and only line of each test case contains a single integer, 
x — the discount on the toy.
*/

#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a;
        scanf("%d \n",&a);
        int c = 100-a;
        printf("%d \n",c);
    }
	return 0;
}
