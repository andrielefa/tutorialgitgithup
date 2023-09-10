#include <stdio.h>

int main() {
    char caracter;
    
    printf("Digite um caractere: ");
    scanf("%c", &caracter);
    
    printf("Código ASCII em decimal: %d\n", caracter);
    printf("Código ASCII em hexadecimal: 0x%x\n", caracter);
    
    return 0;
}
