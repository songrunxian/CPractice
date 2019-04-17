/*************************************************************************
	> File Name: l13.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Wed 17 Apr 2019 03:18:52 AM PDT
 ************************************************************************/

#include <stdio.h> 
int main(){
    int n;
    FILE *fin = fopen("xieru","w");
    scanf("%d",&n);
    printf("%d\n",fprintf(fin,"%d",n));
    return 0;
}
