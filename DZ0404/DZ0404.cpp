#include <iostream>
using namespace std;

//1
/*template <typename T>
struct Node 
{
    T data;  
    Node* next;

    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class Stack 
{
private:
    Node<T>* topNode; 
    size_t stackSize;
public:
    Stack() : topNode(nullptr), stackSize(0) {}

    ~Stack() 
    {
        while (!isEmpty()) 
        {
            pop();
        }
    }

    void push(T value) 
    {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = topNode;
        topNode = newNode;
        ++stackSize;
    }

    void pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node<T>* temp = topNode;
        topNode = topNode->next;
        delete temp;
        --stackSize;
    }

    T top() const 
    {
        if (isEmpty())
        {
            throw runtime_error("Stack is empty");
        }
        return topNode->data;
    }

    bool isEmpty() const 
    {
        return topNode == nullptr;
    }

    size_t size() const 
    {
        return stackSize;
    }

    void print() const
    {
        Node<T>* current = topNode;
        while (current) 
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() 
{
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Stack elements: " << endl;
    intStack.print();
    
    cout << "Top element: " << intStack.top() << endl;

    intStack.pop();
    cout << "After popping one element: " << endl;
    intStack.print();
}*/

//2
/*template <typename T>
struct Node 
{
    T data;    
    Node* next; 

    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class Queue 
{
private:
    Node<T>* frontNode; 
    Node<T>* rearNode;  
    size_t queueSize;   
public:
    Queue() : frontNode(nullptr), rearNode(nullptr), queueSize(0) {}

    ~Queue() 
    {
        while (!isEmpty()) 
        {
            dequeue();
        }
    }

    void enqueue(T value) 
    {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) 
        {
            frontNode = rearNode = newNode;
        }
        else 
        {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        ++queueSize;
    }

    void dequeue() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node<T>* temp = frontNode;
        frontNode = frontNode->next;
        if (!frontNode) 
        {
            rearNode = nullptr;
        }
        delete temp;
        --queueSize;
    }

    T front() const 
    {
        if (isEmpty()) 
        {
            throw runtime_error("Queue is empty");
        }
        return frontNode->data;
    }

    bool isEmpty() const 
    {
        return frontNode == nullptr;
    }

    size_t size() const 
    {
        return queueSize;
    }

    void print() const 
    {
        Node<T>* current = frontNode;
        while (current) 
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() 
{
    Queue<int> intQueue;

    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    cout << "Queue elements: " << endl;
    intQueue.print();

    cout << "Front element: " << intQueue.front() << endl;

    intQueue.dequeue();
    cout << "After dequeuing one element: " << endl;
    intQueue.print();
}*/