///////////////////////Just One More Episode////////////////////////////


/*Problem
Chef has to attend an exam that starts in X minutes, but of course, watching shows takes priority. Every episode of the show that Chef is watching, is  24
24 minutes long.
If he starts watching a new episode now, will he finish watching it strictly before the exam starts?*/

///////////////////////////////SOLUTION//////////////////////////

#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int amt_time;
        scanf("%d",&amt_time);
        if(amt_time>24){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
	return 0;
}



