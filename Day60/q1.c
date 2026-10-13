Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
  #include <stdio.h>
#include <stdlib.h>

// Structure for deque
typedef struct {
    int *data;   // stores indices
    int front;
    int rear;
    int size;
} Deque;

// Initialize deque
Deque* createDeque(int size) {
    Deque* dq = (Deque*)malloc(sizeof(Deque));
    dq->data = (int*)malloc(size * sizeof(int));
    dq->front = 0;
    dq->rear = -1;
    dq->size = 0;
    return dq;
}

// Check if deque is empty
int isEmpty(Deque* dq) {
    return dq->size == 0;
}

// Push element at rear
void pushRear(Deque* dq, int value) {
    dq->rear = (dq->rear + 1) % (dq->size + 1000); // avoid overflow
    dq->data[dq->rear] = value;
    dq->size++;
}

// Pop element from rear
void popRear(Deque* dq) {
    dq->rear = (dq->rear - 1 + (dq->size + 1000)) % (dq->size + 1000);
    dq->size--;
}

// Pop element from front
void popFront(Deque* dq) {
    dq->front = (dq->front + 1) % (dq->size + 1000);
    dq->size--;
}

// Get front element
int front(Deque* dq) {
    return dq->data[dq->front];
}

// Get rear element
int rear(Deque* dq) {
    return dq->data[dq->rear];
}

// Free deque memory
void freeDeque(Deque* dq) {
    free(dq->data);
    free(dq);
}

int main() {
    int n, k;

    // Input array size
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array size.\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for array element.\n");
            free(arr);
            return 1;
        }
    }

    // Input window size
    printf("Enter window size k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid input for k.\n");
        free(arr);
        return 1;
    }

    // Create deque
    Deque* dq = createDeque(n);

    // Process first k elements
    for (int i = 0; i < k; i++) {
        while (!isEmpty(dq) && arr[i] >= arr[rear(dq)]) {
            popRear(dq);
        }
        pushRear(dq, i);
    }

    // Print max for first window
    printf("%d", arr[front(dq)]);

    // Process rest of the elements
    for (int i = k; i < n; i++) {
        // Remove elements out of this window
        while (!isEmpty(dq) && front(dq) <= i - k) {
            popFront(dq);
        }

        // Remove smaller elements
        while (!isEmpty(dq) && arr[i] >= arr[rear(dq)]) {
            popRear(dq);
        }

        pushRear(dq, i);

        // Print current max
        printf(" %d", arr[front(dq)]);
    }

    printf("\n");

    // Free memory
    freeDeque(dq);
    free(arr);

    return 0;
}
