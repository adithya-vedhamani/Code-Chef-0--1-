#include <stdio.h>
int main()
{   int n,i;
    char ch;
    scanf("%d",&n);
    for(i=0;i<=2*n;i+=1)
    {   scanf("%c",&ch);
        switch(ch)
        {   case 'b': printf("BattleShip\n");
                    break;
            case 'B': printf("BattleShip\n");
                    break;
            case 'c': printf("Cruiser\n");
                    break;
            case 'C': printf("Cruiser\n");
                    break;
            case 'd': printf("Destroyer\n");
                    break;
            case 'D': printf("Destroyer\n");
                    break;
            case 'f': printf("Frigate\n");
                    break;
            case 'F': printf("Frigate\n");
                    break;
        }  
    }  
    return 0;

}
