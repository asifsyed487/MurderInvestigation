#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[1000],j,c=0,c1=0,n,i,room_number,sum;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                                        M U R D E R E R   O N   T H E   O R I E N T   E X P R E S S\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    getchar();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                                        T h e r e   a r e   1 0 0   R o o m s   o u t   t h e r e.\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    getchar();
    system("cls");
    for(i=1; i<=1000; i++)
    {
        c=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                c++;

            }
        }

        if(c==2)
        {
            a[c1+1] = i;
            c1++;

        }
    }
   for(i=1;i<=100;i++)
   {
       sum=0;
       printf("\n\nEnter Room Number (or Enter 0 to exit) : ");
       scanf("%d", &room_number);
       if((room_number != 0) && (room_number <= 100))
       {
            printf("\n\n Unlock With : %d", a[room_number]);
            sum=room_number + a[room_number];
            printf("\t\t Lock With : %d", sum);
       }
       else if(room_number > 100)
       {
           printf("\n\n Room does not exist.\n\n");
       }
       else if(room_number==0)
       {
           getchar();
           system("cls");
           printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
           printf(" \t\t\t\t\t\t                            E x i t e d.\n\n\n");
           printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
           break;
       }

   }
   return 0;







}
