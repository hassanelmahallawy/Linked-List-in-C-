#include "Lists.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Lists::Lists()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
    //ctor
}

void Lists:: addNode(int addData){

    nodePtr n = new node;
    n -> next = NULL;
    n -> data = addData;

    if(head !=  NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
};




void Lists:: delNode(int delData){

    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    while(curr != NULL && curr->data != delData){

        temp = curr;
        curr = curr->next;
        }

    if(curr == NULL){
        cout << delData << " is not found, try again!" <<endl;
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp -> next = curr;

        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The value "<< delData <<" has been successfully deleted!"<<endl;
        }
};

void Lists:: printNodes(){
    curr = head;
    while(curr!=NULL){
        cout << curr->data <<endl;
        curr = curr->next;
    }

}



