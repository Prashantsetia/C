#include<stdio.h>

int main(){

    int array[5]={23,32,12,34,4};

    int *ptr ;

    // ptr = &array[0];
    ptr = array;


    // for(int i=0 ; i<5 ; i++){
    //     printf("\nThe element no. %d is : %d",i+1,*ptr);
    //     ptr++;
    // }

    // OR

    for(int i=0 ; i<5 ; i++){
        printf("\nThe element no. %d is : %d",i+1,*(ptr+i));
    } 


    int ar[3];

    int *p;
    // p = &ar[0];
    p = ar;
    for(int i=0;i<3;i++){
        printf("\nenter the value of element %d : ",i+1);
        scanf("%d",p);
        p++;
    }

    // Make sure that pointer again points back to first array element
    p = ar;  // This is important

    for(int i=0;i<3;i++){

        // printf("\nThe value of element %d is : %d ",i+1,ar[i]);

        // OR

        // printf("\nThe value of element %d is : %d ",i+1,*(p+i));
 
        // OR  ==> pointer in array notation
        // i[ptr] is equivalent to arr[i], i[arr] and ptr[i]
        // I have used i[ptr] syntax for knowledge. You can also use ptr[i]
        // printf("\nThe value of element %d is : %d ",i+1,i[p]);
        // printf("\nThe value of element %d is : %d ",i+1,p[i]);

        // OR
        printf("\nThe value of element %d is : %d ",i+1,*p);
        p++;
    }
    return 0;
}
