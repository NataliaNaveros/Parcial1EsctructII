#include <stdio.h>
struct Fecha1{
    int Dias;
    int Meses;
    int Ano;
} fechas[5], *p_fechas=fechas;
void pedirDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    mostrarDatos();
    return 0;
}
void pedirDatos(){
    for(int i=0;i<5;i++){
        printf("Ingrese años %d: ", i+1);
        scanf("%d",&(p_fechas+i)->Ano);
        printf("\nIngrese meses %d: ", i+1);
        scanf("%d", &(p_fechas+i)->Meses);
        printf("\nIngrese dias %d: ", i+1);
        scanf("%d",&(p_fechas+i)->Dias);
        printf("\n");
    }
}
void mostrarDatos(){
    int tanos=0;
    int tdias=0;
    int tmeses=0;

    for(int i=0;i<7;i++){
        tdias+=(p_fechas+i)->Dias;
        tmeses+=(p_fechas+i)->Meses;
        tanos+=(p_fechas+i)->Ano;
        if (tdias>=30){
            tmeses+=1;
            tdias-=30;
        }
        if(tmeses>=12){
            tanos+=1;
            tmeses-=12;
        }
    }
    printf("La suma de las fechas fue de:  %d Años %d Meses %d Dias",tanos,tmeses,tdias);
}
