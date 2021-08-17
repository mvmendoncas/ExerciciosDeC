#include <stdio.h>

 struct horario
    {
        int horas;                  //Definição do tipo da função
        int minutos;
        int segundos;
    };

struct horario teste(struct horario x)
{
    printf("%d:%d:%d\n", x.horas,              //função de estruturas 
                       x.minutos,
                       x.segundos);
    x.horas = 14;
    x.minutos = 35;
    x.segundos = 55;

    return x;   
}


int main()
{

    struct horario agora;         //Declação de uma estrutura

    agora.horas = 15;
    agora.minutos = 17;           //Inicialização dos membros e uma estrutura
    agora.segundos = 30;

    struct  horario proxima;
    proxima = teste(agora);

    printf("%d:%d:%d\n", proxima.horas,            
                       proxima.minutos,
                       proxima.segundos);
    
}