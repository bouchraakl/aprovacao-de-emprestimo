
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//faz com que a função printf() mostre na tela os caracteres da Língua Portuguesa

int main()
{
    //Faz referência à todos os aspectos da localização
    setlocale(LC_ALL ,"");

    //Declaraçao de variáveis
    float valor_eprestimo , salario_do_solicitante , process , valor_de_parcelas ;
    int parcelas;

    //Entrada de dados
    printf("\nInsira o valor de emprestimo : ");
    scanf("%f", &valor_eprestimo);

    printf("\nInsira o numero de parcelas :");
    scanf("%d" ,&parcelas);

    printf("\nInsira seu salario:");
    scanf("%f" , &salario_do_solicitante);

    //Cálculos
    valor_de_parcelas = (valor_eprestimo/parcelas);
    process = (salario_do_solicitante/100)*30;

    if(valor_de_parcelas <= process){
        printf("Emprestimo aprovado");// será executada se a expressão é verdadeira
    }
    else {
        printf("Emprestimo não aprovado");// será executada se a expressão é falsa
    }



    return 0;
}
