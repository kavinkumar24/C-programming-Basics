/// Insurance ///////////

/*Problem
Chef bought car insurance. The policy of the insurance is:
The maximum rebatable amount for any damage is Rs X lakhs.
If the amount required for repairing the damage is ≤X lakhs, that amount is rebated in full.
Chef's car meets an accident and required Rs 
Y lakhs for repairing.
Determine the amount that will be rebated by the insurance company.*/


// solution///

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i = 0;i<T;i++){
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X<Y){
	        printf("%d\n",X);
	    }
	    else{
	        printf("%d\n",Y);
	    }
	}
	return 0;
}

