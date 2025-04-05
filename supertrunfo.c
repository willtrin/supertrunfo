#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//criando as variaveis carta 1 e carta 2.
char estado[25] = " sao Paulo";
char codigo[3] = "A01";
char nomeCidade[25] = "Campinas";
float Populacao = 7500;
float Area = 754212;
float Pib = 552;
float Dens_Demogr = 0;
int PontoTuristico = 80;
float pib_percapita ;


char estado2[25] = " Rio de Janeiro";
char codigo2[3] = "A02";
char nomeCidade2[25] = "Duque de Caxias";
float populacao2 = 4397;
float Area2 = 23312;
float Pib2 = 548;
float Dens_Demogr2 = 0;
int PontoTuristico2 = 200;
float pib_percapita2 ;


int main(int argc, char const *argv[])
{
//calculo de pib percapita e densidade demografica

  pib_percapita = Pib/Populacao;
  pib_percapita2 = Pib2/Populacao;

  Dens_Demogr = Populacao/Area;
  Dens_Demogr2 = Populacao/Area2;
 
  printf("A renda percapita e de:%f\n \n ",pib_percapita);
  printf("A renda percapita e de:%f\n \n",pib_percapita2);


  printf("A densidade demografica e de:%f\n \n ",Dens_Demogr);
  printf("A densidade demografica e de:%f\n \n",Dens_Demogr2);

  //escolha das opçoes e comparaçoes
   
    int escolhajogador1 ;
    printf("Jogador1 digite um numero \n ");
    scanf(" %d",&escolhajogador1); 
     
    int escolhajogador2;
    printf("Jogador2 escolha um numero igual ao do seu adverario \n");
    scanf("%d",&escolhajogador2);
  
    
    
      switch (escolhajogador2)
      {
      case 1:
        printf ("populacao: %f\n",populacao2);

       
        break;

        case 2:
        printf ("Area: %f\n",Area2);
        break;

        case 3:
        printf ("Pib: %f\n",Pib2);
        break;

        case 4:
        printf ("ponto turistico: %d\n",PontoTuristico2);
        break;
      
      default:
      printf("opcao invalida");
       
      }
      
 



    switch (escolhajogador1)
    {
    case 1:
     printf("populacao: %f\n",Populacao);
     if (Populacao>populacao2)
     {
      printf("*************  Campinas venceu *************");
     }else
     {
      printf("***********  Duque de Caxias venceu **************");
     }
     
     
     
    break;  
  
      case 2:
      printf("Area:%f\n",Area);
      if (Area>Area2)
      {
       printf("***********   campinas  venceu   *************");
      }else{
        printf("*********** duque de caxias venceu   *********");
       }

      
  break;
       case 3:
       printf("Pib:%f\n",Pib);
       if (Pib>Pib2)
       {
        printf("***********   campinas  venceu   *************");
       } else{
        printf("*********** duque de caxias venceu   *********");
       }
       
        
  break;
  case 4:
       printf("Ponto Turistico:%d\n",PontoTuristico);
       if (PontoTuristico>PontoTuristico2)
     {
      printf("***********   campinas  venceu   *************");
     }else{
      printf("*********** duque de caxias venceu   *********");
     }
         
    break;
    
        printf("opcao invalida");

      


     

      switch (escolhajogador2)
      {
      case 1:
        printf ("populacao: %d",populacao2);
        break;

        case 2:
        printf ("Area: %f",Area2);
        break;

        case 3:
        printf ("Pib: %f",PontoTuristico2);
        break;

        case 4:
        printf ("ponto turistico: %d",PontoTuristico2);
        break;
      
      default:
      printf("opcao invalida");
       
      }
 
    }
    return 0;
}
