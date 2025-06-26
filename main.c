#include <stdio.h>
#include "selectionsort.h"
int main()
{
  int vetor[10] = {5, 7, 8, 1, 2, 6, 10, 9, 4, 3};

  ordenacaoSelectionSort(vetor, 10);

  printf("Sequencia Ordenada\n");
  for (int i = 0; i < 10; i++)
  {
    printf(" %d ", vetor[i]);
  }
}