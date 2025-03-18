#include<stdio.h>

char estado[25] = " sao Paulo";
char codigo[3] = "A01";
char nomeCidade[25] = "Campinas";
int Populacao = 78547;
float Area = 754125;
float Pib = 21548;
int PontoTuristico = 80;

char estado2[25] = " Rio de Janeiro";
char codigo2[3] = "A02";
char nomeCidade2[25] = "Duque de Caxias";
int Populacao2 = 4397;
float Area2 = 23312;
float Pib2 = 5548;
int PontoTuristico2 = 200;

int main(int argc, char const *argv[])
{
    
   
printf("O estado e:%s\n",estado);
     
printf("O codigo da cidde e:%s\n",codigo);
      
printf("O nome da cidade e:%s\n",nomeCidade);

printf("A populacao e de:%d\n",Populacao);
     
printf("A area e de: %f\n",Area);
    
printf(" O pib e de:%f\n",&Pib);

    
printf("O numero de pontos turisticos e de:%d\n\n",PontoTuristico);   



printf("O estado e:%s\n",estado2);
     
printf("O codigo da cidde e:%s\n",codigo2);
      
printf("O nome da cidade e:%s\n",nomeCidade2);

printf("A populacao e de:%d\n",Populacao2);
     
printf("A area e de: %f\n",Area2);
    
printf(" O pib e de:%f\n",&Pib2);

printf("O numero de pontos turisticos e de: %d",PontoTuristico2);
    
 



    return 0;
}
