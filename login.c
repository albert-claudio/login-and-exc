#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char login[250];
    char senha[250];
    char loginsalvo[250] = "Narutinhopneuqueimado@gmail.com";
    char senhasalvo[250] = "<PASSWORD>";
    int sign;
    char login1[250];
    char senha1[250];
    char resposta[200];

    do
    { 

    printf("------------SURFACE WEB-----------------\n");
    printf("Escolha uma das opções:\n");
    printf("1 - Login: \n");
    printf("2 - Cadastro: \n");
    scanf("%d", &sign);

    switch (sign)
        {
        case 1:
        do
        {
        printf("Usuário: ");
        gets(login);

        printf("Senha: ");
        gets(senha);

        if (strcmp(login, loginsalvo) != 0 && strcmp(senha, senhasalvo) != 0){
            printf("Usuário e senha errado");
        }else{
            printf("Entrou!");
        }
    } while (strcmp(login, loginsalvo || login1) != 0 && strcmp(senha, senhasalvo || senha1) != 0);
    
            break;

    case 2:
    printf("Crie um Usuário:");
    gets(login1);

    printf("Crie uma Senha:");
    gets(senha1);

    system("cls || clear");

    printf("Desejar retorna para pagina inicial? \n");
    gets(resposta);
    break;

    default:
        printf("Opção Inválida!");
        break;
    }

}while (strcmp(resposta, "sim") == 0);

    


    return 0;
 }