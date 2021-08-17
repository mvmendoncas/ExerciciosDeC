#include <stdio.h>

int potencia(int n, int numero){
    int i, resultado=1;
    for (i=0; i<n; i++){
        resultado*=numero;
    }
    return resultado;

}


int main()
{
    int n, numero, resultado;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    printf ("Digite outro numero: \n");
    scanf ("%d", &n);
    resultado = potencia(n, numero);
    printf ("O número %d elevado a %d = %d \n", numero, n, resultado);
}
