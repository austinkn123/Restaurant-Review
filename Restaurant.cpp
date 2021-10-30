#include <iostream>
#include <string>
#include <vector>
#include "Restaurant.h"
using namespace std;

void Restaurant::setName(string restaurantName) {
    name = restaurantName;
}

void Restaurant::readAllReviews() {
    cout << "Type ratings + comments." << endl
        << "For instace: 5 This is a great place to eat!"
        << endl << "To end: -1" << endl;
    reviews.inputReviews();
}

void Restaurant::printCommentsByRating() const {
    int i;

    cout << "Comments for each rating level: " << endl;
    for (i = 1; i <= 5; ++i) {
        cout << i << ":" << endl;
        reviews.printCommentsForRating(i);
    }
}