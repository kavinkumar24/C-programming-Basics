////////////////          Good Program         /////////////////////

/* Problem
In computing, the collection of four bits is called a nibble.

Chef defines a program as: Good, if it takes exactly 

 X nibbles of memory, where X is a positive integer.
  Not Good, otherwise.
  Given a program which takes
N bits of memory, determine whether it is Good or Not Good.*/


#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
    for(int i = 0;i<T;i++){
        int req;
        scanf("%d",&req);
        if(req%4==0){
            printf("GOOD\n");
        }
        else{
            printf("NOT GOOD\n");
        }
    }
	return 0;
}
