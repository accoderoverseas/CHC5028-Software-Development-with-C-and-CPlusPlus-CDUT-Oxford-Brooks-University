//
// Created by leonliang.
//


#include <string>
using namespace std;
class Passenger {
private :
    string name;//passenger's name
    int from;// start floor of the passenger's request
    int to;// destination floor of the passenger's request
public:
    /**
     * @name the name of the passenger
     * @from the floor number that the passenger start at
     * @to the floor number that the passenger want to arrive
     */
    Passenger(string name, int from, int to);
    /**
     *
     * @return the name of the passenger
     */
    string getName();
    /**
     * @return the start floor number that the passenger start at
     */
    int getFrom();

    /**
     * @return the floor number that passenger want to arrive
     */
    int getTo();
    /**
     *
     * @return "up" when the moving request is up
     * @return "down" when the moving request is down
     *
     */
    string getDirect();
};


