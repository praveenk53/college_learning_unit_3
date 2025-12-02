#include<stdio.h>
struct date
{
    int day;
    int mon;
    int yr;
};
struct student{
    int id;
    char name[20];
    struct date dob;
};
int main(){
    struct student s1 = {101, "Kiran", {15, 8, 2000}};
    printf("Student ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %02d-%02d-%d\n", s1.dob.day, s1.dob.mon, s1.dob.yr);
    return 0;
}