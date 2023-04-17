///////////////         First and Last Digit         /////////////////


/*Problem
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.*/

//// solution///////////



#include <stdio.h>
int main()
{
    int l,n,t,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        l = n%10;
        while(n>0) {r=n%10; n/=10;}
        printf("%d\n",r+l);
    }
    return 0;
}
