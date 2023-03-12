////////    Sale Season//////////
/* Problem
It's the sale season again and Chef bought items worth a total of 
X rupees. The sale season offer is as follows:
if X≤100, no discount.
if 100<X≤1000, discount is  25 rupees.
if 1000<X≤5000, discount is 100 rupees.
if X>5000, discount is  500 rupees. Find the final amount Chef needs to pay for his shopping.*/



///////////////solution////////////

#include <stdio.h>

int main(void) {
	int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int A;
        scanf("%d",&A);
        if(A<=100){
            printf("%d\n",A);
        }
        else if(A<=1000){
            printf("%d\n",A-25);
        }
        else if(A<=5000){
            printf("%d\n",A-100);
        }
        else{
            printf("%d\n",A-500);
        }
    }
	return 0;
}

