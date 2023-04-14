/*Problem
Chef is given three numbers A,B, and C.
He wants to find whether he can select exactly two numbers out of these such that the product of the selected numbers is negative.*/


//solution

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a*b<0 || b*c<0 || c*a<0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
