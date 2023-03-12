/////////////////            Codechef Airlines////////////////

/* Problem
Chef has opened a new airline. Chef has 
10 airplanes where each airplane has a capacity of 
X passengers.
On the first day itself, Y people are willing to book a seat in any one of Chef's airplanes.
Given that Chef charges Z rupees for each ticket, find the maximum amount he can earn on the first day.*/


///solution///


#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int X,Y,Z;
        scanf("%d %d %d",&X,&Y,&Z);
        int D = 10*X;
        if(D>=Y){
            printf("%d\n",Y*Z);
        }
        else{
            printf("%d\n",10*X*Z);
        }
    }
	return 0;
}

