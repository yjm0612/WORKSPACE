#include <stdio.h>
/**
 * 변수: 하나의 값을 저장하는 메모리 공간
 * 1. 선언 + 초기화 -> int num = 4; 
 * 2. 선언, 초기화  -> int num; num = 4;
 * 
 * 초기화?
 * - 변수가 할당된 실제 메모리 공간에는 기존에 쓰레기 파일들이 남아있음
 * - 초기화를 통해서 쓰레기값을 삭제하고 값을 저장
 * 
 * "=" 대입연산자
 *  - 좌측과 우측에 값이 같다 -> ==
 *  - 우측에 값을 좌측에 대입한다 -> =
 * 
 * 변수와 상수
 *  - 변수: 변하는 값(한 번 생성 후에 값을 여러번 변경 가능)
 *  - 상수: 변하지 않는 값
 *    + ex) 금리, 파이값
 *    + "const" 키워드 붙이면 상수 선언
 *    + 상수는 보통 대문자 사용(변수는 소문자 사용)
 *    + 상수는 "선언+초기화"만 가능
 * 
 * 자료형(Data Type)
 *  - 해당 변수에 저장할 값의 형태를 작성
 *  - int, float, double, char, ...
 */

int main(){
    int a;     // int형 변수  a 선언
    int b, c;  //int형 변수 b, c 선언
    double da; // double형 변수 선언
    char ch;   //char형 변수 선언

    a = 10;    // a변수에 10 초기화
    da = 3.14; // da변수에 3.14 초기화
    ch = 'A';  // ch변수에 'A' 초기화화
}