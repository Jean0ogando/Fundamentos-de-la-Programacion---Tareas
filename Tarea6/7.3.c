#include <stdio.h>

void main (void)
{
    char *cad0 = "Buenos d�as";
    char cad1[20] = "Hola";
    char cad2[] = "M�xico";
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);
    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);
    printf("\nLa cadena cad2 es: ");
    puts(cad2);
    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una l�nea de texto: \n");
    gets(cad4);
    printf("\nLa cadena de cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\nIngrese una l�nea de texto: \n");
    scanf("%s", cad5);
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;
    printf("\nIngrese una l�nea de texto: \n");

    while ((p = getchar())!= '\n')
        cad6[i++] = p;
    cad6[i] = '\n';
    printf("\nLa cadena cad6 es: ");
    puts(cad6);

}

