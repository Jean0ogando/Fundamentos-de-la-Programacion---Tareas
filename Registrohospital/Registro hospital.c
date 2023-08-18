#include <stdio.h>

int main() {
    int respuesta;
    printf("Bienvenido al sistema de atencion virtual \n\n");


    printf("Siente dolor en el pecho? (1 para si, 0 para no): ");
    scanf("%d", &respuesta);
    if (respuesta == 1) {
        printf("Llame a una ambulancia inmediatamente.\n");
        return 0;
    }

    printf("Tiene fiebre? (1 para si, 0 para no): ");
    scanf("%d", &respuesta);
    if (respuesta == 1) {
        printf("Ha estado en contacto con alguien que tiene COVID-19? (1 para si, 0 para no): ");
        scanf("%d", &respuesta);

        if (respuesta == 1) {
            printf("Autoaislamiento y haga una prueba de COVID-19.\n");
            return 0;
        } else {
            printf("Tome paracetamol y descanse.\n");
            return 0;
        }
    }

    printf("Tiene algun dolor? (1 para si, 0 para no): ");
    scanf("%d", &respuesta);
    if (respuesta == 1) {
        printf("Tome un analgesico.\n");
        return 0;
    }

    printf("Si los sintomas persisten, consulte a un medico.\n");

    return 0;
}
