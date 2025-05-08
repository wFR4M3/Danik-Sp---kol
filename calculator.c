#include <stdio.h>
#include <math.h>

int main() {
    double PI = 3.141;
    double polomer, plocha, objem;

    printf("Zadejte poloměr koule: ");
    scanf("%lf", &polomer);

    plocha = 4 * PI * pow(polomer, 2);
    objem = (4.0 / 3.0) * PI * pow(polomer, 3);

    printf("Plocha koule je: %.2f (vaší jednotky²)\n", plocha);
    printf("Objem koule je: %.2f (vaší jednotky³)\n", objem);

    return 0;
}