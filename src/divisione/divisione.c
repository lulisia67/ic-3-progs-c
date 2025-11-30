//Esercizio Pelosi divisione
#include <stdio.h>
void main()
{
    int x,y,n,s,z;
    printf("inserire due numeri interi\n");
    scanf("%d",&x);
    scanf("%d",&y);
    z=x;
    n=0;
    if(y==0)
    {
        printf("non esiste il risultato della divisione");
    }
    else
    {
        if(x==0)
        {
            printf("il risultato della divisione e' zero");
        }
        else
        {

            if(z>0 && y>0)
            {
                while(z>=0)
                {
                    z=z-y;
                    n=n+1;
                    printf("DEBUG(1) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                }
                printf("DEBUG(2) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                s=x-((n-1)*y);
                printf("%d e' il risultato della divisione con resto %d",n-1,s);
            }
        else
        {
            if(z<0 && y<0)
            {
                while(z<=0)
                {
                    z=z-y;
                    n=n+1;
                    printf("DEBUG(1) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                }
                printf("DEBUG(2) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                s=x-((n-1)*y);
                printf("%d e' il risultato della divisione con resto %d",n-1,s);
            }
            else
            {
                if(z<0 && y>0)
            {
                while(z<=0)
                {
                    z=z+y;
                    n=n+1;
                    printf("DEBUG(1) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                }
                printf("DEBUG(2) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                s=(x+((n-1)*y));
                printf("%d e' il risultato della divisione con resto %d",-(n-1),s);
            }
            else
            {
                   if(z>0 && y<0)
            {
                while(z>=0)
                {
                    z=z+y;
                    n=n+1;
                    printf("DEBUG(1) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                }
                printf("DEBUG(2) n=%d, z=%d, x=%d, y=%d \n", n,z,x,y);
                s=(x-((n-1)*(-1)*y));
                printf("%d e' il risultato della divisione con resto %d",-(n-1),s);
            }
            }
            }




        }
        }
    }


}
