#include <bits/stdc++.h>
class Queue
{
public:
    int *arr;
    int Qfront, rear, size;

    Queue()
    {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];

        Qfront = 0, rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (Qfront == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function

        if (rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear++] = data;
        }
    }

    int dequeue()
    {
        // Implement the dequeue() function

        if (Qfront == rear)
            return -1;
        else
        {
            int ans = arr[Qfront];

            arr[Qfront++] = -1;
            if (Qfront == rear)
            {
                Qfront = 0;
                rear = 0;
            }

            return ans;
        }
    }

    int front()
    {
        // Implement the Qfront() function
        if (Qfront == rear)
            return -1;
        else
            return arr[Qfront];
    }
};