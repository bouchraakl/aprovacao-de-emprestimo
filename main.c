
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//faz com que a fun��o printf() mostre na tela os caracteres da L�ngua Portuguesa

int main()
{
    //Faz refer�ncia � todos os aspectos da localiza��o
    setlocale(LC_ALL ,"");

    //Declara�ao de vari�veis
    float valor_eprestimo , salario_do_solicitante , process , valor_de_parcelas ;
    int parcelas;

    //Entrada de dados
    printf("\nInsira o valor de emprestimo : ");
    scanf("%f", &valor_eprestimo);

    printf("\nInsira o numero de parcelas :");
    scanf("%d" ,&parcelas);

    printf("\nInsira seu salario:");
    scanf("%f" , &salario_do_solicitante);

    //C�lculos
    valor_de_parcelas = (valor_eprestimo/parcelas);
    process = (salario_do_solicitante/100)*30;

    if(valor_de_parcelas <= process){
        printf("Emprestimo aprovado");// ser� executada se a express�o � verdadeira
    }
    else {
        printf("Emprestimo n�o aprovado");// ser� executada se a express�o � falsa
    }



    return 0;
}
