/******************************************************************************
Codigo Teste, (tem coisas erradas nele!!!)
*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
    int senha;
    int nome;
    int idade;
    
    printf("   Seja Bem-vindo!! \n");
    printf("Para efetuar o login, digite '1'. Se for novo na plataforma, digite '2'\n ");
    
    printf("Digite: ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Digite a senha admin para efetuar o login\nSenha: ");
        scanf("%d", &senha);
        if(senha == 1243){
            printf("Login efetuado com sucesso!");
        }
        else{
            printf("Senha errada, volte e tente novamete!");
        }
    }
    else if(opcao == 2){
        printf("Para efetuar o cadastro, você precisara ser maior de idade!");
        printf("Digite o seu nome: ");
        scanf("%d", &nome);
        if(nome )
        
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if(idade >= 18 ){
            printf("Cadastro efetuado, parabens!");
        }
        else{
            printf("Apenas de maiores podem fazer esse cadastro!");
        }
        
    }
    
}
