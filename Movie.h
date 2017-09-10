//
// Created by Vadim Garkusha on 2017-09-08.
//

#ifndef FAVOURITEMOVIE_MOVIE_H
#define FAVOURITEMOVIE_MOVIE_H
#include <string>
using namespace std;

class Movie {
private:
    string name;
    int year;
    double rating;
    string genre;

public:
    //constructors
    Movie();
    Movie(string, int, double, string);

    //destructor
    ~Movie();

    string getName();
    int getYear();
    double getRating();
    string getGenre();

    void setName(string);
    void setYear(int);
    void setRating(double);
    void setGenre(string);

    string getInfo();

};


#endif //FAVOURITEMOVIE_MOVIE_H
