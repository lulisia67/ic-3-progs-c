//Esercizio Pelosi Tabelline
#include <stdio.h>
void main()
{
    int x,y,p,z;
    printf("inserire un numero intero tra 1 e 20\n");
    scanf("%d",&x);
    while(x<1||x>20)
    {
        printf("inserire un numero intero tra 1 e 20\n");
        scanf("%d",&x);
    }

    z=1;
    while(z<=x)
    {
        y=1;
        while(y<=x)
        {
             p=z*y;
            y++;
            printf("\t%.3d",p);
        }
          y=x;
        z++;
        printf("\n");
    }
}
