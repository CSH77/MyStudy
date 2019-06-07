#include <iostream>
#include <vector>
#include <random>
#include <functional>
#include <chrono>
#include <algorithm>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    struct Node
    {
        int data;
        Node* next;
        Node* previous;
        Node(int n = 0, Node* node = NULL, Node* prev = NULL) : data(n), next(node), previous(prev){}
    };
    
    Node* current;
    Node* head;
    
    Node* makeNewNode(int data)
    {
        Node* newNode =  new Node(data, NULL, NULL);
        return newNode;
    }
    
    MinStack() {
        head = makeNewNode(0);
        current = head;
    }
    
    void push(int x) {
        current->next = makeNewNode(x);
        current->next->previous = current;
        current = current->next;
    }
    
    void pop() {
        if(current == head)
            return;

        Node* delNode = current;
        current = current->previous;
        delete delNode;
        current->next = NULL;
    }
    
    int top() {
        return current->data;
    }
    
    int getMin() {
        if(current == head)
            return 0;

        Node* iter = head;
        if(iter->next == NULL)
            return iter->data;

        iter = iter->next;
        int min = iter->data;

        while(iter != NULL)
        {
            if(min > iter->data)
            {
                min = iter->data;
            }
            
            iter = iter->next;
        }
        
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main()
{
    MinStack obj;
    obj.push(-2);
    obj.push(0);
    obj.push(-3);

    cout << obj.getMin() << endl;
    obj.pop();
    cout << obj.top() << endl;
    cout << obj.getMin();

    
    return 0;
}