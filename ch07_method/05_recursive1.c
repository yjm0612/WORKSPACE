#include <stdio.h>


// 재귀함수: 자기 자신을 호출하는 함수
 
// 1.무한 호출되는 재귀함수(잘못된 예시)
void fruit(viod);

void fruit(void){
    printf("apple");
    fruit();  // 재귀함수
}

int main(void){
    fruit();
}