#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 

int main(void)

{

        double principle, rate; //원금 이자율

        double *income; //수익

        int year;

 

        printf("원금: ");

        scanf("%lf", &principle);

 

        printf("이자율: ");

        scanf("%lf", &rate);

 

        printf("기간: ");

        scanf("%d", &year);

 

        income = (double*)malloc(sizeof(double)*year);

 

        for (int i = 0; i < year; i++)

        {

               income[i] = principle*(double)(pow(1 + 0.01*rate, i + 1)); //원금*(1+이자율)^예치기간

               printf("%d년 예치시:%.2f원(연%.1f%%)\n", i + 1, income[i], rate);

        }

        free(income); //메모리 해제

        return 0;

}
