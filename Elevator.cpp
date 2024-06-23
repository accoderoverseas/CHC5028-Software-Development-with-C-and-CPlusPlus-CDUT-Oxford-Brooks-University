//
// Created by leonliang.
//
#include <iostream>
#include "Passenger.h"
#include "ListOfPassenger.h"
#include "Node.h"
using namespace std;
/**
 * display all information of the passengers that contained in the list
 * including the request order, the passenger name, start floor, destination floor
 * and the direction that the passenger requested
 * @param l is the list of passengers
 */
void displayRequest(ListOfPassenger l){

}
/**
 * function applies the FCFS(Fisrt Come First Serve) principle
 * to move each passenger from start floor to destination floor
 * @param l is the list of the passengers
 *
 */
void FCFS(ListOfPassenger l){

}

int main(){
    Passenger *a= new Passenger("A", 4, 7);
    Passenger *b= new Passenger("B",8,11);


    ListOfPassenger lop(new Node(a));

    lop.addNode(new Node(b));

    displayRequest(lop);
    FCFS(lop);
}