// Goal is design the  food delivery company maintains a system where orders are prioritized based on delivery time(in minutes), and the order with the minimum delivery time is processed first. the system uses a min heap to manage incoming orders dynamically 
#include <iostream>
#include <vector>
#include <stdexcept>

class Order {
public:
    int deliveryTime;
    std::string customerName;

    Order(int time, const std::string& name) : deliveryTime(time), customerName(name) {}
};

class FoodDeliverySystem {
private:
    std::vector<Order> minHeap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (minHeap[index].deliveryTime < minHeap[parentIndex].deliveryTime) {
                std::swap(minHeap[index], minHeap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }
    void heapifyDown(int index) {
        int size = minHeap.size();
        while (true) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int smallest = index;
            if (leftChild < size && minHeap[leftChild].deliveryTime < minHeap[smallest].deliveryTime) {
                smallest = leftChild;
            }
            if (rightChild < size && minHeap[rightChild].deliveryTime < minHeap[smallest].deliveryTime) {
                smallest = rightChild;
            }
            if (smallest != index) {
                std::swap(minHeap[index], minHeap[smallest]);
                index = smallest;
            } else {                break;
            }
        }
    }
public:
    void addOrder(int deliveryTime, const std::string& customerName) {
        minHeap.emplace_back(deliveryTime, customerName);
        heapifyUp(minHeap.size() - 1);
    }
    Order processOrder() {
        if (minHeap.empty()) {
            throw std::runtime_error("No orders to process");     } 
        Order topOrder = minHeap[0];
        minHeap[0] = minHeap.back();
        minHeap.pop_back();
        heapifyDown(0);
        return topOrder;
    }
};