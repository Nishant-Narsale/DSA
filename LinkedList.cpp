#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long;

/*

INPUT
5
3
4
2
7
6

OUTPUT
9 3 4 2 7 5 6 
*/

class Node{
    public:
        int data;
        Node* next;
};

Node* insertBeforeHead(Node* head, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

void insertAfter(int prevNodeValue, Node* head, int value){
    Node* current = head;
    
    while (current!=NULL && current->data!=prevNodeValue)
    {
        current=current->next;
    }
    
    Node* nextNode = new Node();
    nextNode->data=value;
    nextNode->next=current->next;
    current->next=nextNode;
}

void printList(Node* head){
    Node* current = head;

    while(current!=NULL){
        cout<<current->data<<" ";
        current = current->next;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    
    Node* head = new Node();
    cin>>head->data;
    n--;

    Node* prevNode = head;

    while(n--){
        Node* newNode = new Node();
        cin>>newNode->data;
        prevNode->next=newNode;
        prevNode = newNode;
    }

    prevNode->next=NULL;

    head = insertBeforeHead(head, 9);
    insertAfter(7,head,5);
    printList(head);

    return 0;
}