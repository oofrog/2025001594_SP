#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int main(void)
{
    int a, b, cnt = 0, i;

    // 난수 생성기 초기화
    srand(time(NULL));

    for (i = 0; i < 1000; ++i) {
        a = rand() % 3 + 1;  /* 1부터 3 사이의 난수 */
        b = rand() % 30 + 1; /* 1부터 30 사이의 난수 */

        // b - a가 1보다 작거나 같으면 이번 루프를 건너뜀
        if (b - a <= 1)
            continue;

        // b - a가 2보다 큰지 확인 (만약 b - a == 2라면 여기서 프로그램이 중단됨)
        assert(b - a > 2);

        printf("%3d\n", ++cnt);
    }

    return 0;
}