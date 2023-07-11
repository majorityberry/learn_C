#include "stdio.h"

int choose;

int cook(),sleep(),poet();

int main(){
    printf("你想要干什么？\n1.做饭\n2.睡觉\n3.写诗\n");
    scanf("%d",&choose);
    switch (choose){
       	case 1:
		cook();
		break;
        case 2:
		sleep();
                break;
	case 3:
		poet();
		break;
	default:
		printf("错误！\n");
		break;
    }
    return 0;
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
