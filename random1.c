#include "stdio.h"
#include "time.h"

int main(){
    srand((unsigned)time(NULL));
    for (int i=0;i<100;i++){
        if (i%10==0){
	    putchar('\n');
	}else{
	    putchar(' ');
	}

	for (int j=0;j<3;j++){
            printf("%d",rand()%10);
        }
	//if (i%9==0){
	//    putchar('\n');
	//}else{
	//    putchar(' ');
	//}
    }
    return 0;
}
