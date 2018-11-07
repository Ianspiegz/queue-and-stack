#include <iostream>
#include <queue>
using namespace std;

template <class T>
class MyStack {

  // define two instance variables
  // by default, they are private
  queue <T> first; 
  queue <T> second;

 public:

  // return the latest value of MyStack
  T top(){
      if(second.empty()){
          return first.back();
      }
      else{
          while(!second.empty()){
              first.push(second.front());
              second.pop();}
          return first.back();
      }
  }

  // add value val to MyStack
  void push(T val){
      first.push(val);
      while(!first.empty()){
          second.push(first.front());
          first.pop();}
  }

  // remove the oldest value from MyStack
  void pop(){
      if(first.empty()){
          cout << "empty" << endl;
      }
      if(!first.empty()){
        while(first.size() >= 2){
              second.push(first.front());
              first.pop();}
          first.pop();
          while(!second.empty()){
              first.push(second.front());
              second.pop();}
      }
  }
};
