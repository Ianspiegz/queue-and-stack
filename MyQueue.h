#include <iostream>
#include <stack>
using namespace std;

template <class T>
class MyQueue {
    // these two stck are instance variables
    // by default, the access is private
    stack<T> first;
    stack<T> second;
    
    public:

    // return the value of the oldest member
    T front(){
        if(second.empty()){
            return first.top();
        }
        else{
            while(!second.empty()){
                first.push(second.top());
                second.pop();}
            return first.top();
        }
       }

    // add value val to MyQueue
    void push(T val){
        first.push(val);
        while(!first.empty()){
            second.push(first.top());
            first.pop();}
    }


    // remove the oldest member from MyQueue
    void pop(){
        if(first.empty()){
            cout << "empty" << endl;
        }
            if(!first.empty()){
                first.pop();}
        
            
        
        
    
    }
};



