#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a+b+c == 180){
	        printf("\nYES");
	  	    }
	  	else
	  	{
	  	    printf("\nNO");
	  	}
	}
	return 0;
}
