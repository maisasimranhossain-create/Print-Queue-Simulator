
#include <stdio.h>
#include <string.h>

#define MAX 5

// Queue structure
char queue[MAX][100];

int front = -1;
int rear = -1;

// Add a print job
void enqueue()
{
    char document[100];

    if (rear == MAX - 1)
    {
        printf("\nPrint Queue is FULL!\n");
        return;
    }

    printf("Enter document name: ");
    scanf(" %99[^\n]", document);

    if (front == -1)
    {
        front = 0;
    }

    rear++;

    strcpy(queue[rear], document);

    printf("\n'%s' added to print queue.\n", document);
}

// Process the next print job
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\nPrint Queue is EMPTY!\n");
        return;
    }

    printf("\nPrinting document: %s\n", queue[front]);

    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

// Display pending print jobs
void display()
{
    int i;

    if (front == -1)
    {
        printf("\nNo pending print jobs.\n");
        return;
    }

    printf("\n----- PENDING PRINT JOBS -----\n");

    for (i = front; i <= rear; i++)
    {
        printf("%d. %s\n", i - front + 1, queue[i]);
    }
}

// Check the next print job
void peek()
{
    if (front == -1)
    {
        printf("\nPrint Queue is EMPTY!\n");
    }
    else
    {
        printf("\nNext document: %s\n", queue[front]);
    }
}

// Main function
int main()
{
    int choice;

    printf("================================\n");
    printf("       PRINT QUEUE SIMULATOR    \n");
    printf("================================\n");

    do
    {
        printf("\n1. Add Print Job (Enqueue)");
        printf("\n2. Process Print Job (Dequeue)");
        printf("\n3. Display Pending Jobs");
        printf("\n4. View Next Print Job (Peek)");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("\nExiting Print Queue Simulator.\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
