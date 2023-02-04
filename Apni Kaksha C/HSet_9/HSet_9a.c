#include <stdio.h> 
#include <string.h> 

struct people
{ 
    char students[1000]; 
    char teachers[1000]; 
    char staff[1000]; 
};

struct student
{ 
    char name[1000]; 
    int attendance; 
    float cgpa; 
};

int main (void)
{ 
    struct student s1; 
    strcpy (s1.name, "Sivaa"); 
    s1.attendance = 98; 
    s1.cgpa = 8.0; 

    printf ("Student Name: %s\n", s1.name); 
    printf ("Student Attendance: %d\n", s1.attendance); 
    printf ("Student CGPA: %f\n", s1.cgpa); 
}