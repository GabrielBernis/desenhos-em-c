#include <stdio.h>

 void square(int a)
    {
        for (int i = 1; i <= a; i++)
        {
             printf("#"); 
        }
        printf("\n");
        for (int j = 1; j <= (a-2); j++)
             {
                 
                 printf("#");
                 for (int l = 1; l <= (a-2); l++)
                 {
                     printf(" ");
                 }
                 printf("#\n");
             }
        for (int v = 1; v <= a; v++)
        {
             printf("#"); 
        }
        
     
    }


int main()
{
   
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    square(num);
    
    return 0;
}