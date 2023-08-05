#include <stdio.h>
int fun1(int a,int b),fun2(int a,int b),fun3(int a,int b);//定义函数 
int main(){
	int (*pfun[3])(int,int);//定义指针 
	
	pfun[0]=fun1; 
	pfun[1]=fun2;
	pfun[2]=fun3;
	
	printf("%d\n",pfun[0](1,2));//比较 
	printf("%d\n",pfun[1](3,5));//3+5
	printf("%d\n",pfun[2](6,4));//6*4
	return 0;
}
int fun1(int a,int b){
	//比较大小 
	if (a>b){
		return a;
	}else{
		return b;
	}
}
int fun2(int a,int b){
	//加法 
	return a+b;
}
int fun3(int a,int b){
	//乘法
	return a*b; 
}
