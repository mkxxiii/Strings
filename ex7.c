/******************************************************************************
Exercício 7

Faça um programa que gere senhas aleatórias de 8 caracteres, ou seja, o programa deve retornar
na saída uma palavra de 8 caracteres aleatórias.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9          //Define tamanho padrão de strings
#define ASC_START 33    //Começa deste caractere da tabela ASC
#define ASC_END 126     //Termina neste caractere da tabela ASC

int main()
{
    char texto[SIZE];
    srand(time(NULL));
    
    int i;
    for(i = 0; i < SIZE - 1; i++){
        texto[i] = rand() % (ASC_END - ASC_START + 1) + ASC_START;
    }
    
    printf("Senha Aleatória: %s", texto);
    return 0;
}