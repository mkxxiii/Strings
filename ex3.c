/******************************************************************************
Exercício 3

Escreva um programa que leia uma string em C e mostre no final quantas consoantes e quantas
vogais ela tem.
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

    int vogais = 0, consoantes = 0;
    
    int i;
    for(i = 0; i < strlen(texto); i++){
        if(isalpha(texto[i])){
            if(texto[i] == 65 || texto[i] == 69 || texto[i] == 73 || texto[i] == 79 || texto[i] == 85){
                /*
                  65 = A na tabela ASCII
                  69 = E na tabela ASCII
                  73 = I na tabela ASCII
                  79 = O na tabela ASCII
                  85 = U na tabela ASCII
                */
                vogais++;
            }
            else{
                consoantes++;
            }
        }
    }
    
    printf("Vogais: %d - Consoantes: %d", vogais, consoantes);
    return 0;
}
