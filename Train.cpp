#include <iostream>
#include <string>
using namespace std;

// Function declarations
void buyTicket();
void collectTicket();
void checkReservation();
void processDiscountTicket();
void leaveTrain();

int main() {
    cout << "Train Journey Simulation\n";

    buyTicket();              
    collectTicket();          
    checkReservation();       
    processDiscountTicket();  
    leaveTrain();             

    cout << "\n  End of Journey \n";
    return 0;
}

void buyTicket() {
    int needSeatReservation;
    cout << "\nBuy Ticket\n";
    cout << "Reserve a seat? (1 = Yes, 0 = No): ";
    cin >> needSeatReservation;

    if (needSeatReservation == 1) {
        cout << "Seat reserved.\n";
    } else {
        int needReservation;
        cout << "Change mind, want reservation? (1 = Yes, 0 = No): ";
        cin >> needReservation;

        if (needReservation == 1) {
            cout << "Reservation confirmed.\n";
        } else {
            cout << "No reservation chosen.\n";
        }
    }
}

void collectTicket() {
    int collectOption;
    cout << "\nCollect Ticket\n";
    cout << "Method (1 = Mail, 2 = Machine): ";
    cin >> collectOption;

    if (collectOption == 1) {
        cout << "Check mailbox in 3 days.\n";
    } else if (collectOption == 2) {
        cout << "Ticket printed from machine.\n";
    } else {
        cout << "Invalid option.\n";
    }

    cout << "Boarding train...\n";
}

void checkReservation() {
    int hasReservation;
    cout << "\nCheck Reservation\n";
    cout << "Do you have a reservation? (1 = Yes, 0 = No): ";
    cin >> hasReservation;

    if (hasReservation == 1) {
        cout << "Go to your seat.\n";
    } else {
        cout << "Find an empty seat.\n";
    }

    cout << "Inspector checking ticket...\n";
}

void processDiscountTicket() {
    int discountTicket;
    string doc;
    cout << "\nDiscount Ticket\n";
    cout << "Do you have discount? (1 = Yes, 0 = No): ";
    cin >> discountTicket;

    if (discountTicket == 1) {
        cout << "Show document: ";
        cin >> doc;
        cout << "Verified: " << doc << endl;
    } else {
        cout << "Normal ticket.\n";
    }
}


void leaveTrain() {
    int arriveDestination;
    cout << "\nLeave Train\n";
    cout << "Reached destination? (1 = Yes, 0 = No): ";
    cin >> arriveDestination;

    if (arriveDestination == 1) {
        cout << "You have arrived.\n";
    } else {
        cout << "Still traveling...\n";
    }
}
