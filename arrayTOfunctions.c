#include<stdio.h>
// void printarray(int *p , int n){

//     for(int i=0; i<n;i++){
//          printf("\n%d element is : %d",i+1,*p);
//            p++;
//        }
//  }


// OR 

// void printarray(int p[] , int n){

//     for(int i=0; i<n;i++){
//          printf("\n%d element is : %d",i+1,*p);              
//            p++;
//        }
//  }


// OR

// void printarray(int p[] , int n){

//     for(int i=0; i<n;i++){
//          printf("\n%d element is : %d",i+1,*(p+i));
//        }
//  }

// OR


void printarray(int p[] , int n){

    for(int i=0; i<n;i++){
         printf("\n%d element is : %d",i+1,p[i]);
       }
 }

 
int main(){

    int array[]={3,4,2,1,3,4,5};

    // By these 2 ways , we can pass array to functions

    // printarray(&array[0],7);
    // OR
    printarray(array,7);    // By default , address of first element of array will pass

    return 0;
}