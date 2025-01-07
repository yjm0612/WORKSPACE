#include <stdio.h>
/**
 * 정수형 자료형
 *  - char, short, int(4byte), long, longlong
 *  - 우측으로 갈수록 더 큰 값을 표현 가능
 *  - char 문자형 -> 정수형으로 변환
 *  - 동일한 type인데 다양한 범위의 자료형을 사용하는 이유는 메모리의 낭비를 막고, 효율적으로 관리하기 위해서 
 *  - sizeof()함수 -> 자료형의 크기(byte 단위) 확인 가능
 */

int main(){
    char ch1 = 'A';  // 문자로 초기화, 저장된 값을 ASCII 코드값
    char ch2 = 65;   // 문자 'A'의 ASCII 코드값에 해당하는 정수로 초기화

    printf("문자 %c의 아스키 코드값: %d\n", ch1, ch1);
    printf("아스키 코드 값이%d인 문자: %c\n", ch2, ch2);
    printf("=========================================");

    short sh = 32767;    // short의 최대값(-32767 ~ +32767)
    int in = 2147483647; // int ''
    long ln = 2147483647;  // long ''
    long long lln = 123451234512345;  // 그냥 큰 값

    // Quiz: short sh = 32767
    // sh+1 = ? -> -32767 

    printf("short형 변수 출력: %d\n", sh);
    printf("int형 변수 출력: %d\n", in);
    printf("long형 변수 출력: %ld\n", ln);
    printf("long long형 변수 출력: %lld\n", lln);

    printf("int형의 크기:%d byte \n", sizeof(int));
    printf("long형의 크기:%ld byte \n", sizeof(long));
    printf("long long형의 크기:%lld byte \n", sizeof(long long));
}