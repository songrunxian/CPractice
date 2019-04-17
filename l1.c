/*************************************************************************
	> File Name: l1.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Wed 17 Apr 2019 03:12:19 AM PDT
 ************************************************************************/

#include <stdio.h> 
int main(){
    int n;
    scanf("%d",&n);
    int r = printf("%d\n",n);
    printf("%d\n",r-1);//输出一个缓行字符
    return 0;
}
