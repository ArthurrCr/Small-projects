#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class matrix{

  private:
    int matriz_1[10],matriz_2[10][10], vetor_A[10], vetor_B[10];
    int n,m,num;


  public:
    void construtor();
    void valores(int operation);
    void somar(int vetor_A[10],int vetor_B[10],int m, int n);
    void subtrair(int vetor_A[10],int vetor_B[10],int m, int n);
    void multiplicar(int matriz_1[10],int n, int num);
    void matmul(int vetor_A[10],int vetor_B[10],int m, int n);
    int determinante(int matriz_2[10][10], int n);
    void transposta(int matriz_1[10], int n);
    
      
};

void matrix::valores(int operation){


}

int matrix::determinante (int matriz[10][10], int n){

  int det = 0;
  int submatriz[10][10];
  if( n == 2)
  return ((matriz[0][0]*matriz[1][1])-(matriz[1][0]*matriz[0][1]));
  else{
    for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatriz[subi][subj] = matriz[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matriz[0][x] * determinante( submatriz, n - 1 ));
      }
   }
   return det;
  }

void matrix::somar (int vetor_A[10], int vetor_B[10], int m,int n){
  
  if( m == n){
    int vetor_C[10];

    for(int i=0;i<(m*n);i++){
      vetor_C[i] = vetor_A[i] + vetor_B[i];
      
    }
    cout << "\nMatriz resultante: ";
    for (int i = 0; i <(m*n); i++) {
        if (i % m == 0) {
            printf("\n");
        }
        printf("%d ",vetor_C[i]);
    }
  }
  else{
    cout <<"\n**ERRO** As matrizes devem ter o mesmo tamanho, o mesmo número de linhas e colunas." << endl;
  }
}

void matrix::subtrair (int vetor_A[10], int vetor_B[10], int m, int n){
  
   if( m == n){
    int vetor_C[10];

    for(int i=0;i<(m*n);i++){
      vetor_C[i] = vetor_A[i] - vetor_B[i];
      
    }
    cout << "\nMatriz resultante: ";
    for (int i = 0; i <(m*n); i++) {
        if (i % m == 0) {
            printf("\n");
        }
        printf("%d ",vetor_C[i]);
    }
  }
  else{
    cout <<"\n**ERRO** As matrizes devem ter o mesmo tamanho, o mesmo número de linhas e colunas." << endl;
  }
}

void matrix::multiplicar (int matriz_1[10], int n, int num){

  int nova_matriz[10];

  for(int i=0;i<(n*n);i++){
    nova_matriz[i] = matriz_1[i] * num;    
  }
   cout << "\nMatriz resultante: ";
    for (int i = 0; i <(n*n); i++) {
        if (i % n == 0) {
            printf("\n");
        }
        printf("%d ",nova_matriz[i]);
    }
    
}

void matrix::matmul (int vetor_A[10], int vetor_B[10], int m, int n){

  int vetor_C[10];
  if( m == n){
  for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++)
                sum += vetor_A[i * n + k] * vetor_B[k * n + j];
                vetor_C[i *n + j] = sum;
            }
        }
    
    cout << "\nMatriz resultante: ";
    for (int i = 0; i <(m*n); i++) {
        if (i % (m) == 0) {
            printf("\n");
        }
        printf("%d ",vetor_C[i]);
    }
  }else{
    cout << "\n**ERRO** O número de colunas da matriz B deve ser igual número de linhas da matriz A." << endl;
  }
}

void matrix::transposta (int matriz_1[10], int n){

  int nova_matriz[10];

  for (int i = 0; i < n; ++i ){
       for (int j = 0; j < n; ++j ){

          int index1 = i*n+j;
          int index2 = j*n+i;

          nova_matriz[index2] = matriz_1[index1];
       }
    }

    for (int i=0; i<(n*n); i++) {
        matriz_1[i] = nova_matriz[i];
    }

    cout << "Matriz resultante: ";
    for (int i = 0; i <(n*n); i++) {
        if (i % n == 0) {
            printf("\n");
        }
        printf("%d ",matriz_1[i]);
    }
}

int main(){
  
  int operation;
  char ch;    
  int vetor_A[10],vetor_B[10],matriz_1[10],matriz_2[10][10];
  int m,n,num;
  matrix call;
  call.valores(operation);
  do{

    cout << "\n*** Calculadora de matrizes ***\n\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - MatMul\n5 - Determinante\n6 - Transposta\n\nDigite a operação desejada: ";
    cin >> operation;
    cout << endl;
    switch (operation){

      case 1:
        cout << "\nTamanho da matriz A: "<<endl;
        cin >> m;

        cout << "\nTamanho da matriz B: "<<endl;
        cin >> n;
   
        cout << "\nPreencha a matriz A:\n";
        for (int i=0;i<(m*n);i++)
        cin >> vetor_A[i];
        
       
        cout << "\nPreencha a matriz B:\n";
        for (int i=0;i<(m*n);i++)
        cin >> vetor_B[i];
        
        call.somar(vetor_A,vetor_B,m,n);
        break;

      case 2:
        cout << "\nTamanho da matriz A: "<<endl;
        cin >> m;

        cout << "\nTamanho da matriz B: "<<endl;
        cin >> n;
   
        cout << "\nPreencha a matriz A:\n";
        for (int i=0;i<(m*n);i++)
        cin >> vetor_A[i];
        
        cout << "\nPreencha a matriz B:\n";
        for (int i=0;i<(m*n);i++)
        cin >> vetor_B[i];
        call.subtrair(vetor_A,vetor_B,m,n);
        break;

      case 3:

        cout << "\nDigite o tamanho da matriz: "<<endl;
        cin >> n;

        cout << "\nDigite os valores da matriz:\n";

       for (int i=0;i<(n*n);i++)
        cin >> matriz_1[i];
        
        cout << "\nDigite o número a ser multiplicado pela matriz: ";
        cin >> num;
        cout << endl;
        call.multiplicar(matriz_1,n,num);
        break;

      case 4:
        cout << "\nTamanho da matriz A: "<<endl;
        cin >> m;

        cout << "\nTamanho da matriz B: "<<endl;
        cin >> n;
   
        cout << "\nPreencha a matriz A:\n";
        for (int i=0;i<(m*n);i++)
        cin >> vetor_A[i];
        
        
        cout << "\nPreencha a matriz B:\n";
        for (int i=0;i<(m*n);i++)
        cin >> vetor_B[i];
        call.matmul(vetor_A, vetor_B,m,n);
        break;

      case 5: 

        cout << "\nDigite o tamanho da matriz:\n";
        cin >> n;
        cout << "\nDigite os valores da matriz:\n";
        for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        cin >> matriz_2[i][j];
        cout<<"\nA matriz digitada foi:\n"<<endl;
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++)
          cout << matriz_2[i][j] <<" ";
          cout<<endl;
      
        }
        cout<<"\nO determinante da matriz é: "<<
   
        call.determinante(matriz_2, n);
        break;

      case 6:
        cout << "\nDigite o tamanho da matriz:\n";
        cin >> n;
   
        cout << "\nDigite os valores da matriz:\n";
        for (int i=0;i<(n*n);i++)
        cin >> matriz_1[i];
        cout << endl;
        call.transposta(matriz_1,n);
        break;
      }
  
  cout << "\nDeseja fazer outra operação s/n? ";
  cin >> ch;

  }while (ch!= 'n');
  cout << "\n";

  return 0;
  }