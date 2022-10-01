#include<stdio.h>
#include<string.h>
struct facebook
{
    char name[20] ;
    int id ;
    float salary;
};


int main(){

    struct facebook employee[100];  // now we dont need to declare 100 members of structures , we can easly do this by declaring array of sturctures 

    strcpy(employee[1].name,"Prashant");
    employee[1].id=111;
    employee[1].salary=1212.132;

    strcpy(employee[2].name,"Bhoomi");
    employee[2].id=112;
    employee[2].salary=2122.2;

    strcpy(employee[3].name,"Yogi");
    employee[3].id=113;
    employee[3].salary=189.92;

    printf("%s",employee[1].name);
    for(int i=1;i<=3;i++){
        printf("\nThe slaray of %s having employee id = %d is %.3f \n",employee[i].name,employee[i].id,employee[i].salary);
    }


    return 0;
}