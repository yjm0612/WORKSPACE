#include <stdio.h>

int main(){
    //두 수를 입력받고 크기를 비교하는 프로그램
    int a, b;
    printf("첫번째 수: ");
    scanf("%d", &a);
    printf("두번째 수: ");
    scanf("%d", &b);

    if(a>b){
        printf("%d가 더 크다", a);
    }else if(a<b){
        printf("%d가 더 크다", b);
    }else{
        printf("두 수의 크기가 같다.");
    }

}