#include <iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1; // Dummy at index 0
        size = 0;
    }

    // Insert into max-heap
    void insert(int val) {
        size++;
        int index = size;
        arr[index] = val;

        // Heapify up
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Delete root from max-heap
    void deletefromheap() {
        if (size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }

        // Step 1: Move last element to root
        arr[1] = arr[size];

        // Step 2: Reduce heap size
        size--;

        // Step 3: Heapify down from root
        int i = 1;
        while (i <= size) {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            int largest = i;

            if (leftindex <= size && arr[leftindex] > arr[largest]) {
                largest = leftindex;
            }

            if (rightindex <= size && arr[rightindex] > arr[largest]) {
                largest = rightindex;
            }

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                break; // Already a heap
            }
        }
    }

    // Print heap
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;

    h.insert(55);
    h.insert(54);
    h.insert(58);
    h.insert(59);
    h.insert(60);

    cout << "Heap after insertions: ";
    h.print();

    h.deletefromheap();  // Deletes root (largest element)

    cout << "Heap after deletion: ";
    h.print();

    return 0;
}
