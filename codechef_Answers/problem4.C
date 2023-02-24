

///////////////////////////////////Tom and Jerry Chase///////////////////////////////////////
///Problem
/*In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.
Jerry is running at a speed of X metres per second while Tom is chasing him at a speed of Y metres per second. Determine whether Tom will be able to catch Jerry.
 Note that initially Jerry is not at the same position as Tom.*/

#include <stdio.h>

int main(void) {
    int i;
    scanf("%d",&i);
    for(int n=0;n<i;n++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(y>x){
            printf("YES \n");
        }
        else{
            printf("NO \n");
        }
    }
	return 0;
}



