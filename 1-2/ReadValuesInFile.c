#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    float f1, f2;
    double d1, d2;

    
    fscanf(file, "%f %f %lf %lf", &f1, &f2, &d1, &d2);
    fclose(file);

    printf("Read values:\n");
    printf("Float 1: %f, Float 2: %f\n", f1, f2);
    printf("Double 1: %lf, Double 2: %lf\n", d1, d2);

    return 0;
}
