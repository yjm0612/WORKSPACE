#include <stdio.h>

int main(){
    //사용자로부터 나이를 입력받고, 20살 이상이면 주류를 판매하는 시스템
    int age;
    printf("나이: ");
    //1.나이 입력받기
    scanf("%d", &age);

    //2.주류 구매 가능 여부 
    if(age>=20){
        printf("주류 구매 가능");
    }else{
        printf("주류 구매 불가능");
    }
}