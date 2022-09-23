//https://www.codechef.com/submit/CHEFGAMES
#include <stdio.h>

int main() {
	int T;
	printf("Enter the number of cases: ");
	scanf("%d", &T);
    int numOfCases = 0;
	
    while (numOfCases != T)
    {
        int R[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &R[i]);
        }
        if (R[0]==0 && R[1]==0 && R[2]==0 && R[3]==0)
        {
            printf("in\n");
        }
        else{
            printf("out\n");
        }
        numOfCases ++;
    }
    
	return 0;
}