#include <stdio.h>
#include <stdlib.h>
void pedirDatos();
void mostrarDatos(int,int,int**);
int filas,columnas, **p_matriz;
int main(){
    pedirDatos();
    mostrarDatos(filas,columnas,p_matriz);
    return 0;
}
void pedirDatos(){
    printf("ingrese filas \n");
    scanf("%d", &filas);
    printf("Ingrese coumnas \n");
    scanf("%d",&columnas);
    p_matriz=(int **)malloc(filas*sizeof(int *));
    int f,c;
    for(c=0;c<columnas;c++){
        p_matriz[c]=(int *)malloc(columnas*sizeof(int));
    }
    for(f=0;f<filas;f++){
        for(c=0;c<columnas;c++){
                printf("ingrese dato en [%d][%d] \n", f,c);
                scanf("%d",&(*(*(p_matriz+c)+f)));

        }
    }
}
void mostrarDatos(int filas,int columnas,int**matriz){
    int f,c;
    for(f=0;f<filas;f++){
        for(c=0;c<columnas;c++){
                printf("%d ", *(*(p_matriz+c)+f));

        }
        printf("\n");
    }

}
