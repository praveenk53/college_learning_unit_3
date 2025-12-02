#include<stdio.h>
struct student
{
    int id ;
    char name[20];
};
void display(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    printf("id: %d, Name: %s\n", s[i].id, s[i].name);
}
int main()
{
    struct student s[3]={{101, "Anu"}, {102, "vasu"}, {103, "Amit"}};
    display(s,3); //passing array of structures
    return 0;
}