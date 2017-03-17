#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void multiplicar();
void mostrarMatriz(int,int,int**);
int filas,filas2,columnas2, columnas, **p_matriz, **p_matriz2;
int main (){
    pedirDatos();
    mostrarMatriz(filas,columnas,p_matriz);
    free(p_matriz);
    return 0;
}
void pedirDatos(){
    printf("ingrese filas \n");
    scanf("%d", &filas);
    printf("Ingrese colomnas \n");
    scanf("%d",&columnas);
    printf("ingrese filas \n");
    scanf("%d", &filas2);
    printf("Ingrese colomnas \n");
    scanf("%d",&columnas2);
    p_matriz=(int **)malloc(filas*sizeof(int *));
    p_matriz2=(int **)malloc(filas2*sizeof(int*));
    int f,c,f2,c2;
    for(c=0;c<columnas;c++){
        p_matriz[c]=(int *)malloc(columnas*sizeof(int));
    }
    for(c2=0;c<columnas;c++){
        p_matriz2[c2]=(int*)
    }
    for(f=0;f<filas;f++){
        for(c=0;c<columnas;c++){
                printf("ingrese dato en [%d][%d] \n", f,c);
                scanf("%d",&(*(*(p_matriz+c)+f)));

        }
    }
}
void mostrarMatriz(int filas,int columnas,int **matriz){
    int f,c;
    int mx;
    for(f=0;f<filas;f++){
        for(c=0;c<columnas;c++){
                mx=f*c;
                printf("%d ", *(*(p_matriz+c)+f));

        }
        printf("\n");
    }
}
/*void multiplicar(int filas, int columnas, int **matriz){
    int mx;
    for(int f=0;f<filas;f++){
        for(int c=0;c<columnas;c++){
            mx=f*c
        }
    }

}*/
