#include <stdio.h>

int main(){
    // 문자열 저장 -> char[]배열
    // 문자열 저장 -> 포인터 변수
    // "apple" -> 'a'의 시작주소
    // 포인터 변수 dessert에 'a'의 시작 주소 저장
    // char fruit[6] = "apple"; -> 문자열을 직접 배열에 담지 않아도 컴파일러가 문자열을 char[]에 저장해서 실행
    //                              -> 실제 문자열에 문자열의 첫 문자의 주소를 저장
    char *dessert = "apple";

    printf("오늘 후식은 %s입니다. \n", dessert);  //dessert포인터 변수의 시작주소(a의 시작 주소) 호출 -> 널문자 나올때까지 출력
    dessert = "banana";  // 포인트 주소는 여러 주소를 담을 수 있다
    printf("오늘 후식은 %s입니다. \n", dessert);  //apple주소는 그대로 있고 banana 새로 생성 (apple값이 banana로 바뀌는게 아님)


    // 같은 문자열 상수를 여러번 사용할 때
    //  - "grape" 문자열을 메모리에 저장하고 그 주소를 공유하도록함
    //  - 즉, 여러번 사용해도 문자열은 1개만 저장 됨
    // ※ 객체지향언어는 문자열을 객체로 저장하고, 같은 문자열을 호출할 경우 객체를 공유해서 사용하도록 함
    char *pa = "grape";
    char *pb = "grape";
    char *pc = "grape";

}