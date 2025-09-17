#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    float f1 = 3.14f, f2 = 2.71f;    
    double d1 = 1.618, d2 = 2.718;   

    
    fprintf(file, "%f %f %lf %lf\n", f1, f2, d1, d2);
    fclose(file);

    printf("Data written successfully in text mode.\n");
    return 0;
}
