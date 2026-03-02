#include<stdio.h>

struct Student{
 int id;
 float marks;
};

int main(){

struct Student s={101,85.5};
struct Student *ptr;

ptr=&s;

printf("ID=%d\n",ptr->id);
printf("Marks=%.2f",ptr->marks);

}
