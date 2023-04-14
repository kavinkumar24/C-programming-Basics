//Problem Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.




// solution


#include <stdio.h>
int main(void) {
	int t,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int m,n;
	    scanf("%d %d",&m,&n);
	    a=m;
	    b=n;
	    while(n!=0){
	        int r;
	        r=m%n;
	        m=n;
	        n=r;}
        long LCM = (long int)a*b/m;
	    printf("%d %li\n",m,LCM);
	}
	return 0;
}
