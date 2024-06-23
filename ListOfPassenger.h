//
// Created by leonliang .
//


#include "Node.h"

class ListOfPassenger {
private:
      Node *head;
public:
    /**
     * initialize an empty list
     */
    ListOfPassenger();
    /**
 *
 * @param h is initialized as the head of the list.
 */
    ListOfPassenger(Node *h);

    void addNode(Node *addnode);

    bool isEmpty();

    Node *getHead();
};
/**
 *
 * @param addnode is the node added at the end of the list
 */
void addNode(Node *addnode);
/**
 *
 * @return true if the list is an empty one otherwise false;
 */
bool isEmpty();
/**
 *
 * @return the head node of the list
 */
Node * getHead();



