#include <stdio.h>
int main() {
    char a, b, aux;
    printf("Ingrese el primer caracter:\n");
    //Opcion 1: Leer el caracter y luego el enter
    // scanf("%c", &a);
    // scanf("%c", &aux);//leer el enter (\n)
    //Opcion 2: Leer el caracter y el enter juntos
    // El espacio antes de %c hace que scanf ignore cualquier espacio en blanco, incluyendo el enter
    scanf(" %c", &a);
    printf("Se leyó el caracter: %c\n", a);
    printf("Ingrese el segundo caracter:\n");
    scanf("%c", &b);
    scanf("%c", &aux);
    printf("Se leyó el caracter: %c\n", b);
    return 0;
}