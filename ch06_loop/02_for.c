#include <stdio.h>

/**
 * for문
 *  - 반복 횟수를 아는 경우 사용 ex)게시글 목록
 *  - for문은 초기식, 조건식, 증감식으로 구성
 *  - i 변수 -> 반복 횟수 
 *  - for 블럭문 내에서 i, j ,k의 값을 수정하면 안됨
 */

int main(){
    //구구단 2단 
    for(int i = 1; i<10; i++){
        printf("2x%d=%d\n", i , i*2);
    }

}