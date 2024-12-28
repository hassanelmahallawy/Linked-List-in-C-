#ifndef LISTS_H
#define LISTS_H


class Lists
{
    private:
        typedef struct node{
            int data;
            node* next;
        }* nodePtr;


        nodePtr head;
        nodePtr curr;
        nodePtr temp;


    public: //functions
        Lists();
        void addNode(int addData);
        void delNode(int delData);
        void printNodes();

};

#endif // LISTS_H
