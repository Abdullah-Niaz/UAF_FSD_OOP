#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 20 ; /// variable lia 
    int *pointer; // pointer declare 
    pointer = &a; // pointer of init kar dea so that k wo a ka address store kar ly 

    cout<<"Before changing a: "<<a <<endl;
    cout<<"Address of a: "<<&a <<endl;


    cout<<"address of pointer (&a): "<<pointer <<endl;
    cout<<"Dereference to get Value : "<<*pointer <<endl;

    *pointer = 100;

    cout<<"After changing a: "<<a <<endl;

    
    return 0;
}