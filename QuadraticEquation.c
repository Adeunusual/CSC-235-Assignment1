//Documentation, this is a Program written to solve Quadratic Equations

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Global declarations

float a, b, c, d, r1, r2, rpart, ipart;

int main(){
    printf("Enter the non-zero coefficiet of a, b, c respectively: ");

    scanf("%f %f %f", &a, &b, &c);

    d = pow(b,2) - (4 * a * c);

    if(d  > 0){
        r1 = (-b + sqrt(d) / (2 * a));
        r2 = (-b - sqrt(d) / (2 * a));

        printf("The Values of r1 and r2 are equal\n r1 = %f, and r2 = %f", r1, r2);
    }
    else{
        printf("The values of r1 and r2 are imaginary");
        rpart = -b / (2 * a);
        ipart = sqrt(fabs(d) / (2 * a));
        printf("r1 = %f+i%f", rpart, ipart);
        printf("r2 = %f+i%f", rpart, ipart);
    }

    return 0;
}
