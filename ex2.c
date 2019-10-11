/******************************************************************************
Exercício 2

Escreva um programa em C que dada uma string responda se é um palíndromo ou não
*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100    //Define tamanho padrão de strings

void clearString(char txt[]){
    //Limpa o \n no final da string
    //Para usar junto com fgets()...
    int len = strlen(txt);
    if(len != 0 && txt[len - 1] == '\n'){
        txt[len -  1] = '\0';
    }
}

void strToUpper(char txt[]){
    int i;
    for(i = 0; i < strlen(txt); i++){
        txt[i] = toupper(txt[i]);
    }
}

int main()
{
    char texto[SIZE];
    printf("Digite seu texto: ");
    /*
        gets(texto) - É perigoso e foi depreciado!
        fgets(texto, tamanho_vetor, stdin) - Lê até o \n (O \n será armazenado na string)
    */
    fgets(texto, SIZE, stdin);
    clearString(texto);
    strToUpper(texto);

    char textoInvertido[SIZE];
    strcpy(textoInvertido, texto);//Iniciar string com valor (só por seguranã rsrsrs)
    
    int pos = strlen(texto);
    int i = 0;
    while(i < pos){
        textoInvertido[i] = texto[pos - i - 1];
        i++;
    }
    
    if(strcmp(texto, textoInvertido) == 0){
        printf("Esta palavra é um palíndromo!");
    }
    else{
        printf("Esta palavra não é um palíndromo!");
    }
    return 0;
}
