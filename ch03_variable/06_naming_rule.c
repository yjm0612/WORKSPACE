/**
 * 명명규칙(Naming Rule)
 *  1.알파벳 대문자(A~Z), 알파벳 소문자(a~z), 숫자(0~9), 특수문자(_)만 사용가능
 *  2.숫자로 시작 불가
 *    ex) 1abc(x), a1bc(o)
 *  3.대문자와 소문자는 서로 다르게 인식
 *    ex) ABC != Abc != abc
 *  4.예약어는 사용 불가
 *    ex) 프로그래밍 언어에서 이미 사용하고 있는 키워드
 *        ->main, printf, sizeof, ...
 * 
 * 네이밍 케이스(합성어 표현) (암기!!)
 *  예) student + number
 *  C:Class(객체)
 *  M:Method(함수)
 *  V:Variable(변수)
 *  1.파스칼 케이스   -> StudentNumber(첫글자 대문자), Age
 *     - JAVA(C), Python(C)
 *  2.카멜 케이스     -> studentNumber(합성어의 첫글자만 대문자), age
 *     - C언어(V, M), JAVA(V, M), JSON
 *  3.스네이크 케이스 -> student_number(언더바 사용, 전부 다 소문자), age
 *     - Python(V, M)
 *  4.케밥 케이스     -> student-number(하이픈 사용), age
 *     - 웹디자인(HTML, CSS)
 */

// JAVA 예시
// StudentNumber   -> Class
// studentNumber() -> Method
// studentNumber   -> Variable