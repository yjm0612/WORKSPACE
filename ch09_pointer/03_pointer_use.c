#include <stdio.h>

int main(){
    int a = 10, b = 15, total;  //일반 변수 선언 및 초기화
    double avg;                 //일반 변수 선언
    int *pa, *pb;               //포인터 변수 선언
    int *pt = &total;           //포인터 변수 선언 및 초기화
    double *pg = &avg;          //포인터 변순 선언 및 초기화

    // 포인터 변수는 선언시에만 *붙이고 사용할 때는 *붙이지 않음
    pa = &a;                    //포인터변수 pa 초기화
    pa = &b;                    //포인터변수 pb 초기화
    
    // total = a + b; 랑 동일
    *pt = *pa + *pb;
    // avg = total / 2.0; 동일
    *pg = *pt / 2.0;

    printf("두 정수값: %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 평균: %.1lf\n", *pg);

    // 일반 변수 안쓰고 포인터 변수를 사용하는 경우
    //  1. (효율이 좋음)크기가 큰 데이터를 사용하는 경우
    //  2. (반드시 써야함)swap(값을 치환)하는 경우
}