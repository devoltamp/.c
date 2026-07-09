/* i'll do this later
nn = nn */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

/* it makes me kinda sad */
typedef struct deque {
    node *front;
    node *rear;
    int size;
} deque;

deque *create() {
    /* giving it another name too */
    deque *dq = (deque *)malloc(sizeof(deque));
    dq->front = NULL;
    dq->rear = NULL;
    dq->size = 0;
    return dq;
}

// deque is empty ?
bool isempty(deque *dq) {
    return dq->size == 0;
}

// current size of deque
int getsize(deque* dq) {
    return dq->size;
}

// Insert an element at the front
void insertfront(deque *dq, int data) {
    node *nn = (node *)malloc(sizeof(node));
    nn->data = data;
    nn->prev = NULL;
    nn->next = dq->front;

    if (isempty(dq)) {
        dq->rear = nn;
    } else {
        dq->front->prev = nn;
    }
    dq->front = nn;
    dq->size++;
    printf("inserted %d at the front.\n", data);
}

// Insert an element at the rear
void insertrear(deque *dq, int data) {
    node *nn = (node *)malloc(sizeof(node));
    nn->data = data;
    nn->next = NULL;
    nn->prev = dq->rear;

    if (isempty(dq)) {
        dq->front = nn;
    } else {
        dq->rear->next = nn;
    }
    dq->rear = nn;
    dq->size++;
    printf("inserted %d at the rear.\n", data);
}


int deletefront(deque *dq) {
    if (isempty(dq)) {
        printf("deque is empty\n");
        return -1;
    }

    node *temp = dq->front;
    int data = temp->data;

    dq->front = dq->front->next;

    if (dq->front == NULL) {
        dq->rear = NULL; // deque is now empty
    } else {
        dq->front->prev = NULL;
    }

    free(temp);
    dq->size--;
    return data;
}

int deleterear(deque *dq) {
    if (isempty(dq)) {
        printf("deque is empty\n");
        return -1;
    }

    node *temp = dq->rear;
    int data = temp->data;

    dq->rear = dq->rear->prev;

    if (dq->rear == NULL) {
        dq->front = NULL; // deque is now empty
    } else {
        dq->rear->next = NULL;
    }

    free(temp);
    dq->size--;
    return data;
}

// peek at the front element
int getfront(deque *dq) {
    if (isempty(dq)) return -1;
    return dq->front->data;
}

// peek at the rear element
int getrear(deque *dq) {
    if (isempty(dq)) return -1;
    return dq->rear->data;
}

// apn
void display(deque *dq) {
    if (isempty(dq)) {
        printf("deque is empty.\n");
        return;
    }
    node *current = dq->front;
    printf("deque (Front -> Rear): ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;    /* making it the next */
    }
    printf("\n");
}

void freedeque(deque *dq) {
    node *current = dq->front;
    while (current != NULL) {
        node *nextnode = current->next;
        free(current);
        current = nextnode;
    }
    free(dq);
}

int main() {
    deque *dq = create();

    puts("insertion ....");
    insertrear(dq, 10);
    insertrear(dq, 20);
    insertfront(dq, 5);
    insertfront(dq, 1);
    display(dq);

    puts("peeking ....");
    printf("front element: %d\n", getfront(dq));
    printf("rear element: %d\n", getrear(dq));
    printf("size: %d\n", getsize(dq));

    puts("front del. ");
    deletefront(dq);
    display(dq);
    puts("rear del. ");
    deleterear(dq);
    display(dq);

    puts("cleaning up everthing via free!");
    freedeque(dq);
    puts("momory freed successfully");

    return 0;
}
