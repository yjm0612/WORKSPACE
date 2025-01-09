#include <stdio.h>

/**
 * 피보나치 수열 코드 개발
 *  -피보나치 수열이란, 첫째 및 둘째 항이 1이며 그 뒤의 모든 항은 바로 앞 두 항의 앞인 수열
 *  1 1 2 3 5 8 ...
 */
// int main() {
//     int a = 1, b = 1, c, n;
    
//     printf("숫자 입력: ");
//     scanf("%d", &n);
      
//     if (n >= 1) {
//         printf("%d ", a);
//     }
//     if (n >= 2) { 
//         printf("%d ", b);
//     }

//     for (int i = 3; i <= n; i++) {
//         c = a + b;  
//         printf("%d ", c); 
//         a = b;
//         b = c; 
//     }
//     printf("\n"); 
// }
int main(){
    int a=1, b=1, fib;
    printf("%d %d", a, b);

    while(1){
        fib = a + b;
        printf("%d", fib);
        a = b;
        b = fib;
        if(fib > 13){
            break;
        }
    }
}