#include <stdio.h>

int main(){
int senha;

printf("Digite sua idade.\nSenha ");
scanf("%d", &senha);
if(senha == 123){
    printf("Senha correta");
}
else{
    printf("Senha errada. ");
}
}
