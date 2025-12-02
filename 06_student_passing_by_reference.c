#include<stdio.h>
struct student
{
    int id ;
    char name[20];
};
void display(struct student *s)
{
    printf("id: %d\n", s->id);
    printf("Name: %s\n", s->name);
}
int main()
{
    struct student s1={101, "Anu"};
    struct student s2={102, "Amit"};
    display(&s1); //passing by reference
    display(&s2); //passing by reference
    return 0;
}