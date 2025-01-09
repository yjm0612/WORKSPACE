#include <stdio.h>

// 구구단 2~9단

int main(){
    for(int j=2;j<=9;j++){    //단수결정
        for(int i=1;i<=9;i++){  // x2~x9
            printf("%dX%d=%d", j, i, j * i);
        }
    }

}