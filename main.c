#include <stdio.h> // Biblioteca padrão de entrada e saída

// Declaração de funções/variáveis globais (opcional)

int main()
{
    // Corpo do programa: instruções aqui
    int a, b, c, validation = 0;

    printf("What is the length of a side of triangle A?");
    scanf("%d", &a);

    printf("What is the length of a side of triangle B?");
    scanf("%d", &b);

    printf("What is the length of a side of triangle C?");
    scanf("%d", &c);

    //Se (lado1 < lado2 + lado3) E (lado2 < lado1 + lado3) E (lado3 < lado1 + lado2) Então
    validation = (a < b + c) && (b < a + c) && (c < a + b);

    if (validation)
    {
         //lado1 = lado2) E (lado2 = lado3) Então
        if ((a == b) && (b == c))
        {
            printf("Equilateral");
        }else if((a == b) || (a == c) || (b == c)){
            printf("Isosceles");
        }else{
            printf("Scalene");
        }
    }else{
        printf("Invalid triangle");
    }
    

    return 0; // Indica que o programa terminou com sucesso
}
