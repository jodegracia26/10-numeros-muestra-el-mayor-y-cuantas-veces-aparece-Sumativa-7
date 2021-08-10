#include <stdio.h>

/*Aplicacion que dado 10 numeros, pueda mostrar cual es el numero mayor
y el numero de veces que aparece en la serie*/

int main()
{
    int i, n=0, tmp, array[10];
    printf("Ingrese 10 numeros, se mostrara el mayor y el numero de veces\n");
    for(i=0;i<10;i++){
        scanf("%d", &array[i]); //En cada posicion de la matriz ira guardando un numero
    }
    tmp=array[0];
    for(i=0;i<10;i++){
        if(tmp<array[i]){
            tmp=array[i];
        }
    }
     for(i=0;i<10;i++){ // este loop es para ver cuantas veces se repite el numero
        if(tmp==array[i]){ //Usar == para pregunta
        n++;
        }
     }
     printf("El numero mas grande es: %d. Se repite %d veces\n", tmp,n);

    return 0;
}