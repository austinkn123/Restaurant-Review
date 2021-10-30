#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
public:
    void setRatingAndComment(int revRating, string revComment);
    int getRating() const;
    string getComment() const;

private:
    int rating = -1;
    string comment = "No Comment";
};
// END Review class

#endif