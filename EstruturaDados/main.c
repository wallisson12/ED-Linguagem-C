#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x ,y;


    printf("Digite as Coordenadas de um ponto\n");
    scanf("%d",&x);
    scanf("%d",&y);

    printf("O ponto tem sua coordenada X = %d e Y = %d \n",x,y);

    Quadrante(x,y);

}

void Quadrante(int x,int y){

        if(x < 0 && y > 0)
        {
            printf("Segundo Quadrante");

        } else if(x > 0 && y < 0)
        {
            printf("Quarto Quadrante");

        } else if(x > 0 && y > 0)
        {
            printf("Primeiro Quadrante");

        } else if(x < 0 && y < 0)
        {

            printf("Terceiro Quadrante");

        }else{

            printf("O ponto esta na origem");

        }


}

