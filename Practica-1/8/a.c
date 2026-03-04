#include <stdio.h>
int main() {
    int edad;
    int edad_minima = 40;
    if (edad >= edad_minima) {
        printf("Tiene %d años o más\n", edad_minima);
    } else {
        printf("Tiene menos de %d años\n", edad_minima);
    }
}