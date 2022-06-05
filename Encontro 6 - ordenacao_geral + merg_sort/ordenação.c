#include <stdio.h>

void bubbleSort(int *v, int n){
  short houve_troca = 1;
  while(houve_troca){
    houve_troca = 0;
    int i = 0;
    while (i < (n-1)) {
      if(v[i] > v[i+1]){
        int temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
        houve_troca = 1;
      }
      i++;
    }
    
  }
}


//Ordenação Luigy
int alaLuigy(int * vet, int n)
{
    int i = 0, menor = 10000, posTroca = 0, temp = 0;
    if (n == 0) return (vet, n);
    for (i = 0; i < n; i++)
    {
        if (menor > vet[i]) { menor = vet[i]; posTroca = i; }
    }

    temp = vet[posTroca];
    vet[posTroca] = vet[0];
    vet[0] = temp;

    return alaLuigy(&vet[1], n - 1);
}

//Ordenação por Inserção
void Insertion_sort(int *vet, int n){
  int i = 0;
  int menor = vet[i];
  
  //guardar menor valor
  for(int c = i; i < n; i++){
      if(vet[i] < menor){
      menor = vet[i];
    }
  }

  // Inserir menor valor no começo do range da lista;
  int temp = vet[i];
  vet[i] = menor;

  while(i < n){
    
    i++;
  }

  // 5 8 6 1
  // temp -> 8;

  // 1 -> vet[0];
  // vet[j] -> vet[j+1]
}



int main(){
  int n;
  scanf("%d", &n);
  int v[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }
  //sort
  Insertion_sort(v, &n);

  for(int i = 0; i < n; i++){
    printf("%d\t", v[i]);
  } 
}
// Agressive Cowns.