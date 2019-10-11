/******************************************************************************
Exercício 1

Escreva um programa em C que dada um string de entrada ela devolva a string ao contrário
*******************************************************************************/

#include <stdio.h>
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
    
    char textoInvertido[SIZE];
	strcpy(textoInvertido, texto);//Iniciar string com valor (só por seguranã rsrsrs)
    int pos = strlen(texto);
    int i = 0;
    while(i < pos){
        textoInvertido[i] = texto[pos - i - 1];
        i++;
    }
    
    printf("Texto Invertido: %s", textoInvertido);
    return 0;
}