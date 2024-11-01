#include <stdio.h>
#include <stdlib.h>

void writeToFile();
void readFromFile();
void appendToFile();

int main() {
    int choice;

    while (1) {
        printf("\nSimple Text File Operations:\n");
        printf("1. Write a sentence to data.txt\n");
        printf("2. Read content from data.txt\n");
        printf("3. Append a sentence to data.txt\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    getchar();
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence written to data.txt successfully.\n");
}

void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }

    char ch;
    printf("Content of data.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    printf("\nEnd of file content.\n");
}

void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file for appending.\n");
        return;
    }

    char sentence[101];
    printf("Enter a sentence to append (up to 100 characters): ");
    getchar(); 
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence appended to data.txt successfully.\n");
}