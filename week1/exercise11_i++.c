/* some powers of 2 are printed */
/*11������*/

#include <stdio.h>

int main(void)
{
    int i = 0, power = 1;

    while(i++ <= 10) // ������ ����� �� ���� ����(���� �˻� <=10 �� ���� i�� ������Ŵ)
    printf("%-6d", power *= 2);
    printf("\n");

    return 0;
}

/* 
++i
1�̳�**
2�̳�
3�̳�
.
.
.
10�̳�

i++
0�̳� **
1�̳�
2�̳�
.
.
.
10�̳�
 */