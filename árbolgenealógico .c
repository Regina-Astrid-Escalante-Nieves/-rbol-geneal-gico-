#include <stdio.h>
int main() {
    int a, b;
    while (a!=7) {
        printf ("¿Qué es lo que deseas ver? \n");
        printf("1.Bisabuelos\n");
        printf("2.Abuelos\n");
        printf("3.Padres \n");
        printf("4.Hermanos, perro hermanos y yo\n");
        printf("5.Perrhijos y perrisobrinos\n");
        printf("6.Hijos de los perribrinos\n");
        scanf("%d", &a);

        if (a==1) {
            printf("BISABUELOS\n");
            printf("Amelia \n");
            printf("Florencio\n");
            printf("Cuca \n");
        }
        if (a==2) {
            printf("ABUELOS\n");
            printf("Rosa\n");
            printf("Raúl\n ");
        }
        if (a==3) {
            printf("Padres\n");
            printf("Pamela\n");
            printf("Hector\n");
        }
        if (a==4) {
            printf("HERMANOS PERRIHERMANOS Y YO gg\n");
            printf("Rebeca \n");
            printf("Chata\n");
            printf("Güera\n");
            printf("Regina (yo) \n");
        }
        if (a==5) {
            printf("PERRHIJOS Y PERRISOBRINOS\n");
            printf("Canela\n");
            printf("Cerebro\n");
            printf("Tomasa\n");
        }
        if (a==6) {
            printf("HIJOS DE LOS PERRIBRINOS\n");
            printf("Lía\n");
            printf("Afrodita\n");
            printf("Rebeco\n");
            printf("Maya\n");
        }
    }
    return 0;
}


