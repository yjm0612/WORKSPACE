#include <stdio.h>

// format
// -정수(%d)   -> Decimal
// -실수(%lf)  -> Float
// -문자(%c)   -> Character
// -문자열(%s) -> String

int main(){
    printf("%d\n", 10); // %d위치에 10을 출력한다
    
    printf("%.1lf\n", 3.45); //%lf 위치에 3.45를 추력
                             // +소수점 첫재 자리까지 반올림해서 출력

    printf("%d와%d의 합은 %d입니다.", 10, 20, 10+20);
}