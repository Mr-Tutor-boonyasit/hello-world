#include <string.h>
#include <stdio.h>
int main(){
int x;
int a,b,c,y;
int d,e,z;
    printf("Enter a number (100-199): ");
    scanf("%d",&x);
        a = x/100;
        b = (x%100)/10;
        c = (x%100)%10;
        y = a+b+c;
    printf ("%d + %d + %d = %d\n",a,b,c,y);
        d = y/10;
        e = y%10;
        z = d+e;
    printf ("%d + %d = %d",d,e,z);

return 0;

}
