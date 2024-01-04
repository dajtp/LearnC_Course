#include <stdio.h>

int main() {
    FILE* sourceFile, * destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    // Get source file path from user
    printf("Enter the source file path: ");
    scanf("%s", sourcePath);

    // Open the source file in binary read mode
    sourceFile = fopen(sourcePath, "rb");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Get destination file path from user
    printf("Enter the destination file path: ");
    scanf("%s", destinationPath);

    // Open the destination file in binary write mode
    destinationFile = fopen(destinationPath, "wb");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 2;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully!\n");

    return 0;
}
