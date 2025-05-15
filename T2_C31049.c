#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar_arreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = rand() % 10000; 
    }
}
void copiar_arreglo(int origen[], int destino[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        destino[i] = origen[i];
    }
}
void bubble_sort(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}
void selection_sort(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < tamano; j++) {
            if (arreglo[j] < arreglo[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arreglo[i];
        arreglo[i] = arreglo[min_idx];
        arreglo[min_idx] = temp;
    }
}
int main() {
    int tamano;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    int *arreglo_original = malloc(tamano * sizeof(int));
    int *arreglo_bubble = malloc(tamano * sizeof(int));
    int *arreglo_selection = malloc(tamano * sizeof(int));

    if (arreglo_original == NULL || arreglo_bubble == NULL || arreglo_selection == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    srand(time(NULL));

    generar_arreglo(arreglo_original, tamano);

    copiar_arreglo(arreglo_original, arreglo_bubble, tamano);
    copiar_arreglo(arreglo_original, arreglo_selection, tamano);

    clock_t inicio_bubble = clock();
    bubble_sort(arreglo_bubble, tamano);
    clock_t fin_bubble = clock();
    double tiempo_bubble = (double)(fin_bubble - inicio_bubble) / CLOCKS_PER_SEC;

    clock_t inicio_selection = clock();
    selection_sort(arreglo_selection, tamano);
    clock_t fin_selection = clock();
    double tiempo_selection = (double)(fin_selection - inicio_selection) / CLOCKS_PER_SEC;

    printf("\nTiempo de ejecución:\n");
    printf("Bubble Sort: %.5f segundos\n", tiempo_bubble);
    printf("Selection Sort: %.5f segundos\n", tiempo_selection);

    free(arreglo_original);
    free(arreglo_bubble);
    free(arreglo_selection);

    return 0;
}