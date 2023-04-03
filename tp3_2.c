#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("hola \n");
    
    int matriz[5][12];
    int i, j;

    srand(time(NULL));

    //a)

    for (i = 0; i < 5; i++) //fila
    {
        for (j = 0; j < 12; j++) //columna
        {
             matriz[i][j] = rand() % (50000 - 10000 + 1) + 10000; //aleatorio
        }
        
    }

    //b)

    printf("mostrar matriz: \n");

    for (i = 0; i < 5; i++) //fila
    {
        for (j = 0; j < 12; j++) //columna
        {
             printf("%d ", matriz[i][j]);
        }
        printf(" \n");
    
    }   

    //c)
    int promedioAnio;

    printf("Promedio de ganancia por anio: \n");

    for (i = 0; i < 5; i++) {
        promedioAnio = 0;

        for (j = 0; j < 12; j++) {
        promedioAnio += matriz[i][j];
        }

        promedioAnio = promedioAnio/12;
        printf("Anio [%d] %d\n", i+1, promedioAnio);
    }

    //d)

    int valorMaximo = matriz[0][0]; 
    int valorMinimo = matriz[0][0];
    int posicionMax_i = 0;
    int posicionMax_j = 0; 
    int posicionMin_i = 0; 
    int posicionMin_j = 0;

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 12; j++) {

        if (matriz[i][j] > valorMaximo) {

            valorMaximo = matriz[i][j];
            posicionMax_i = i+1;
            posicionMax_j = j+1;
        }
        if (matriz[i][j] < valorMinimo) {

            valorMinimo = matriz[i][j];
            posicionMin_i = i+1;
            posicionMin_j = j+1;
        }
        }
    }

    printf("valor maximo %d / mes %d / anio %d \n", valorMaximo, posicionMax_j, posicionMax_i);
    printf("valor minimo %d / mes %d / anio %d \n", valorMinimo, posicionMin_j, posicionMin_i);

    return 0;
}