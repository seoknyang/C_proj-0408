#include <stdio.h>

 

void printCoin(int coin[4], int money);

 

int main(void)

{

        int coin[4] = { 500, 100, 50, 10 }; //500�� 100�� 50�� 10��

        int money;

 

        printf("�ݾ� �Է�: ");

        scanf("%d", &money);

        printCoin(coin, money - (500 + 100 + 50 + 10)); //�������� �ּ� �ѹ����� ����ߴ�

        return 0;

}

 

void printCoin(int coin[4], int money)

{

        int result[4] = { 0, 0, 0, 0 };

        for (int i = 0; i < 4; i++)

        {

               while (1)

               {

                       if (money - coin[i] >= 0) //������ ���� �� �� ���� ������

                       {

                              money -= coin[i];

                              result[i]++;

                       }

                       else

                              break;

               }

        }

        printf("500��:%d��\n100��:%d��\n50��:%d��\n10��:%d��\n", result[0] + 1, result[1] + 1, result[2] + 1, result[3] + 1);

}
