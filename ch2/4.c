#include<stdio.h>
void jolly(void);
void deny(void);

int main(void){
jolly();
jolly();
jolly();
deny();
return 0;
}

//函数定义开始
void jolly(void){
    printf("For he's a good jolly Fellow!\n");
}
void deny(void){
    printf("Which nobody can deny!\n");
}
