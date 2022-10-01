#include<stdio.h>

// The “File” is a structure that needs to be created for opening the file. A file pointer is a pointer to this structure of the file.

// File pointer is needed for communication between the file and the program.

// A file pointer can be created as follows:

// FILE *ptr;
// ptr=fopen(“filename.ext”,”mode”);

int main(){

    FILE *ptr ;
    ptr = fopen("sample.txt","r"); // --> For reading the file 
    // ptr = fopen("sample.txt","w"); // --> For Writing to a file (previous data clear)
    // ptr = fopen("sample.txt","a"); // --> For appending to a file (Previous data remain)
    // ptr = fopen("sample.txt","a+"); // --> For reading and appending at same time to a file (Previous data remain same) 

    return 0;
}