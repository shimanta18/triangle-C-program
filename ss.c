#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, s, area;

    
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        s = (a + b + c) / 2;

        
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area of the triangle = %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
