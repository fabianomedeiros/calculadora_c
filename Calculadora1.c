#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float R, A, B;

int rotinaadicao(void);
int rotinasubtracao(float);
int rotinamultiplicacao(void);
int rotinadivisao(void);

int main()
{
    char TECLADO;
    int OPCAO = 0;
    while(OPCAO != 5)
    {
        printf("\nMenu Principal");
        printf("\n--------------------------------\n");
        printf("\n1 - Adicao");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\n5 - Fim do Programa\n");
        printf("\nEscolha uma opcao: ");
        fflush(stdin); scanf("%d", &OPCAO);

        if(OPCAO != 5)
        {
            if(OPCAO == 1)
                rotinaadicao();
            if(OPCAO == 2)
                rotinasubtracao()
            if(OPCAO == 3)
                rotinamultiplicacao();
            if(OPCAO == 4)
                rotinadivisao();


        }

    }
    return 0;
}
int rotinaadicao(void)
{
    printf("\nRotima de Soma");
    printf("\n-------------------------------------");
    printf("\nInforme um valor: "); fflush(stdin); scanf("%f", &A);
    printf("\nInforme outro valor: "); fflush(stdin); scanf("%f", &B);

    R = A + B;
    printf("\nA soma dos valores informados eh: %6.2f", R);
    printf("\nTecle <Enter> para acessar o Menu: ");
    getchar() + scanf("Enter");
    return 0;
}
int rotinasubtracao(void)
{
    printf("\nRotima de Subtracao");
    printf("\n-------------------------------------");
    printf("\nInforme um valor: "); fflush(stdin); scanf("%f", &A);
    printf("\nInforme outro valor: "); fflush(stdin); scanf("%f", &B);

    R = A - B;
    printf("\nA soma dos valores informados eh: %6.2f", R);
    printf("\nTecle <Enter> para acessar o Menu: ");
    getchar() + scanf("Enter");
    return 0;
}
int rotinamultiplicacao(void)
{
    printf("\nRotima de Multiplicacao");
    printf("\n-------------------------------------");
    printf("\nInforme um valor: "); fflush(stdin); scanf("%f", &A);
    printf("\nInforme outro valor: "); fflush(stdin); scanf("%f", &B);

    R = A * B;
    printf("\nA soma dos valores informados eh: %6.2f", R);
    printf("\nTecle <Enter> para acessar o Menu: ");
    getchar() + scanf("Enter");
    return 0;
}
int rotinadivisao(void)
{
    printf("\nRotima de Divisao");
    printf("\n-------------------------------------");
    printf("\nInforme um valor: "); fflush(stdin); scanf("%f", &A);
    printf("\nInforme outro valor: "); fflush(stdin); scanf("%f", &B);
    if (B == 0)
        printf("\nErro de divisao");
    else
    {
        R = A / B;
        printf("\nO resultado da divisao entre os valores informados eh: %6.2f", R);
    }

    printf("\nTecle <Enter> para acessar o Menu: ");
    getchar() + scanf("Enter");
    return 0;

}
