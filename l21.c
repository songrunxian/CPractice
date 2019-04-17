/*************************************************************************
	> File Name: l21.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Wed 17 Apr 2019 03:57:59 AM PDT
 ************************************************************************/

#include <stdio.h> 
int main(){
    
    char a[100];
    char b[100];
    scanf("%[^\n]s",&a);//是把换行符前面的内容输入，那个内部隐含指针停留在换行符
    getchar();
    printf("%d\n",sprintf(b,"%s",a));
    scanf("%[^\n]s",&a);
    getchar();
    printf("%d\n",sprintf(b,"%s",a));
    return 0;
}
