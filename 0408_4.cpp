#include <stdio.h>
#include <time.h>
#include <stdlib.h>

 

void print_matrix(int **m, int row_size, int col_size);

void multiply_matrix(int **ma, int **mb, int row1, int col1, int row2, int col2);

 

int main(void)

{

        int **a, **b;

        int row1, row2=1, col1=0, col2;

        srand((unsigned)time(NULL)); //�õ尪

        while (col1 != row2)

        {

               printf("ù ��° ����� ��� ���� �Է�: ");

               scanf("%d %d", &row1, &col1);

               printf("\n�� ��° ����� ���� ù ��° ����� ���� �����ؾ��մϴ�\n");

               printf("��ġ���� ������ ���Է�\n\n");

               printf("�� ��° ����� ��� ���� �Է�: ");

               scanf("%d %d", &row2, &col2);

        }

        a = (int**)malloc(sizeof(int*)*row1);

        for (int i = 0; i < row1; i++)

        {

               a[i] = (int*)malloc(sizeof(int)*col1);

        }

        b = (int**)malloc(sizeof(int*)*row2);

        for (int i = 0; i < row2; i++)

        {

               b[i] = (int*)malloc(sizeof(int)*col2);

        }

        for (int i = 0; i < row1; i++)

        {

               for (int j = 0; j < col1; j++)

               {

                       a[i][j] = rand() % 10;

               }

        }

        printf("\na �迭 ���\n");

        print_matrix(a, row1, col1);

        for (int i = 0; i < row2; i++)

        {

               for (int j = 0; j < col2; j++)

               {

                       b[i][j] = rand() % 10;

               }

        }

        printf("b �迭 ���\n");

        print_matrix(b, row2, col2);

        multiply_matrix(a, b, row1, col1, row2, col2);

        //�޸� ����

        for (int i = 0; i < row1; i++)

        {

               free(a[i]);

        }

        for (int i = 0; i < row2; i++)

        {

               free(b[i]);

        }

        free(a);

        free(b);

        return 0;

}

 

void multiply_matrix(int **ma, int **mb, int row1, int col1, int row2, int col2)

{

        int **mab;

        mab = (int**)malloc(sizeof(int*)*row1);

        for (int i = 0; i < row1; i++)

        {

               mab[i] = (int*)malloc(sizeof(int)*col2);

        }

        for (int i = 0; i < row1; i++)

        {

               for (int j = 0; j < col2; j++)

               {

                       mab[i][j] = 0;

                       for (int k = 0; k < col1; k++)//ù ��° ����� ���� �� ��° ����� ���� ��ġ�ؾ��ϴ� ����

                       {

                              mab[i][j] += ma[i][k] * mb[k][j];

                       }

               }

        }

        printf("aXb ��� ���\n");

        print_matrix(mab, row1, col2);

        //�޸� ����

        for (int i = 0; i < row1; i++)

        {

               free(mab[i]);

        }

        free(mab);

}

 

void print_matrix(int **m, int row_size, int col_size)

{

        int i, j;

        for (i = 0; i < row_size; i++)

        {

               for (j = 0; j < col_size; j++)

                       printf("%3d ", m[i][j]);

               printf("\n");

        }

}
