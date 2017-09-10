//
// Created by Vadim Garkusha on 2017-09-08.
//

#include "Movie.h"
#include <iostream>
#include <string>
using namespace std;

//constructors
Movie::Movie()
{
    name = "Unknown";
    year = 0;
    rating = 0.0;
    genre = "Unknown";
}

Movie::Movie(string aname, int ayear, double arating, string agenre)
{
    setName(aname);
    setYear(ayear);
    setRating(arating);
    setGenre(agenre);
}

//destructor
Movie::~Movie()
{

}

//set methods (mutator methods)
void Movie::setName(string aname)
{
    name = aname;
}
void Movie::setYear(int ayear)
{
    while(ayear > 2017)
    {
        cout << "Year should be less then 2017!" << endl;
        cin>>ayear;
    }
}
void Movie::setRating(double arating)
{
    while(arating > 10 || arating < 0) {
        cout << "Rating should be between 0 and 10!" << endl;
        cin>>arating;
    }
}
void Movie::setGenre(string agenre)
{
    genre = agenre;
}

//get methods (accessor methods)
string Movie::getName()
{
    return name;
}
int Movie::getYear()
{
    return year;
}
double Movie::getRating()
{
    return rating;
}
string Movie::getGenre()
{
    return genre;
}

string Movie::getInfo()
{
    cout <<  "Title: " << getName() << "\nYear: " << getYear() << "\nRating: " << getRating() << "\nGenre: " << getGenre() << endl<<endl;
}