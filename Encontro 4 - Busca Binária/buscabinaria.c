#include <stdio.h>
#include <stdlib.h>

//ALGORITIMO DE SORT PARA SER USADO NA BSUCA BINÁRIA
void sort(int *vet, int n){
  int i = 1;
  while (i < n){
    int atual = vet[i]; // [1] Guarda a atual
    int j = i-1; // [0] Pega uma posição anterior à atual sempre;

    while(j >= 0 && vet[j] > atual){
      vet[j + 1] = vet[j]; //O maior vai uma posição para frente
      // 6 5 2 7 8
      // 6 6 2 7 8 -> Uma
      // 5 6 2 7 8
      // 5 6 6 7 8 -> Duas
      // 5 2 6 7 8
      // 5 5 6 7 8 -> Três
      j--;
    }

    vet[j + 1] = atual; //posição a frente recebe a atual (menor);
    // 5 6 2 7 8
    // 5 2 6 7 8
    // 2 5 6 7 8 -> return
    i++;
  }
}

//BUSCA BINARIA TRADICIONAL
int busca(int *vet, int n, int x){
  int low = 0;
  int hight = n-1;

  while(low <= hight){
    int med = (low + hight)/2;

    if(vet[med] < x){
      low = med+1;
    } else if(vet[med] > x){
      hight = med-1;
    } else {
      return x;
    }
    
  }

  return -1;
}

//BUSCA COM RECURSIVIDADE
int busca_rec(int *vet, int low, int hight, int x){
  
  if(low > hight){
   return -1;
  }

  int mid = (low+hight)/2;
  
  if (vet[mid] < x){
    return busca_rev(vet, mid+1, hight, x);
  } else if (vet[mid] > x){
    return busca_rev(vet, low, mid-1, x);
  } else if (vet[mid] == x){
    return x;
  }


}

int main(){
  int n, x;
  scanf("%d", &n);
  int vet[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }

  sort(vet, n);

  printf("Buscar numero: ");
  scanf("%d", &x);

  printf("%d\n", busca_rev(vet, 0, n-1, x));
}