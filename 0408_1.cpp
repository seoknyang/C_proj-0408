#include <stdio.h>

int main()
{
	int decimal;
	printf("10���� �Է�: ");
	scanf("%d", &decimal);
    
    int binary[20] = { 0, };

    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;    // 2�� �������� �� �������� �迭�� ����
        decimal = decimal / 2;             // 2�� ���� ���� ����

        position++;    // �ڸ��� ����

        if (decimal == 0)    // ���� 0�� �Ǹ� �ݺ��� ����
            break;
    }

    // �迭�� ��Ҹ� �������� ���
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");
    printf("8����: %o\n", decimal);
    printf("16����: %x\n", decimal);

    return 0;
}
