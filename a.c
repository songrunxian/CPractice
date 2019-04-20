/*************************************************************************
	> File Name: a.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Sat 20 Apr 2019 12:13:29 AM PDT
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n >= 75 && n <= 100){
        printf("GOOD\n");
    }else if(n >= 60 && n < 75){
        printf("MEDIUM\n");
    }else if(n > 0 && n < 60){
        printf("FAIL\n");
    }else if(n == 0){
        printf("250\n");
    }else{
        printf("your mark is wrong\n");
    }
    return 0;
}
