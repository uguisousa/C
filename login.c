#include <stdio.h>

int main()
{   
        int senha;
        int opcao;
        int senhaAdmins;
        
        printf("Sistema Login!\n");
            
            printf("Digite sua senha: ");
            scanf("%d", &senha);
            if(senha == 2020){
              printf("Login efetuado com sucesso!\n\n");
              
              printf("Para acessar o Painel, Digite '1'.\nPara acessar o registro, Digite '2'\nDigite: ");
              scanf("%d", &opcao);
              if(opcao == 1){
                  printf("== PAINEL DE CONTROLE ==\nErro, o painel está em manutencao");
                }
              else if(opcao == 2 ){
                  printf("== REGISTRO ADM ==\nPara acessar o registro, insira a senha admin.\nSenha: ");
                  scanf("%i", &senhaAdmins);
                  
                  if(senhaAdmins == 1010);
                  printf("Seja bem-vindo ao registro adm. Verifique as alterações abaixo\n");
                  //banco de registro
                  printf("Sem alterações!");
                  
              }
                else{ 
                    printf("Senha invalidade, faça tudo novamente.");
                }
            }
            else{ //senha login - errada
                printf("Senha invalida");
            }
    return 0;
}
