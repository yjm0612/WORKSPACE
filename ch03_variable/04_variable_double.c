#include <stdio.h>

/**
 * 실수자료형(소수점 O)
 *  - float(7), double(15), long double(15이상) (우측으로 갈 수록 커짐)
 *  - 정수형(int)을 기본으로 사용, 실수형은 꼭 필요한 경우에만 사용
 *  - 실수형은 double을 기본으로 사용
 *  - 실수형은 값의 범위보다 유효 숫자 개수(소수점 몇째자리)가 더 중요
 * 
 *  ※ C, JAVA, Python, JavaScript
 *    - 수치연산(C가 제일 bb)
 *    - 인공지능 -> 수치연산 -> Python
 *       Python -> 수치연산 -> CPython
 */

int main(){
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    //소수점이하 20자리까지 출력
    printf("float형 변수값: %.20f\n", ft);  // 소수점 7번째 자리까지 가능
    printf("double형 변수값: %.20lf\n", db);  // '' 15번째      ''
}