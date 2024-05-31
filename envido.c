#include <stdio.h>
#include <stdlib.h>

int envido(char p1, int v1, char p2, int v2, char p3, int v3) {
    int envido1 = 0;
    int envido2 = 0;
    int envido3 = 0;

    // Convertir las figuras (10, 11, 12) a valor 0 para el envido
    if (v1 > 9) v1 = 0;
    if (v2 > 9) v2 = 0;
    if (v3 > 9) v3 = 0;

    // Calcular envido posible con la primera carta
    if (p1 == p2) envido1 = 20 + v1 + v2;
    if (p1 == p3) envido2 = 20 + v1 + v3;
    if (p2 == p3) envido3 = 20 + v2 + v3;

    // Si no hay dos cartas del mismo palo, el envido es el valor máximo de las cartas
    if (envido1 == 0 && envido2 == 0 && envido3 == 0) {
        if (v1 >= v2 && v1 >= v3) return v1;
        if (v2 >= v1 && v2 >= v3) return v2;
        return v3;
    }

    // Retornar el envido máximo encontrado
    if (envido1 >= envido2 && envido1 >= envido3) return envido1;
    if (envido2 >= envido1 && envido2 >= envido3) return envido2;
    return envido3;
}

int main(int argc, char *argv[]) {
    if (argc != 7) {
        printf("Uso: %s <palo1> <valor1> <palo2> <valor2> <palo3> <valor3>\n", argv[0]);
        return 1;
    }

    // Convertir argumentos
    char p1 = argv[1][0];
    int v1 = atoi(argv[2]);
    char p2 = argv[3][0];
    int v2 = atoi(argv[4]);
    char p3 = argv[5][0];
    int v3 = atoi(argv[6]);

    // Calcular el envido
    int resultado = envido(p1, v1, p2, v2, p3, v3);
    printf("Envido: %d\n", resultado);

    return 0;
}

