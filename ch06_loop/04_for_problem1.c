#include <stdio.h>

/**
 * 1~100까지 더하기
 */

int main(){
    int total = 0; //덧셈 결과를 저장할 변수
    int a;
    for(a=1;a<101;a++){
        total = total + a; // total += a; <-이걸 더 많이 씀
       
    //     if(total>30){
    //     break;
    // }
    }
    printf("1~100까지 합은 %d\n", total);

}