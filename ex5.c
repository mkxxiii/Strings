/******************************************************************************
Exercício 5

Escreva um programa que leia um número e armazene em uma string e escreva o número por
extenso. Considere no máximo seja digitado de 0 à 999.
Exemplo: digitar 1234 a saída será Um Mil duzentos e trinta e quatro
Digitar 350 a saída será trezentos e cinquenta.
*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100    //Define tamanho padrão de strings

int main()
{
    int input;
    printf("Digite um número de 0 a 999: ");
    scanf("%d", &input);
    while(input < 0 || input > 999){
        printf("Favor digitar um valor entre 0 e 999: ");
        scanf("%d", &input);
    }
    
    char texto[SIZE];
    strcpy(texto, "");

    int number = input / 100;
    if(number == 9){
        strcat(texto, "NOVECENTOS");
    }
    else if(number == 8){
        strcat(texto, "OITOCENTOS");
    }
    else if(number == 7){
        strcat(texto, "SETECENTOS");
    }
    else if(number == 6){
        strcat(texto, "SEISCENTOS");
    }
    else if(number == 5){
        strcat(texto, "QUINHENTOS");
    }
    else if(number == 4){
        strcat(texto, "QUATROCENTOS");
    }
    else if(number == 3){
        strcat(texto, "TREZENTOS");
    }
    else if(number == 2){
        strcat(texto, "DUZENTOS");
    }
    else if(number == 1){
        if(input == 100){
            strcat(texto, "CEM");
        }
        else{
            strcat(texto, "CENTO");
        }
    }
    
    if(input % 100 != 0 && input > 100){
        strcat(texto, " E ");
    }
    
    int dezenas = input % 100;
    if(dezenas == 10){
        strcat(texto, "DEZ");
    }
    else if(dezenas == 11){
        strcat(texto, "ONZE");
    }
    else if(dezenas == 12){
        strcat(texto, "DOZE");
    }
    else if(dezenas == 13){
        strcat(texto, "TREZE");
    }
    else if(dezenas == 14){
        strcat(texto, "QUATORZE");
    }
    else if(dezenas == 15){
        strcat(texto, "QUINZE");
    }
    else if(dezenas == 16){
        strcat(texto, "DEZESSEIS");
    }
    else if(dezenas == 17){
        strcat(texto, "DEZESSETE");
    }
    else if(dezenas == 18){
        strcat(texto, "DEZOITO");
    }
    else if(dezenas == 19){
        strcat(texto, "DEZENOVE");
    }
    else if(dezenas >= 20 && dezenas < 30){
        strcat(texto, "VINTE");
    }
    else if(dezenas >= 30 && dezenas < 40){
        strcat(texto, "TRINTA");
    }
    else if(dezenas >= 40 && dezenas < 50){
        strcat(texto, "QUARENTA");
    }
    else if(dezenas >= 50 && dezenas < 60){
        strcat(texto, "CINQUENTA");
    }
    else if(dezenas >= 60 && dezenas < 70){
        strcat(texto, "SESSENTA");
    }
    else if(dezenas >= 70 && dezenas < 80){
        strcat(texto, "SETENTA");
    }
    else if(dezenas >= 80 && dezenas < 90){
        strcat(texto, "OITENTA");
    }
    else if(dezenas >= 90){
        strcat(texto, "NOVENTA");
    }
    
    if(dezenas > 19 && dezenas % 10 != 0){
        strcat(texto, " E ");
    }
    
    int unidades = dezenas % 10;
    if(dezenas < 10 || dezenas > 19){
      if(unidades == 9){
            strcat(texto, "NOVE");
        }
        else if(unidades == 8){
            strcat(texto, "OITO");
        }
        else if(unidades == 7){
            strcat(texto, "SETE");
        }
        else if(unidades == 6){
            strcat(texto, "SEIS");
        }
        else if(unidades == 5){
            strcat(texto, "CINCO");
        }
        else if(unidades == 4){
            strcat(texto, "QUATRO");
        }
        else if(unidades == 3){
            strcat(texto, "TRÊS");
        }
        else if(unidades == 2){
            strcat(texto, "DOIS");
        }
        else if(unidades == 1){
            strcat(texto, "UM");
        }  
    }
    
    if(input == 0){
        strcat(texto, "ZERO");
    }
    
    printf("Número por Extenso: %s", texto);
    return 0;
}
