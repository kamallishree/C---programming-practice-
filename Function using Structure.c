#include<stdio.h>

struct Student{
 int id;
};

void display(struct Student s){
 printf("ID=%d",s.id);
}

int main(){
struct Student s={101};
display(s);
}
