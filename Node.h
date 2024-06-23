//
// Created by leonliang.
//


#include "Passenger.h"

class Node {
private:
    Passenger *passenger;
    Node *next;
public:
    /**
     *
     * @param p is initialized to the property passenger
     */
    Node(Passenger *p);
    /**
     *
     * @return false if there is no more node behind otherwise true
     */
    bool hasNext();
    /**
     *
     * @return the next node of the current node
     */
    Node * getNext();
    /**
     *
     * @param n is set as the next node of the current node
     */
    void setNext(Node *n);
    /**
     *
     * @return the passenger of the current node
     */
    Passenger * getPassenger();
};



