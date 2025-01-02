#include <stdio.h>
#include <stdlib.h>

void displayValues(int count, int total, double average) {
    printf("Count: %d\n", count);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
}

int main(int argc, char *argv[]) {
    FILE *file;
    char *filename;
    int num, count = 0, total = 0;
    double average;

    if (argc != 3 || strcmp(argv[1], "-i") != 0) {
        fprintf(stderr, "Usage: %s -i input-file-name\n", argv[0]);
        return 1;
    }

    filename = argv[2];

    file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        if (num < 0) {
            fprintf(stderr, "Negative integer found in the file.\n");
            fclose(file);
            return 1;
        }
        total += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        fprintf(stderr, "No positive integers found in the file.\n");
        return 1;
    }

    average = (double)total / count;

    displayValues(count, total, average);

    return 0;
}
