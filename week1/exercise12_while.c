#include <stdio.h>
/*12������*/

int main(void)
{
    int i = 0, power = 2048;

    while ((power /= 2) > 0) //power /=2 ����
    printf("%-6d", power);
        

    return 0;
}