#include <stdio.h>

int main() {
    int x;
    int *ptr;

    printf("Ingrese el  arreglo: ");
    scanf("%d", &x);

    ptr = (int *)malloc(x * 4);

    if (ptr == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", (ptr + i));
    }

    printf("Valores ingresados:\n");
    for (int i = 0; i < x; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i));
    }

    free(ptr);
    return 0;
}


    