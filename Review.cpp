#include <iostream>
#include <string>
#include <vector>
#include "Review.h"
using namespace std;


void Review::setRatingAndComment(int revRating, string revComment) {
    rating = revRating;
    comment = revComment;
}

int Review::getRating() const {
    return rating;
}

string Review::getComment() const {
    return comment;
}