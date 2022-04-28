//** Aluno: Arthur César Cardoso Clemente**//
//** Matrícula: 20190175757**//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "matrix.h"

struct matrix create_matrix(int *data, int n_rows, int n_cols){

    struct matrix a_matrix;
    a_matrix.n_rows =n_rows;
    a_matrix.n_cols =n_cols;
    a_matrix.stride_rows = n_rows;
    a_matrix.stride_cols = 1;
    a_matrix.offset = 0;

    a_matrix.data = (int *)(malloc((n_rows*n_cols)* sizeof(int)));

    for(int i=a_matrix.offset;i<(n_rows*n_cols);i++){
        a_matrix.data[i] = *(data + i);
        }

    return a_matrix;
};


struct matrix zeros_matrix(int n_rows, int n_cols){
    int i;
    struct matrix matrix_nw;
    matrix_nw.data = (int *)(malloc((n_rows*n_cols)* sizeof(int)));

    for(i=0;i<(n_rows*n_cols);i++){
        matrix_nw.data[i] = 0;
        }
    matrix_nw.n_rows =n_rows;
    matrix_nw.n_cols =n_cols;
    matrix_nw.stride_rows = n_rows;
    matrix_nw.stride_cols = 1;
    matrix_nw.offset = 0;

    return matrix_nw;
};


struct matrix random_matrix(int n_rows, int n_cols, int b, int e){
    int i;
    srand(time(NULL));

    struct matrix matrix_rand;

    matrix_rand.data = (int *)(malloc((n_rows*n_cols)* sizeof(int)));

    for(i=0;i<(n_rows*n_cols);i++){
        matrix_rand.data[i] = (rand()% (e-b+1) + b);
        }

    matrix_rand.n_rows =n_rows;
    matrix_rand.n_cols =n_cols;
    matrix_rand.stride_rows = n_rows;
    matrix_rand.stride_cols = 1;
    matrix_rand.offset = 0;

    return matrix_rand;
}


struct matrix i_matrix(int n){
    int i;
    struct matrix matrix_i;

    matrix_i.n_rows =n;
    matrix_i.n_cols =n;
    matrix_i.stride_rows = n;
    matrix_i.stride_cols = 1;
    matrix_i.offset = 0;
    matrix_i.data = (int *)(malloc((n*n)* sizeof(int)));

    int cont=0;

    for(i=0;i<(n*n);i++){
        if(i==(matrix_i.stride_rows*cont + matrix_i.stride_cols*cont)){
            matrix_i.data[i] = 1;
            cont++;


        }else{
            matrix_i.data[i] = 0;

            }}

    return matrix_i;
};


int get_element(struct matrix a_matrix, int ri, int ci){

    int elemento;

    elemento = ((ri - 1)*a_matrix.stride_rows) + (ci - 1);

    return a_matrix.data[elemento];
}

void put_element(struct matrix a_matrix, int ri, int ci, int elem){

    int put_e;

    put_e= ((ri - 1)*a_matrix.stride_rows) + (ci - 1);

    a_matrix.data[put_e] = elem;
}

void print_matrix(struct matrix a_matrix){

    for (int i = 0; i <(a_matrix.n_rows*a_matrix.n_cols); i++) {
        if (i % a_matrix.n_cols == 0) {
            printf("\n");
        }
        printf("%d ",a_matrix.data[i]);
    }

}

struct matrix transpose(struct matrix a_matrix){

    struct matrix new_array;

    new_array.n_rows = a_matrix.n_rows;
    new_array.n_cols = a_matrix.n_cols;
    new_array.stride_rows = a_matrix.stride_rows;
    new_array.stride_cols = a_matrix.stride_cols;
    new_array.offset = 0;
    new_array.data = (int *)(malloc((a_matrix.n_rows*a_matrix.n_cols)* sizeof(int)));

    for (int i = 0; i < a_matrix.n_rows; ++i )
    {
       for (int j = 0; j < a_matrix.n_cols; ++j )
       {
          int index1 = i*a_matrix.n_cols+j;
          int index2 = j*a_matrix.n_rows+i;

          new_array.data[index2] = a_matrix.data[index1];
       }
    }

    for (int i=0; i<(a_matrix.n_rows*a_matrix.n_cols); i++) {
        a_matrix.data[i] = new_array.data[i];

    }

   return a_matrix;
}

struct matrix reshape(struct matrix a_matrix, int new_n_rows, int new_n_cols){

    if (a_matrix.n_cols*a_matrix.n_rows > new_n_rows*new_n_cols){
        a_matrix.n_cols = new_n_cols;
        a_matrix.stride_rows = new_n_cols;
        a_matrix.n_rows = new_n_rows;

    }else{
        printf("Array excedeu o limite permitido");
    }

    return a_matrix;
}


struct matrix flatten(struct matrix a_matrix){

    a_matrix.n_cols = (a_matrix.n_cols*a_matrix.n_rows);
    a_matrix.stride_rows = (a_matrix.n_cols*a_matrix.n_rows);
    a_matrix.n_rows = 1;

    return a_matrix;
}

struct matrix slice(struct matrix a_matrix, int rs, int re, int cs, int ce){


