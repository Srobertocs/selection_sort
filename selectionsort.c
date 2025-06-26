#include "selectionsort.h"

void ordenacaoSelectionSort(int vetor[], int tamVetor)
{
  // Percorre o vetor analisando indice por indice
  for (int i = 0; i < tamVetor; i++)
  {
    //pega o primeiro elemento do setor desordenado
    int menorIndice = i;
    /* percorre as posições do setor desordenado buscando se há um elemento menor em comparação ao primeiro elemento
    desse setor*/
    for (int j = i + 1; j < tamVetor; j++)
    {
      //Compara indice por indice desse setor em busca do menor elemento
      if (vetor[j] < vetor[menorIndice])
      {
        menorIndice = j;
      }
    }
    // Troca as posições colocando o menor valor no início do setor desordenador do vetor
    int valorAux = vetor[i];
    vetor[i] = vetor[menorIndice];
    vetor[menorIndice] = valorAux;
  }
}