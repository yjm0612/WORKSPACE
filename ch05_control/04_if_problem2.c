#include <stdio.h>

int main(){
    //0~100점 입력받고 학점 변환 출력

    //1.입력부
    int score;  //점수
    char grade; //학점
    printf("점수: ");
    scanf("%d", &score);
    // + 유효성 체크:사용자가 입력한 값이 유효한 값인지 체크
    //  1. 값이 있는지 체크크
    //  2. 정수형 숫자인지 체크
    //  3. 0~100사이인지 체크


    //2.제어부
    if(score>=100 || score <=0){
        printf("0~100사이의 숫자를 입력하세요.");
    }else if(score>=91){
        grade='A';
    }else if(score>=81){
        grade='B';
    }else if(score>=71){
        grade='C';
    }else if(score>=61){
        grade='D';
    }else{
        grade='F';
    }

    //3.출력부
    printf("학점: %c", grade);
}