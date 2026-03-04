#include<stdio.h>

int main() {
    float km;
    printf("Ingresar la distancia en kilometros: ");
    scanf("%f", &km);
    //1.61km = 1milla
    //1km = 1/1.61 milla
    //xkm = x/1.61 milla 
    float miles = km / 1.61;
    printf("La distancia en millas es: %.2f\n", miles);
    return 0;
}