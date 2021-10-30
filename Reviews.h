#ifndef REVIEWS_H
#define REVIEWS_H

#include <iostream>
#include <string>
#include <vector>
#include "Review.h"
using namespace std;

class Reviews {
public:
    void inputReviews();
    void printCommentsForRating(int currRating) const;
    int getAverageRating() const;

private:
    vector<Review> reviewList;
};

#endif