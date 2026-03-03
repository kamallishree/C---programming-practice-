#include<stdio.h>

float area(float r){
    return 3.14*r*r;
}

int main(){
    float r;

    printf("Enter radius: ");
    scanf("%f",&r);

    printf("Area = %.2f", area(r));
}
