// usestack.cpp - for CS 24 lab practice using stacks
// Scott Matsubara
// 11-10-2018

#include "intstack.h"
#include <iostream>
using namespace std;
//Evaluating "10 20 5 / *"
int main() {
  
    Stack s;

    s.push(10);
    s.push(20);
    s.push(5);

    int right=s.top();
    s.pop();
    int left=s.top();
    s.pop();
    s.push(left/right);

    right=s.top();
    s.pop();
    left=s.top();
    s.pop();
    s.push(left*right);

    cout << s.top() << endl;
}
