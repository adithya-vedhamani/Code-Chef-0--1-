#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a<b)
	    {
	        printf("\n<");
	    }
	    else if(a>b)
	    {
	        printf("\n>");
	    }
	    else
	    {
	        printf("\n=");
	    }
	}
	return 0;
}

