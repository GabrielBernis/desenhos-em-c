#include <stdio.h>

void los_impar(int tamanho)
{
    int baseInferior = tamanho;
    int controleTopo = tamanho;

    for(int linha = 1; linha <= (tamanho/2); linha++){
        for (int espaco = linha; espaco <= (tamanho/2); espaco++)
        {
            printf(" ");
        }

        controleTopo -= 2;

        for (int coluna = controleTopo ; coluna < (tamanho-1) ; coluna++)
        {
            printf("#"); 
        }

        printf("\n");
    }

    for (int coluna = 1; coluna <= tamanho; coluna++)
    {
        printf("#"); 
    }

    printf("\n");

    for(int linhaInferior = 1; linhaInferior <= (tamanho/2); linhaInferior++){
        for (int espaco = 0; espaco <= tamanho-(baseInferior); espaco++)
        {
            printf(" ");
        }

        for (int coluna = linhaInferior+2; coluna <= baseInferior ; coluna++)
        {
            printf("#"); 
        }

        printf("\n");

        baseInferior -= 1; 
    }
}

int main()
{
    int numero;

    printf("digite um numero impar: ");
    scanf("%d", &numero);

    if (numero % 2 != 0) {
        los_impar(numero);
    }
    else if (numero % 2 == 0){
        printf("digite apenas numeros IMPARES!\n");
        main();
    }

    return 0;
}