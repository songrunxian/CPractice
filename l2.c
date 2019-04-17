/*************************************************************************
	> File Name: l2.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Wed 17 Apr 2019 03:50:25 AM PDT
 ************************************************************************/

#include <stdio.h> 
int main(){
    /*
    char a[100];
    char b[100];
    scanf("%s",&a);
    printf("%d\n" , sprintf(b,"%s",a));
    */
    char a[100];
    FILE *fin = fopen("xieru","w");
    scanf("%s",&a);
    printf("%d\n", fprintf(fin,"%s",a));
    return 0;
}
