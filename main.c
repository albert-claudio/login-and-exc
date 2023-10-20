#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float salario;
    int idade, menor_idade, maior_idade;
    int mulheres = 0;
    float soma;
    int quantidade = 0;
    char sexo;
    float media_salario;

    do
    {
        printf("Escolha uma das opÃ§Ãµes(1 para adicionar pessoa ou 2 para sair e mostra o resultado)\n");
        scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        printf("\nDigite a idade da pessoa: \n");
        scanf("%d", &idade);

        fflush(stdin);

        printf("Digite o sexo da pessoa(M/F): \n");
        scanf("%c", &sexo);

        fflush(stdin);

        printf("Digite o salário da pessoa:\n");
        scanf("%f", &salario);

        fflush(stdin);

        sexo = toupper(sexo);
     
        soma += salario;

        if(opcao == 1){
            quantidade += 1;
          }

        media_salario = soma / quantidade;


        maior_idade = maior_idade > idade ? maior_idade : idade;
        menor_idade = menor_idade < idade ? menor_idade : idade;

        
        if(sexo == 'F' && salario >= 5.000){
            mulheres ++;
        }

        printf("\n");

        break;
        system("cls || clear");
    case 2:
    printf("Média Salarial: %.2f \n", media_salario);
    printf("Maior idade: %d \n",menor_idade);
    printf("Menor idade: %d \n",maior_idade);
    printf("Quantidade de mulheres com salario acima de R$5.000: %d \n",mulheres);

    break;

    default:
        printf("Opção Inválida");
        sleep(3);
        system("cls || clear");
    }
    }while(opcao != 2);

    return 0;
}
