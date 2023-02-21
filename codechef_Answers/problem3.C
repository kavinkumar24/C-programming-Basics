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
