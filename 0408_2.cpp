#include <stdio.h>
#include <string.h>
#include <math.h>

 

long bin_to_dec(char num[]);
long dec_to_octal(long n);

 

int main(void)

{

        char num[20]; 

        printf("������ �Է�: ");

        scanf("%s", num);

        printf("10������ ��ȯ�ϸ�: %ld\n", bin_to_dec(num));

        printf("8������ ��ȯ�ϸ�: %ld\n", dec_to_octal(bin_to_dec(num)));

        return 0;

}

 

long bin_to_dec(char num[])

{

        long result = 0, idx = 0;

        for (int i = (strlen(num) - 1); i >= 0; i--)

               if (num[idx++] == '1')

                       result += pow(2, i); 

        return result;

}

 

long dec_to_octal(long n) 

{

        if (n <= 7)

               return n;

        return dec_to_octal(n / 8) * 10 + n % 8;

}
