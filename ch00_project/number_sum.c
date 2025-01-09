#include <stdio.h>

// 1.정수값 입력 받기! (ex: 412)
// 2.백의 자리/ 십의 자리/ 일의 자리 쪼개기기
// 3.출력: 4+1+2=7
// int main(){
//     int num;
//     int hundreds, tens, ones;

//     printf("정수를 입력하세요: ");
//     scanf("%d", &num);

//     hundreds = num / 100;       
//     tens = (num % 100) / 10;    
//     ones = num % 10;             

//     printf("%d", hundreds + tens + ones);

    
// }
int main(){
    int num;
    int total = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);


    while(num>0){
        total = total + num%10;
        num = num / 10;
    }
    printf("총합: %d", total);
}