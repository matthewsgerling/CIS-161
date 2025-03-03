//
// Created by matth on 9/14/2019.
// Matthew Gerling
//msgerling@dmacc.edu
#include <iostream>
using namespace std;

int main(){
    int bottles, price = 24, fullPrice, discountPrice, discount = 0;

    cout << "How many bottles will you buy? " << endl;
    cin >> bottles;

    if (bottles <= 0 or bottles > 399) {
        cout << "Bottles have to be higher than 0 but less than 399" << endl;
        return 0;
    }

    fullPrice = bottles * price;

    if (bottles > 10){
        if (11 <= bottles and bottles <= 15) {
            discountPrice = fullPrice - (fullPrice * .1);
            discount = 10;
        } else if(16 <= bottles and bottles <= 20) {
            discountPrice = fullPrice - (fullPrice * .2);
            discount = 20;
        } else if(20 <= bottles and bottles <= 30) {
            discountPrice = fullPrice - (fullPrice * .3);
            discount = 30;
        } else if(bottles >= 31) {
            discountPrice = fullPrice - (fullPrice * .35);
            discount = 35;
        }
    }else{
        discountPrice = fullPrice;
    }
    cout << "Full price: $" << fullPrice << endl;
    cout << "Discount: " << discount << "%" << endl;
    cout << "Discounted price: $" << discountPrice << endl;
}