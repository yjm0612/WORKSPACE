#include <stdio.h>

/**
 * Brealk: 즉시 반복문을 빠져나가세요.
 * Continue: 즉시 다음 반복으로 넘어가세요.
 */
int main(){
    for(int i=1; i<10; i++){
        if(i%2==0){
            continue;  //짝수면 출력 안하고 바로 다음 반복문으로 넘어감
        }
        if(i==5){
            break;
        }
        printf("%d\n", i);
    }

}