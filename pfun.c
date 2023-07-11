#include "stdio.h"

int choose;
int cook(),sleep(),poet();

int main(){
    int (*pfun[3])();

    pfun[0]=cook;
    pfun[1]=sleep;
    pfun[2]=poet;

    printf("你想要干什么？\n1.做饭\n2.睡觉\n3.写诗\n");
    scanf("%d",&choose);
    if (choose<4&&choose>0){
    pfun[choose-1]();
    }else{
    printf("错误！\n");
    }

}
int cook(){
printf("去做饭\n");
return 0;
}
int sleep(){
printf("去睡觉\n");
return 0;
}
int poet(){
printf("去写诗\n");
return 0;
}
