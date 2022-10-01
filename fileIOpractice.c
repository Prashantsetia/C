#include <stdio.h>

typedef struct emp{
    char name[20];
    int salary;
}emp;  

int main()
{

    // 1. Write a program to read three integers from a file.
    FILE *p;

    // creating and writng integers in file , then i will read all integers inside file
    p = fopen("integers.txt", "w");
    int a = 12, b = 11, c = 90;
    fprintf(p, "%d %d %d", a, b, c);

    fclose(p); // After closing this file , then we can open it in read mode , so fclose() is important

    // reading
    FILE *pt;
    pt = fopen("integers.txt", "r");
    int i, j, k;
    fscanf(pt, "%d", &i);
    fscanf(pt, "%d", &j);
    fscanf(pt, "%d", &k);

    printf("\nThe 3 integers present in file are : %d , %d , %d", i, j, k);
    fclose(pt);
    // Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.

    FILE *ptr;

    ptr = fopen("table.txt", "w"); // we can use append mode here "a"
    int n;
    printf("\nEnter the No. you need the table of : ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "\n%d X %d : %d", n, i + 1, n * (i + 1));
    }

    fclose(ptr);

    // Write a program to read a text file character by character and write its content twice in a separate file.
    pt = fopen("getcDemo.txt", "r");
    ptr = fopen("twice.txt", "w");

    char ch;
    ch = fgetc(pt); // reading charachter by character

    while (ch != EOF)
    {
        fputc(ch, ptr); // Writing character by character
        ch = fgetc(pt); // reading charachter by character
    }

    fputc('\n', ptr);

    // dobara write krne k liye hume , files ko close kr , twice waali file ko append mode me kholna hoga or deDemo.txt wali file end me pohch chuki hai isliye usko b clode kr k dobara kholna hoga
    fclose(ptr);
    fclose(pt);
    pt = fopen("getcDemo.txt", "r");
    ptr = fopen("twice.txt","a"); //
    ch = fgetc(pt);
    while (ch != EOF)
    {
        fputc(ch, ptr); // Writing character by character
        ch = fgetc(pt); // reading charachter by character
    }

    fclose(pt);
    fclose(ptr);


// Take name and salary of two employees as input from the user and write them to a text file in the following format:
//         name1, 3300

//         name2, 7700

// hum typedef or structures ka use kr k emp data type bna lenge , or array of structure create kr lenge e[2] for two employees
// strucure k member k pass name or salary hoga , vo user se input kr k or . operator ka use kr k save kr lenge 
// firr for loop lga k fprintf() ki help se twice.txt file me write krva denge , jiko humne append mode me khola hai  
    emp e[2];
    for(int i =0; i<2;i++){
    printf("Enter name%d and salary%d : ",i,i);
    scanf("%s %d",e[i].name,&e[i].salary);
    }

    pt = fopen("twice.txt","a");
    putc('\n',pt);
    for(int i=0;i<2;i++){
        fprintf(pt,"%s",e[i].name);
        fprintf(pt," , %d",e[i].salary);
        putc('\n',pt);
    }

    fclose(pt);

    // Write a program to modify a file containing an integer to double its value.
    //    If old value = 2, then new file value = 4

    int n1 , n2 , n3 ;
    // a+ is the mode for reading and appending the values in file , so no need to first read then close and then open it in append mode
    pt = fopen("integers.txt","a+");   
    fscanf(pt,"%d",&n1);
    fscanf(pt,"%d",&n2);
    fscanf(pt,"%d",&n3);


    fputc('\n',pt);
    fprintf(pt,"%d ",(n1*2));
    fprintf(pt,"%d ",(n2*2));
    fprintf(pt,"%d ",(n3*2));
 
    return 0;
}