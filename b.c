/*************************************************************************
	> File Name: b.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Sat 20 Apr 2019 12:43:24 AM PDT
 ************************************************************************/

#include <stdio.h> 

int main() {
    int n;
    while(scanf("%d",&n)   != EOF){
        switch(n){
            case 1:
               // int a;
                printf("one ");
                //break;
            case 2:
                printf("two ");
                //break;
            case 3:
                printf("three\n");
                break;
            default :
                printf("error\n");
        }
    }

    return 0;
    
}
