#include <stdio.h>

// while문을 사용해서 1~100까지의 값을 홀수합, 짝수합 계산

int main(){
    int evenSum=0, oddSum=0;
    int i=1;
    while(i<101){
        if(i%2==0){
            evenSum += i;
        }else{
            oddSum += i;
        }
        i++;   
    }
    printf("짝수합: %d, 홀수합: %d", evenSum, oddSum);
}