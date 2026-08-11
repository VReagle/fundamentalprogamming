#include <stdio.h>

int main() {
    char titles[50][50];
    char authors[50][50];
    int bookID[50];
    int qty[50];

    char (*t)[50] = titles;
    char (*a)[50] = authors;
    int *id = bookID;
    int *q = qty;

    int count = 0;
    int choice;

    while (1) {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= 50) {
                printf("Library is full! Cannot add more books.\n");
            } else {
                printf("Enter Book ID: ");
                scanf("%d", (id + count));

                printf("Enter Book Title: ");
                scanf(" %[^\n]", *(t + count));

                printf("Enter Author Name: ");
                scanf(" %[^\n]", *(a + count));

                printf("Enter Quantity: ");
                scanf("%d", (q + count));

                count++;
                printf("Book added successfully!\n");
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No books in the library.\n");
            } else {
                int i = 0;
                printf("\n--- Book List ---\n");
                printf("%-6s %-20s %-20s %-6s\n", "ID", "Title", "Author", "Qty");
                while (i < count) {
                    printf("%-6d %-20s %-20s %-6d\n",
                           *(id + i), *(t + i), *(a + i), *(q + i));
                    i++;
                }
            }
        }

        else if (choice == 3) {
            if (count == 0) {
                printf("No books in the library.\n");
            } else {
                int searchID, i = 0, found = 0;
                printf("Enter Book ID to search: ");
                scanf("%d", &searchID);

                while (i < count) {
                    if (*(id + i) == searchID) {
                        printf("\n--- Book Found ---\n");
                        printf("ID: %d\n", *(id + i));
                        printf("Title: %s\n", *(t + i));
                        printf("Author: %s\n", *(a + i));
                        printf("Quantity: %d\n", *(q + i));
                        found = 1;
                        break;
                    }
                    i++;
                }

                if (!found) {
                    printf("Book with ID %d not found.\n", searchID);
                }
            }
        }

        else if (choice == 4) {
            if (count == 0) {
                printf("No books in the library.\n");
            } else {
                int delID, i = 0, found = -1;
                printf("Enter Book ID to delete: ");
                scanf("%d", &delID);

                while (i < count) {
                    if (*(id + i) == delID) {
                        found = i;
                        break;
                    }
                    i++;
                }

                if (found == -1) {
                    printf("Book with ID %d not found.\n", delID);
                } else {
                    int j = found;
                    while (j < count - 1) {
                        *(id + j) = *(id + j + 1);

                        int k = 0;
                        while (*(*(t + j + 1) + k) != '\0') {
                            *(*(t + j) + k) = *(*(t + j + 1) + k);
                            k++;
                        }
                        *(*(t + j) + k) = '\0';

                        k = 0;
                        while (*(*(a + j + 1) + k) != '\0') {
                            *(*(a + j) + k) = *(*(a + j + 1) + k);
                            k++;
                        }
                        *(*(a + j) + k) = '\0';

                        *(q + j) = *(q + j + 1);
                        j++;
                    }
                    count--;
                    printf("Book deleted successfully!\n");
                }
            }
        }

        else if (choice == 5) {
            printf("Exiting Library Management System. Goodbye!\n");
            break;
        }

        else {
            printf("Invalid choice, try again.\n");
        }
    }

    return 0;
}