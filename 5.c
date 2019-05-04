/*************************************************************************
	> File Name: 5.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Sat 20 Apr 2019 05:44:02 AM PDT
 ************************************************************************/

#include <stdio.h> 

int line (int x,int k , int b){
    return k*x + b;

}

int main () {
    int k , b;
    scanf("%d%d",&k , &b);
    for (int i = 1; i <= 100; i++) {
        printf("%d ",line(i,k,b));
    }
    printf("\n");
    return 0;
}
