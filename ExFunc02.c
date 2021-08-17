#include <stdio.h>
int fatorial(int x){
    int resultado;
    if (x==0){
        return 1;
    } else{
        resultado = x*fatorial(x-1);
    } return resultado;
}


int main()
{
   int x, resultado;
   printf ("Digite um numero: \n");
   scanf ("%d", &x);
   resultado = fatorial(x);
   printf ("O faotiral de %d é = %d \n", x, resultado);
}
