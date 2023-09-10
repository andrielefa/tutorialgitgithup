#include <stdio.h>
#include <math.h>

int main() {
    double cateto1, cateto2, hipotenusa;

 
    printf("Digite o primeiro cateto: ");
    scanf("%lf", &cateto1);
    printf("Digite o segundo cateto: ");
    scanf("%lf", &cateto2);

   
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    
    printf("A hipotenusa é: %lf\n", hipotenusa);

    return 0;
}