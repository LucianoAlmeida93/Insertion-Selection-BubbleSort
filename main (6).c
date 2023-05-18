/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void selectionSort (int v[200], int n)
{
    int i, j, aux, min;
    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++){
            if(v[j] < v[min]) {
            min = j;
        }
        }
        aux = v[i]; v[i] = v[min]; v[min] = aux; //troca
    }

}   

int main()
{
    int v[200], n, i;
    printf("Entre tamanho desejado do vetor: ");
    scanf("%d", &n);
    printf("Entre os %d elementos do vetor:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        
    }
    selectionSort(v, n);
    printf("\n\nVetor Ordenado:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", v[i]);
    }
    printf("\n");
    return 0;
    }


