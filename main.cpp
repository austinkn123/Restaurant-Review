#include <iostream>
#include <string>
#include <vector>
#include "Restaurant.h"
using namespace std;



int main() {
    Restaurant ourPlace;
    string currName;

    cout << "Type restaurant name: " << endl;
    getline(cin, currName);
    ourPlace.setName(currName);
    cout << endl;

    ourPlace.readAllReviews();
    cout << endl;

    ourPlace.printCommentsByRating();

    return 0;
}



