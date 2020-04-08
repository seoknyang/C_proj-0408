#include <stdio.h>

 

void printCoin(int coin[4], int money);

 

int main(void)

{

        int coin[4] = { 500, 100, 50, 10 }; //500원 100원 50원 10원

        int money;

 

        printf("금액 입력: ");

        scanf("%d", &money);

        printCoin(coin, money - (500 + 100 + 50 + 10)); //동전들을 최소 한번씩은 사용했다

        return 0;

}

 

void printCoin(int coin[4], int money)

{

        int result[4] = { 0, 0, 0, 0 };

        for (int i = 0; i < 4; i++)

        {

               while (1)

               {

                       if (money - coin[i] >= 0) //동전을 전부 쓸 수 있을 때까지

                       {

                              money -= coin[i];

                              result[i]++;

                       }

                       else

                              break;

               }

        }

        printf("500원:%d개\n100원:%d개\n50원:%d개\n10원:%d개\n", result[0] + 1, result[1] + 1, result[2] + 1, result[3] + 1);

}
