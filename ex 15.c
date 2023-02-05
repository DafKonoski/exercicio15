//Entrar com um nome e imprimir o nome somente se a primeira letra do nome for “a” (maiúscula ou minúscula).

#include <stdio.h>

int main() {

  char nome[20];
  
  printf("Digite um nome:\n");
  gets(nome);

  if(nome[0] == 'a' || nome[0] == 'A'){
    printf("%s", nome);
  }
}