#include<stdio.h>
struct student
{
    int id ;
    char name[20];
};
int main()
{
    struct student s[2]={101, "Anu"};
    struct student *ptr = &s;
    printf("id: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    return 0;
}