/**
 * return 반환값
 *  - 기본적으로 함수 종료(호출한 곳으로 돌아가기)
 *  - 반환값 -> 데이터반환타입도 함수 정의부에 정의해야함
 *  - 반환값이 없는 경우는 데이터반환타입 void로 정의
 *  - return or 반환값 모두 생략 가능
 */

#include <stdio.h>
void voidFnc();
char intFnc();

void voidFnc(){
    printf("Hello");
    return; // 반환값이 없으므로 void
}

char intFnc(){
    return 'A';
}

int main(){
    voidFnc();
    intFnc();
}