#include <stdio.h>


int ingreseComponente(char componente, int i);
float calcularVolumen(int cono[][3]);
void imprimirVolumenArea(float volumen1, float volumen2, int cono1[][3], int cono2[][3]);


int main (int argc, char *argv[]) {

    int cono1[3][3];
    int cono2[3][3];

    for (int i = 0; i < 3; i++)
    {
        cono1[i][0]=ingreseComponente('X',i);
        cono1[i][1]=ingreseComponente('Y',i);
        cono1[i][2]=ingreseComponente('Z',i);
    }
     for (int j = 0; j < 3; j++)
    {
        cono2[j][0]=ingreseComponente('X',j);
        cono2[j][1]=ingreseComponente('Y',j);
        cono2[j][2]=ingreseComponente('Z',j);
    }

    float volumen1=calcularVolumen(cono1);
    float volumen2=calcularVolumen(cono2);

    imprimirVolumenArea(volumen1, volumen2,cono1,cono2);
    

    return 0;
}


int ingreseComponente(char componente, int i) {
    int valor;
    printf("Ingrese el valor de la componente %c del cono %d: ", componente, i);
    scanf("%d", &valor);
    return valor;
}

float calcularVolumen(int cono[][3]) {
    float radio, altura;
    radio = cono[0][0];
    altura = cono[0][1];
    float volumen = (3.14159 * radio * radio * altura) / 3.0;
    return volumen;
}

void imprimirVolumenArea(float volumen1, float volumen2, int cono1[][3], int cono2[][3]) {
    printf("Volumen del cono 1: %.2f\n", volumen1);
    printf("Volumen del cono 2: %.2f\n", volumen2);

    printf("Componentes del cono 1:\n");
    for (int i = 0; i < 3; i++) {
        printf("X%d: %d\tY%d: %d\tZ%d: %d\n", i, cono1[i][0], i, cono1[i][1], i, cono1[i][2]);
    }

    printf("Componentes del cono 2:\n");
    for (int i = 0; i < 3; i++) {
        printf("X%d: %d\tY%d: %d\tZ%d: %d\n", i, cono2[i][0], i, cono2[i][1], i, cono2[i][2]);
    }
}