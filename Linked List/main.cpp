#include <iostream>
#include "Lists.h"
#include <cstdlib>
using namespace std;

int main()
{

    cout << "----- Linked List Nodes -----" << endl;
    Lists hassan;
    hassan.addNode(1);
    hassan.addNode(2);
    hassan.addNode(3);
    hassan.addNode(4);
    hassan.addNode(5);

    hassan.delNode(4);

    hassan.printNodes();


    return 0;
}
