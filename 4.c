/*************************************************************************
	> File Name: 4.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Sat 20 Apr 2019 04:10:55 AM PDT
 ************************************************************************/

#include <stdio.h> 

int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    if((a++) && (b++)){
        printf("hhh");
    }else{
        printf("nnn");

    }
    printf("%d %d",a,b)
    return 0;
}
