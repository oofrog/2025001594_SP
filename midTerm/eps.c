#include <stdio.h>

int main() {
    double eps = 1.0;

    // 1.0 + eps가 1.0보다 큰 동안 계속 절반으로 나눔
    while ((1.0 + eps) > 1.0) {
        eps = eps / 2.0;
    }

    // 루프를 빠져나왔을 때는 '너무 작아진 상태'이므로 다시 2를 곱해줌
    printf("내 컴퓨터의 머신 입실론: %e\n", eps * 2.0);

    return 0;
}