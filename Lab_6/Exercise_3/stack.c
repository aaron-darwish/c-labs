#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct
{
    int nodeData;
    Stack *nextPtr;
} Stack;

Stack *lastNode = NULL;

int isEmpty()
{
    if (lastNode == NULL) // If we have reached the end of the stack. Then lastNode would be null, thus, the stack is indeed empty and should return true.
        return TRUE;
    else
        return FALSE;
}

void printStack()
{
    int currentPosition = 1;
    Stack *currentNode;
    currentNode = lastNode;
    if (currentNode == NULL)
        return;
    else
        while (currentNode != NULL)
        {
            printf("\nStack(%d) data: %d,\n", currentPosition++, currentNode->nodeData);
            currentNode = currentNode->nextPtr;
        }
    printf("\vFinally, the last node is NULL, and it is the node number: %d.\n", currentPosition);
}

// Creates a new node, and places it on top fo the stack.
void push(int data)
{
    // Allocate the new node in the heap using malloc() and set its data
    Stack *newNode = (Stack *)malloc(sizeof(Stack));
    newNode->nodeData = data;

    // Set the nextPtr pointer of the new node to point to null
    newNode->nextPtr = lastNode; // Previous node's address stored in the new node.
    lastNode = newNode;          // The last node is now the new node.
    printStack(lastNode);
}

// Removes a node from the top of the stack and frees the memory that was allocated.
int pop()
{
    int lastNodeData;
    if (isEmpty(lastNode))
    {
        return 0;
    }
    else
    {
        Stack *temporaryNode = lastNode;
        lastNodeData = lastNode->nodeData;
        lastNode = lastNode->nextPtr;
        temporaryNode->nextPtr = NULL;
        free(temporaryNode);
        printStack(lastNode);
        return lastNodeData;
    }
}

int main()
{
    int optionChoice, userInputData;
    for (;;)
    {
        printf("\v\nWould you like to add or remove a node? Press 1 for the former, and 2 for the latter option. Or, you could exit the program with option 3.\v\n");
    TRY_AGAIN:
        scanf("%d", &optionChoice);

        switch (optionChoice)
        {
        case 1:
            printf("What value would you like to add to the new node?\n");
            scanf("%d", &userInputData);
            push(userInputData);
            break;
        case 2:
            if (lastNode != NULL)
                printf("\nThe last node has been popped. It held the folllowing data: %d\n", pop(lastNode));
            else
                printf("\nYou are at the last unit in the stack. The NULL stack. Hence, the stack is empty.");
            break;
        case 3:
            printf("\nGoodbye!\n");
            exit(0);
            break;
        default:
            printf("\nYou have entered an invalid option. Please try again. Choose 1 for adding a new node, and 2 for removing the node.\n");
            goto TRY_AGAIN;
            break;
        }
    }
    return 0;
}