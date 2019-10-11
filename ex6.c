/******************************************************************************
Exercício 6

O código de César é uma das mais simples e conhecidas técnicas de criptografia.
É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta
no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três posições,
‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente
um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a
string codificada.
Exemplo:
a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string:
D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
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
    fgets(texto, SIZE, stdin);
    clearString(texto);
    strToUpper(texto);
    
    int i;
    for(i = 0; i < strlen(texto); i++){
        if(isalpha(texto[i])){
            texto[i] = ((texto[i] - 65 + 3) % 26) + 65;
        }
    }
    
    printf("Texto Codificado: %s", texto);
    return 0;
}