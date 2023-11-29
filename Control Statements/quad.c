#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

   
    printf("Enter the value of coefficient a: ");
    scanf("%f", &a);
    printf("Enter the value of coefficient b: ");
    scanf("%f", &b);
    printf("Enter the value of coefficient c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

   
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %f\n", root1);
    } else {
        printf("The equation has complex roots.\n");
    }

    return 0;
}