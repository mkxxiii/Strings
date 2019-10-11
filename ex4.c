/******************************************************************************
Exercício 4

Escreva um programa que leia um string em C e mostre ela toda minúscula e toda maiúscula.
Utilize toUpper e toLower
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

void strToLower(char txt[]){
    int i;
    for(i = 0; i < strlen(txt); i++){
        txt[i] = tolower(txt[i]);
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
    
    char textoMinusculo[SIZE];
    strcpy(textoMinusculo, texto);
    strToLower(textoMinusculo);
    
    printf("Texto Maiúsculo: %s\nTexto Minúsculo: %s", texto, textoMinusculo);
    return 0;
}
