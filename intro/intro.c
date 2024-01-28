#include <stdio.h>
#include <string.h>

/*sturcture are user define data types that can be used to store different types of data,
in other languages struture are known as classes but structures has no method calling*/

struct info{
    char name[100]; // declearing the structure and the variable within it. 
    int age;
    char address[100];  
}; //end the structure with semi colon 

int main(){
    struct info n1; 
    strcpy(n1.name, "Ridwan"); // if we use n1.name the it will give error
    n1.age = 22;
    strcpy(n1.address,"Dhaka, Bangladesh"); //accessing the struct variable using (.) operator and intializing the values.  

    printf("My name is %s and I am %d. I live in %s.",n1.name,n1.age,n1.address);
}