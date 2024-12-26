#include <bits/stdc++.h>
using namespace std;

class KQueue
{

public:
    int n, k;
    int *front, *rear, *arr, *next;
    int freespot;

public:
    KQueue(int n, int k)
    {
        this->n = n;
        this->k = k;

        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];

        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }

        next[n - 1] = -1;
        arr = new int[n];

        freespot = 0;
    }

    void enqueue(int data, int qn)
    {
        // check for overflow;

        if (freespot == -1)
        {
            cout << "N0 Space available...\n";
        }

        // find first free index;
        int index = freespot;

        freespot = next[index];

        // check wheather first element;
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to previous element
            next[rear[qn - 1]] = index;
        }

        next[index] = -1;

        // update rear
        rear[qn - 1] = index;

        arr[index] = data;
    }

    int dequeue(int qn)
    {
        // Underflow

        if (front[qn - 1] == -1)
        {
            cout << "Queue is Empty\n";
            return -1;
        }

        // find index
        int index = front[qn - 1];

        front[qn - 1] = next[index];

        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
};

int main()
{
    KQueue sl(10, 3);

    sl.enqueue(10, 1);
    sl.enqueue(15, 1);
    sl.enqueue(20, 2);
    sl.enqueue(25, 1);

    cout << sl.dequeue(1) << endl;
    cout << sl.dequeue(2) << endl;
    cout << sl.dequeue(1) << endl;
    cout << sl.dequeue(1) << endl;
    cout << sl.dequeue(1) << endl;

    return 0;
}