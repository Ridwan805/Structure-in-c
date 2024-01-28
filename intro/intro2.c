#include <stdio.h>
#include <string.h>

struct grades{
   char name[100];
   float gpa;
   char letter_grade;
};

int main(){
    struct grades s1 = {"Ridwan", 3.33, 'C'}; // initializing using the list

    printf("%s got a cgpa of %.2f which in letter grade is %c", s1.name,s1.gpa,s1.letter_grade);
}