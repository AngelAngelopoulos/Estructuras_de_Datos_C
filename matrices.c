#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMX 20
#define TAMY 20

void CreaMatrix(int matriz1[], int matriz2[], int matrizRes[], int n, int m);
void mulMatrix(int matriz1[], int matriz2[], int matrizRes[], int n, int m, int l);
void impMatrx(int matrizg[], int cols, int rens);
int pideNum();

int main()
{
	int matriz1[TAMX][TAMY], matriz2[TAMX][TAMY], matrizRes[TAMX][TAMY], n, m1, m2,  l;

	n = pideNum();
	m = pideNum();
	m1 = pideNum();
	m2 = pideNum();

	if (m1 == m2){
		CreaMatrix(matriz1, matriz2, matrizRes, n, l);
		mulMatrix(matriz1, matriz2, matrizRes, n, m1, l);
		impMatrx(matriz1, n, m1);
		impMatrx(matriz2, m2, l);
		impMatrx(matrizRes, n, l);

	}

	return 0;




}

void CreaMatrix(int matriz1[], int matriz2[], int matrizRes[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matriz1[i][j] = matriz2[i][j] = matrizRes[i][j];
		}
	}
}

void mulMatrix(int matriz1[], int matriz2[], int matrizRes[], int n, int m, int l)
{	
	int temp;
	for (int i = 0 ; i < n ; i++ ) //i para las filas de la matriz resultante
    {
        for (int k = 0 ; k < l ; k++ ) // k para las columnas de la matriz resultante
        {
            temp = 0;
            for (int j = 0 ; j < m; j++ ) //j para realizar la multiplicacion de 
                    {                                   //los elementos   de la matriz
                temp += matriz1[i][j] * matriz2[j][k];
                matrizRes[i][k] = temp;
            }
            }
    }
}

void impMatrx(int matrizg[], int cols, int rens)
{
	for (int i = 0; i < cols; ++i)
	{
		for (int i = 0; i < rens; ++i)
		{
			printf(" %d ", matrizg[i][j]);
		}
		printf("\n");
	}
}

int pideNum()
{
	int res = 0;
	printf("Ingrese el numero de renglones/columnas");
	scanf("%d", res);
	return (res);
}







