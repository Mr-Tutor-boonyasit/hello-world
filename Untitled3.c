#include <string.h>
#include <stdio.h>

int main(){
float l1,l2,l3;
float Aok,Aot,Aonk;
    printf("Enter line1: ");
    scanf("%f",&l1);

    printf("Enter line2: ");
    scanf("%f",&l2);

    printf("Enter line3: ");
    scanf("%f",&l3);
        Aok = 0.5 * ((l1+l2)*l3);
        Aot = (0.5 * (l3/2)) * l1;
        Aonk = Aok-Aot;

    printf("Area of Kite = %.2f ",Aok);
    printf("\nArea of Triangle = %.2f ",Aot);
    printf("\nArea of non-shade Kite = %.2f ",Aonk);
return 0;
}


