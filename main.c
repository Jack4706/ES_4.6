#include <stdio.h>

int main(){

    const float PIGRECO = 3.14;
    int i = 1;

    printf("***CIRCONFERENZA E AREA DI UN CERCHIO CON RAGGIO DA 1 A 20***:\n");
    printf("\n");

    while(i < 21) {

        printf("raggio: %d\ncirconferenza: %.2f\narea: %.2f\n",i, 2*PIGRECO*i, PIGRECO*(i*i));
        i++;
        printf("\n");

    }

    return 0;
}
