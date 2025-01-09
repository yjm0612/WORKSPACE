#include <stdio.h>

/**
 * 반복문(loop)
 *  -조건을 만족하는 동안 반복해서 실행되는 코드
 *  -while문:반복 횟수를 모르는 경우
 *  -for문:반복 횟수를 아는 경우
 */

int main(){
    int num = 5;

    // 조건이 지속적으로 참인 경우 -> 무한 루프
    // 무한루프에 빠지지 않도록 주의!!
    // while문을 사용할 때는 if문+break문과 반드시 함께 사용할 것
    // while(10>num){ 
    //     printf("10보다 작아요");
    // }
    while(7 > num){
        num = num + 1;
        printf("10보다 작아요\n");
    }
}