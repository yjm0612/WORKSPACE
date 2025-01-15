//화씨온도를 섭씨 온도로 변환하는 프로그램

#include <stdio.h>

double FtoC(double fVal) {
    double cVal = (5.0 * (fVal - 32.0)) / 9.0;
    return cVal;
}

int main() {
    double fVal = 0.0;
    printf("화씨 온도: ");
    scanf("%lf", &fVal);

    double cVal = FtoC(fVal);
    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);

    return 0;
}