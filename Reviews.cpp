#include <iostream>
#include <string>
#include <vector>
#include "Reviews.h"
#include "Review.h"
using namespace std;

// Get rating comment pairs, add each to list. -1 rating ends.
void Reviews::inputReviews() {
    Review currReview;
    int currRating;
    string currComment;

    cin >> currRating;
    while (currRating >= 0) {
        getline(cin, currComment); // Gets rest of line
        currReview.setRatingAndComment(currRating, currComment);
        reviewList.push_back(currReview);
        cin >> currRating;
    }
}

// Print all comments for reviews having the given rating
void Reviews::printCommentsForRating(int currRating) const {
    Review currReview;
    unsigned int i;

    for (i = 0; i < reviewList.size(); ++i) {
        currReview = reviewList.at(i);
        if (currRating == currReview.getRating()) {
            cout << currReview.getComment() << endl;
        }
    }
}

int Reviews::getAverageRating() const {
    int ratingsSum;
    unsigned int i;

    ratingsSum = 0;
    for (i = 0; i < reviewList.size(); ++i) {
        ratingsSum += reviewList.at(i).getRating();
    }
    return (ratingsSum / reviewList.size());
}