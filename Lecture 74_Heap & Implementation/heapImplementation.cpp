#include<bits/stdc++.h>
using namespace std;

class Heap{
public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteFromHeap(){
        // Deletion from heap means, delete the root node itself
        if(size == 0){
            cout << "Nothing to Delete\n";
        }

        // Step 1: replace last node to first node
        arr[1] = arr[size];
        size--;

        int i = 1;

        while(i < size){
            int leftHeap = 2 * i;
            int rightHeap = 2 * i + 1;

            if(leftHeap < size && arr[i] < arr[leftHeap]){
                swap(arr[i], arr[leftHeap]);
                i = leftHeap;
            }
            else if(rightHeap < size && arr[i] < arr[rightHeap]){
                swap(arr[i], arr[rightHeap]);
                i = rightHeap;
            }
            else {
                return;
            }
        }
    }

    void printHeap(){
        for (int i = 1; i <= size;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = i * 2;
        int right = i * 2 + 1;

        if (left <= n && arr[largest] < arr[left]){
            largest = left;
        }

        if (right <= n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n){
        int size = n;

        while(size > 1){
            // Step 1: swap root with last element
            swap(arr[size], arr[1]);
            size--;

            // Step 2: Heapify the swap element (1st element)
            heapify(arr, size, 1);
        }
    }
};

int main()
{
    Heap hp;
    // hp.insert(55);
    // hp.insert(60);
    // hp.insert(30);
    // hp.insert(20);
    // hp.insert(40);
    // hp.insert(50);
    
    // hp.printHeap();
    
    // hp.deleteFromHeap();
    // hp.printHeap();

    int arr[6] = {-1, 54, 53, 55, 52, 50};

    for (int i = 6 / 2; i > 0;i--){
        hp.heapify(arr, 6, i);
    }

    for (int i = 1; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";

    hp.heapSort(arr, 5);

    for (int i = 1; i < 6;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}