#include<stdio.h>
#define CYCLE 60
#include<unistd.h>
#define clrscr() printf("\e[1;1H\e[2j")
int main(){

    int hour, minute, second;
    printf("Enter Your Hour Minute Second:");
    scanf("%d %d %d", &hour, &minute, &second);
    clrscr();                                          /// from clrsrc function ansii system
    int h = 0, m = 0, s = 0;
    while(1){
        printf("************* Digital Stop Watch *************\n\n");
        printf("                %.2d:%.2d:%.2d\n\n\n", h, m, s);            /// (%.2d) means two integer if it take input 0 then 00 or 9 then 09
        printf("***  ****   ****   ****   *****   *****   ****\n");
        if(h == hour && m == minute && s == second){
            break;
        }else{
            clrscr();
        }
        s++;
        sleep(1);                         /// from unistd.h header file which one second delay
        if(s == CYCLE){
            m++;
            s = 0;
        }if(m == CYCLE){
            h++;
            m = 0;
        }
    }
    return 0;
}
