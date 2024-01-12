#include <iostream>
#include <string>

int main(){
     //Criando uma variavel
     int variavel = 10;

     //Imprimindo a variavel
     printf("Variavel: %d\n", variavel);

     //Definindo um ponteiro
     int *ponteiro;

     //Definindo o endereço que o ponteiro vai apontar
     ponteiro = &variavel;

     //Podemos mudar o valor da variavel assim
     //Apontado por ponteiro (variavel) recebe 80
     *ponteiro = 80;

     printf("Novo valor da variavel que valia 10: %d\n", variavel);

     int novaVar;
     printf("Digite o valor da variavel: ");

     //& (E comercial) aponta o endereço de uma variavel na memoria
     scanf("%d", &novaVar);

     //lendo o endereço de memoria da variavel novaVar
     printf("Endereco da novaVar: %d", &novaVar);

     return 0;
}