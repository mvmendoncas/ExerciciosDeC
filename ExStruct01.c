
#include <stdio.h>

int main()
{
    struct horario
    {
        int horas;                  //Definição do tipo da função
        int minutos;
        int segundos;
    };

    struct horario agora;         //Declação de uma estrutura

    agora.horas = 15;
    agora.minutos = 17;           //Inicialização dos membros e uma estrutura
    agora.segundos = 30;

    printf("%d:%d:%d \n", agora.horas, agora.minutos, agora.segundos);
    
}
