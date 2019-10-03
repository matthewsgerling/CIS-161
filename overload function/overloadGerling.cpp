//
// Created by matth on 10/3/2019.
//Matthew Gerling
//msgerling@dmacc.edu


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void ticketSearch(){
    cout << "Looking for 1 ticket(s) at any price in any section of the Auditorium." << endl;
}

void ticketSearch(int tickets){
    cout << "Looking for " << tickets << " ticket(s) at any price in any section of the Auditorium." << endl;
}

void ticketSearch(int tickets, double price){
    cout << "Looking for " << tickets << " ticket(s) at maximum cost of " << setprecision(2) << price << fixed << " in any section of the Auditorium." << endl;
}

void ticketSearch(int tickets, double price, string area){
    cout << "Looking for " << tickets << " ticket(s) at maximum cost of " << setprecision(2) << price << fixed << " each on the " << area << " section of the Auditorium." << endl;
}


int main(){
    int tickets = 5;
    double price = 50.00;
    string area = "Stands";

    ticketSearch(tickets, price, area);

}