    a_matrix.n_cols = ce -1;
    a_matrix.n_rows = re;
    a_matrix.stride_cols = cs;
    a_matrix.stride_rows = rs;

    return a_matrix;

};

int sum(struct matrix a_matrix){

    int soma_n;
    for(int i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
        soma_n += a_matrix.data[i];
    }
    return soma_n;
}

int mean(struct matrix a_matrix){

    int soma, media_n;
    for(int i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
        soma += a_matrix.data[i];
    }

    media_n = soma/(a_matrix.n_rows*a_matrix.n_cols);

    return media_n;
}

int min(struct matrix a_matrix){
    int i;
    int min_n = a_matrix.data[0];

    for(i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
        if (a_matrix.data[i] < min_n){
            min_n = a_matrix.data[i];
    }}
    return min_n;
}

int max(struct matrix a_matrix){

    int max_n = a_matrix.data[0];

    for(int i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
        if (a_matrix.data[i] > max_n){
            max_n = a_matrix.data[i];
    }}
    return max_n;
}

struct matrix add(struct matrix a_matrix, struct matrix b_matrix){

    int i;
    struct matrix c_matrix;
    c_matrix.data = (int *)(malloc((a_matrix.n_rows*a_matrix.n_cols)* sizeof(int)));

    if(a_matrix.n_rows == b_matrix.n_rows && a_matrix.n_rows == b_matrix.n_cols){

        for(i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
            c_matrix.data[i] = a_matrix.data[i] + b_matrix.data[i];

        }
    }else{
        printf("Erro, ss matrizes não são de mesma ordem\n");

    }

    return c_matrix;
};

struct matrix sub(struct matrix a_matrix, struct matrix b_matrix){

    int i;
    struct matrix c_matrix;
    c_matrix.data = (int *)(malloc((a_matrix.n_rows*a_matrix.n_cols)* sizeof(int)));

    if(a_matrix.n_rows == b_matrix.n_rows && a_matrix.n_rows == b_matrix.n_cols){

        for(i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
            c_matrix.data[i] = a_matrix.data[i] - b_matrix.data[i];

        }
    }else{
        printf("Erro, ss matrizes não são de mesma ordem\n");

    }

    return c_matrix;

};


struct matrix division(struct matrix a_matrix, struct matrix b_matrix){

    int i;

    struct matrix c_matrix;

    c_matrix.data = malloc((a_matrix.n_rows*a_matrix.n_cols) * sizeof(float));

    if(a_matrix.n_rows == b_matrix.n_rows && a_matrix.n_rows == b_matrix.n_cols){

        for(i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
            c_matrix.data[i] = (a_matrix.data[i] / b_matrix.data[i]);
        }
    }else{
        printf("Erro, as matrizes não são de mesma ordem\n");

    }

    return c_matrix;
};


struct matrix mul(struct matrix a_matrix, struct matrix b_matrix){

    int i;
    struct matrix c_matrix;
    c_matrix.data = (int *)(malloc((a_matrix.n_rows*a_matrix.n_cols)* sizeof(int)));

    if(a_matrix.n_rows == b_matrix.n_rows && a_matrix.n_rows == b_matrix.n_cols){

        for(i=0;i<(a_matrix.n_rows*a_matrix.n_cols);i++){
            c_matrix.data[i] = a_matrix.data[i] * b_matrix.data[i];

        }
    }else{
        printf("Erro, ss matrizes não são de mesma ordem\n");

    }

    return c_matrix;
}


struct matrix matmul(struct matrix a_matrix, struct matrix b_matrix){

    struct matrix c_matrix;

    if(a_matrix.n_cols == b_matrix.n_rows){
    c_matrix.data = (int *)(malloc((a_matrix.n_rows*a_matrix.n_cols)* sizeof(int)));


    for (int i = 0; i < a_matrix.n_rows; i++) {
        for (int j = 0; j < b_matrix.n_cols; j++) {
            int sum = 0;
            for (int k = 0; k < a_matrix.n_cols; k++)
                sum += a_matrix.data[i * a_matrix.n_cols + k] * b_matrix.data[k * b_matrix.n_cols + j];
            c_matrix.data[i * b_matrix.n_cols + j] = sum;
            }
        }
    }
    else{
        printf("Numero de colunas de A e diferente do numero de linhas B.");
        exit(1);
    }

    c_matrix.n_rows = a_matrix.n_rows;//Preenchendo o n_rows
    c_matrix.n_cols = b_matrix.n_cols;//Preenchendo o n_cols
    c_matrix.stride_rows = a_matrix.stride_rows;//Neste caso igual ao n_rows.
    c_matrix.stride_cols = 1;//Neste caso igual a 1.
    c_matrix.offset = 0;

    return c_matrix;

};

int main(void){

FILE *fp;
fp = fopen("matrix.h","r");

    struct matrix a,b;

    int matriz1[] = {1,2,3,4,5,6,7,8,9};
    int matriz2[] = {1,2,3,4,5,6,7,8,9};
    a = create_matrix(matriz1,3,3);
    b = create_matrix(matriz2,3,3);


fclose(fp);
return 0;
}
