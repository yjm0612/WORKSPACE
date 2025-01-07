#include <stdio.h>

/**
 * 형 변환(Casting)
 *  1.프로모션(small type의 값 -> big type값에 집어넣)
 *   -문제 없음(일반적으로 자동으로 형변환)
 *   ex) int값 -> double값
 *  2.캐스팅(big type -> small type)
 *   -값의 손실 발생(직접 코드 작성해야함)
 *   ex) 3.14 -> int(3)
 */

int main(){
    //프로모션
    double res;
    res = 5;
    printf("%.1lf\n", res);  //5.0

    //캐스팅
    double pi = 3.14;
    int a;
    a = (int)pi;  //()<- 캐스팅팅
    printf("%d\n", a);
}