#include <stdio.h>
#include <math.h>
int main (){
char book[50],p='%';
float a,x;
    printf("BOOK: ");
    gets(book);

    printf("PRICE: ");
    scanf("%f",&a);

    printf("DISCOUNT (%c): ",p);
    scanf("%f",&x);

    printf("Book and Price = %s 399.00",book);
    printf("\nDiscount (20.00 %c) = %.2f",p,(x/100)*a);
    printf("\nTotal Price = %.2f",a-((x/100)*a));
return 0 ;


}

