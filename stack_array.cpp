#include <iostream>
#include <chrono>
#include <random>
using namespace std;
using namespace std::chrono;

int top = -1;
const int size =100;
int stack[size];

// isEmpty()- To check whether a stack is empty or not.
bool isEmpty(int stack[]){
    if (top <= -1){          
        return true ;
    }
    else{
        return false;
    } 
}

//isFull()- To check whether a stack is full or not.
bool isFull(int stack[]){
    if (top >= size - 1){          
        return true ;
    }
    else{
        return false;
    } 
}

//Push()- To insert data into the stack.
void push(int val){
    if (isFull(stack)){
        cout << "Stack overflow!!" <<endl;
    }
    else{
        top += 1;
        stack[top] = val;
    }
}

//Pop()- To remove/delete data from the stack.
void pop(){
    if (isEmpty(stack)){
        cout << "Stack underflowed!!" << endl;
    }
    else{
        cout << "The popped element is "<< stack[top];
        top--;
    }
}

//Display()- To print elements in the stack.
void display(){
    if (isEmpty(stack)){
        cout << "Null!!" << endl;
    }
    else{
        for (int i=0; i<=top;i++){
            cout << stack[i] << " ";
        }
    }
}

int main(){
    auto start = high_resolution_clock::now();
        push(8);
        push(10);
        push(5);
        push(11);
        push(15);
        push(23);
        push(6);
        push(18);
        push(20);
        push(17);
        display();
        pop(); pop(); pop(); pop();pop();
        display();
        push(4);
        push(30);
        push(3);
        push(1);
        display();
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "" << endl;
    cout << "The time taken is: " << duration.count();
    return 0;
}
