#include <stdio.h>

struct profile{
    int age;
    double height;
};

struct student{
    struct profile pf;  // student 구조체 내에 멤버 변수로 profile 구조체 선언
    int id;
    double grade;
};

int main(){
    struct student s1;
    s1.pf.age = 24;
    s1.pf.height = 177;
    s1.id = 21;
    s1.grade = 3.5;

    printf("나이:%d\n키:%.1lf\n학번:%d\n학점:%.1lf\n ", s1.pf.age, s1.pf.height, s1.id, s1.grade);

}