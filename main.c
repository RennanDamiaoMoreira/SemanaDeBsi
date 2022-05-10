#include <stdio.h>
int resultado,resposta;

void soma(int numero1, int numero2){
    resultado = numero1 + numero2;
    printf("\n%d + %d\n",numero1,numero2);
    scanf("%d",&resposta);
}

void subtracao(int numero1, int numero2){
    if (numero1 > numero2){
        resultado = numero1 - numero2;
        printf("\n%d - %d\n",numero1,numero2);
    }else{
        resultado = numero2 - numero1;
        printf("\n%d - %d\n",numero2,numero1);
    }
    scanf("%d",&resposta);
}

void multiplicacao(int numero1, int numero2){
    resultado = numero1 * numero2;
    printf("\n%d * %d\n",numero1,numero2);
    scanf("%d",&resposta);
}

void divisao(int numero1, int numero2){
    resultado = numero2;
    printf("\n%d / %d\n",(numero1 * numero2),numero1);
    scanf("%d",&resposta);
}

int perguntar(int dificuldade){
    int pontos =0;
    int numero1,numero2, sorteio;
     do {
       sorteio = rand() %dificuldade;
       numero1 = rand() %11;
       numero2 = rand() %11;

       switch(sorteio){
           case 0 :
                soma(numero1,numero2);
            break;

            case 1 :
                subtracao(numero1,numero2);
            break;

            case 2 :
                multiplicacao(numero1,numero2);
            break;

            case 3 :
                divisao(numero1,numero2);
            break;
       }

       if (resposta == resultado ){
            pontos ++;
        }
    }while(resposta == resultado);
    return pontos;
}

int main()
{
    int pontos,dificuldade;
    printf("Selecione a dificuldade : \n1-adicao\n2-adicao e subtracao\n3-adicao subtracao multiplicacao\n4-adicao e subtracao e multiplicacao e divisao");
    scanf("%d",&dificuldade);
    pontos = perguntar(dificuldade);
    printf("Que pena voce errou \n resposta certa e : %d \n voce fez %d pontos",resultado,pontos);
}
