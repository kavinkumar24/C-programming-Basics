//////////////////////////////       Better Deal //////////////


/*Problem
There are 2 stores in Chefland and both sell the same product. The first store sells the product for 100 rupees whereas the second store sells it for 200 rupees.
It is the holiday season and both stores have announced a special discount. The first store is providing a discount of
A percent on its product and the second store is providing a discount of B percent on its product.
Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal*/





#include <stdio.h>
int main(void) {
    int T;
    scanf("%d",&T);
    for(int i = 0;i<T;i++){
        int A,B;
        float C,D;
        scanf("%d %d",&A,&B);
        C = 100 - (100 * A/100);
        D = 200 - (200 * B/100);
        if(C>D){
            printf("SECOND\n");
        }
        else if(C==D){
            printf("BOTH\n");
        }
        else{
            printf("FIRST\n");
        }
        
    }
	return 0;
}
