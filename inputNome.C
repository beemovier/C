// Online C compiler to run C program online
#include <stdio.h> //standard io
char nome[20];//array de char forma a sring
int main() {
    // Write C code here
    printf("Escreva seu nome aqui: ");
    scanf("%s",nome);//scanner formatted
    //string é o unico que não precisa do &
printf("Seu nome é: %s \n",nome);
    return 0;
}
//"%d""%d""%d" são especificadores de formato
//indicam onde e como ele devem ser imprimidos
//os valores fornecidos, na posição desejada
