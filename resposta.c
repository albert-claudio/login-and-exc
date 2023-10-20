#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

char resposta[250];
float soma;
int contador;

do
{   
    printf("Digite %dº a nota: ", i++);
    scanf("%f", &nota);

    soma += nota;

    printf("Deseja continuar digitar outra nota:\n");
    printf("S - Sim | N - Não\n");
    scanf(" %c", &resposta);

    resposta = toupper(resposta);
    if(resposta == 'N')
    {
        media = soma/contador;
        printf("A media foi %.1f\n", media);
    }

} while (resposta != 'N');



    return 0;
}