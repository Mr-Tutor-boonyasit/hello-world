#include <stdio.h>

int main ()
{
char name[20],name1[20],sex,id[10],name2[50]="",doa[]="****************************************";
int age,c,i;
float sc;
    printf("Enter name: ");
    scanf("%s%s", name,name1);

while((c= getchar()) != '\n' && c != EOF);

    printf("Enter ID: ");
    gets(id);

    printf("Enter age: ");
    scanf ("%d",&age);

while ( getchar() != '\n') {
      i=0;
    }

    printf("Enter gender: ");
    sex=getchar();

    printf("Enter score: ");
    scanf("%f",&sc);

    printf("1234567890123456789012345678901234567890");

    strcat (name2, name);
    strcat (name2, " ");
    strcat (name2, name1);

    printf("\nName:\t\t");
    puts (name2);
    printf("");
    puts(doa);
    printf("Your ID:\t");
    puts (id);
    printf("");
    puts(doa);
    printf("AGE\t\tScore\t\tGender\n");
    puts(doa);
    printf("%d\t\t%.2f\t\t",age,sc);
    putchar(sex);
    printf("\n");
    puts(doa);
return 0;
}
