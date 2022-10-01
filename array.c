#include<stdio.h>

int main(){
    int a[10]={1,2,3,4} ;

    int *p;
    p = a;
    printf("%d",a[1]);
    printf("%d",a[2]);
    printf("%d",a[3]);
     printf("%d",a[4]);

    printf("\n*p : %d",*p);
    // printf("%d",a[4]);


    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("\n%d",*(p+i));
    }
    
    return 0;
}