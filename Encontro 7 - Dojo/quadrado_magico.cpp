#include <iostream>

using namespace std;

int prencherMat(int n, int *mat){
  int soma = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> *((mat + i*n) + j); /// *(mat + i (linhas) * totalcolunas) + j(coluna)
        if (i == 0) soma += *((mat + i*n) + j);
    }
  }

  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < n; j++){
  //       cin >> mat[i][j];
  //       if (i == 0) soma += mat[i][j];
  //   }
  // }
  
  return soma;
}

// matriz = matriz[0]
// matriz+1 = matriz[1]
// *(matriz+1) -> Valor da posição de memória



int main() {
  int n, soma = 0, diagonalP = 0, diagonalS = 0;

  cin >> n;

  // int** matriz = new int*[n]; //LINHAS

  // for(int i = 0; i < n; i++){
  //   matriz[i] = new int[n]; //coluns;
  // }



  int matriz[n][n];

  soma = prencherMat(n, (int *) matriz);


  // soma = prencherMat(n, matriz);


  cout << "SOMA = " << soma << endl;

  for(int i = 0; i < n; i++) {
    
    int somaLinhaAtual = 0;
    int somaColunaAtual = 0;

    for(int j = 0; j < n; j++) {

      somaLinhaAtual += matriz[i][j];
      somaColunaAtual += matriz[j][i];

      //diago principal
      if(i == j) diagonalP += matriz[i][j];

      //diagonal secundaria
      if(i + j == (n - 1)) diagonalS += matriz[i][j];
      
      //igualdade
      if (matriz[i][j] == matriz[j][i] &&  (j != i)){
        cout << "condicao1" << endl;
        printf("nao eh magico");
        return 0;
      };
    }
    
    cout << "SOMA LINHA = " << somaLinhaAtual << endl;
    if (soma != somaLinhaAtual){
      cout << "condicao2" << endl;
      printf("nao eh magico");
      return 0;
    }

    if(soma != somaColunaAtual){
      cout << "condicao3" << endl;
      printf("nao eh magico");
      return 0;
    }

    somaColunaAtual = 0;
    somaLinhaAtual = 0;

  }
  
  cout << "PRINCIPAL = " << diagonalP << endl;
  cout << "SECUNDÁRIA = " << diagonalS << endl;


  if(soma != diagonalP || soma != diagonalS) {
    cout << "condicao4" << endl;
    printf("nao eh magico");
    return 0;
  }

  printf("é mágico\n");
  
}