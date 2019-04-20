/*************************************************************************
	> File Name: e.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Sat 20 Apr 2019 01:59:53 AM PDT
 ************************************************************************/

#include <stdio.h> 

int main () {
   // int n;
   // scanf ("%d", &n);
   // int time = 0;
   // while (n != 0) {
   //     n /= 10;
   //     time += 1;
   // }
   // // time += 1;
   // printf("%d \n" , time);
   // return 0;
    int x;
    int time = 0;
    scanf("%d",&x);
    do{
        time ++;
        x /= 10;
    }while(x != 0);
    printf("%d\n",time);
    return 0;
}
