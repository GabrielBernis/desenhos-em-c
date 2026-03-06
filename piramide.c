#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero impar: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Digite apenas numeros impares.\n");
        return 0;
    }
    int meio = num/2;
   for (int i = 0; i <= meio; i++)
   {
        
       for(int j = meio-i; j > 0; j--)
       {
           printf(" "); 
       }
       for(int j = 0; j < 2*i +1; j++)
       {
           printf("#");
       }
       printf("\n");
   }
    return 0;
}