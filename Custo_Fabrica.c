#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double custoFabrica, custoFinal;

    printf("Custo de fabrica do carro: ");
    scanf("%lf", &custoFabrica);

    custoFinal = custoFabrica + 0.28 * custoFabrica + 0.45 * custoFabrica;

    printf("CUSTO FINAL: %.2lf", custoFinal);

    return 0;
}