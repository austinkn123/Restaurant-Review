#ifndef RESTAURANT_H
#define RESTAURANT_H


#include <iostream>
#include <string>
#include <vector>
#include "Reviews.h"
using namespace std;

class Restaurant {
public:
    void setName(string restaurantName);
    void readAllReviews();
    void printCommentsByRating() const;

private:
    string name;
    Reviews reviews;
};

#endif