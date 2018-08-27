
/*
* Fecha: 
*
* Autor: Luis Angel Alvarado
* 
* Versión: 1.0
*
* Descripcion de la aplicación: 
*  
* Fecha de Revision: 
*
* Encargado de revisión: Miguel Angel
*
* Materia: Estructuras de datos II
*/   

#include <stdio.h>
#include <stdlib.h>

int asignaMem(int **ptrArr, int n);
int pideN();
void capturaDatos(int *ptrArr, int n);
void muestraDatos(int *ptrArr, int n);
void liberaMem(int *ptrArr);


int main(int argc, char** argv)
{
    int result = 0, num, *ptrArr;
    num = pideN();
    result= asignaMem(&ptrArr, num);
    if (result == 1)
    {
        capturaDatos(ptrArr, num);
        muestraDatos(ptrArr, num);
        liberaMem(ptrArr);
    }
    else
        printf("no hay memoria");
    return (EXIT_SUCCESS);
}

int pideN()
{
    int res;
    printf("Cuantos datos se van a usar: \n");
    scanf("%d", &res);
    return (res);
}

int asignaMem(int **ptrArr, int n)
{
    int res = 0;
    *ptrArr = (int*)malloc(n*sizeof(int));

    if (*ptrArr != NULL)
        res = 1;
    return (res);
}

void capturaDatos(int *ptrArr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Ingrese el dato no. %d \n", i);
        scanf("%d", ptrArr+i); //Esto es equivalente a &*(ptrArr+i)
    }
}

void muestraDatos(int *ptrArr, int n)
{
    for(int i = 0; i < n; i++)
        printf("El dato no. %d  es %d", i, *(ptrArr+i);
}

void liberaMem(int *ptrArr)
{
    free(ptrArr);
}
