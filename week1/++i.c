/* some powers of 2 are printed */

#include <stdio.h>

int main(void)
{
    int i = 0, power = 1;

    while(++i <= 10) //변수를 먼저 증가시킨 후  해당 값 사용
    printf("%-6d", power *= 2);
    printf("\n");

    return 0;
}

/* 
%-6d 는 지정 서식자. 6은 필드폭을 나타내며 
출력되는 숫자가 최소한 6개의 문자(공백 포함)로 
표시되도록 서식 조정. 
마이너스 기호는 왼쪽 정렬 의미.  
*/


//printf("%6d", 42);
// %6d: 필드 폭이 6인 오른쪽 정렬된 숫자.
//Output: '    42' (4개의 공백 + '42')

//printf("%-6d", 42);
//%-6d: 필드 폭이 6인 왼쪽 정렬된 숫자
// Output: '42    ' ('42' + 4개의 공백)

//printf("%06d", 42);
//%06d: 필드 폭이 6인 오른쪽 정렬된 숫자, 빈 자리에는 '0'으로 채움
// Output: '000042'