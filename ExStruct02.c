#include <stdio.h>

int main()
{
    struct horario
    {
        int horas;                  //Definição do tipo da função
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora;         //Declação de uma estrutura

    agora.horas = 15;
    agora.minutos = 17;           //Inicialização dos membros e uma estrutura
    agora.segundos = 30;

   struct horario depois;        //Declarão de uma estrutura 

   depois.horas = agora.horas + 10;
   depois.minutos = agora.minutos;
   depois.teste =  50.55/123;
   depois.letra = 'a';

   printf("%d\n", depois.horas);
   printf("%d\n", depois.minutos);
   printf("%f\n", depois.teste);
   printf("%c\n", depois.letra);
    
}