#include<stdio.h>


int main()
{

struct horario
{
    int horas;
    int minutos;
    int segundos;
}agora;

agora.horas = 12;
agora.minutos = 20;
agora.segundos = 10; 

    printf("%d:%d:%d\n",agora.horas,            
                        agora.minutos,
                        agora.segundos);
   
}
