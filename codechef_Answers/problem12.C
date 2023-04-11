// que:
/// Couple Game///

//Problem
/*There are G girl and B boy students at IIT (BHU) such that B>G.If ICM were a team game where teams could only be of size 
2, having exactly 1girl student and 
1 boy student, what would be the minimum number of boy students from IIT (BHU) who would not be able to participate?*/



/// ans:





#include <stdio.h>
int main(void) {
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	   int g,b;
	   scanf("%d %d",&g,&b);
	   printf("%d\n",b-g);
	}

	return 0;
}
