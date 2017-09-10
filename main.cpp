#include <iostream>
#include "Movie.h"

void setMovieInfo(Movie& aMovie)
{
    string name;
    int year;
    double rating;
    string genre;
    cout<<"What is the movie's title?"<<endl;
    cin>>name;
    aMovie.setName(name);
    cout<<"What is the movie's year?"<<endl;
    cin>>year;
    aMovie.setYear(year);
    cout<<"What rating does it have?(between 0 and 10)"<<endl;
    cin>>rating;
    aMovie.setRating(rating);
    cout<<"What genre is it?"<<endl;
    cin>>genre;
    aMovie.setGenre(genre);
    cout<<endl;
}

int main()
{
    cout<<"First Movie"<<endl;
    Movie aMovie;
    setMovieInfo(aMovie);
    cout<<"Second Movie"<<endl;
    Movie bMovie;
    setMovieInfo(bMovie);
    cout<<"Third Movie"<<endl;
    Movie cMovie;
    setMovieInfo(cMovie);

    aMovie.getInfo();
    bMovie.getInfo();
    cMovie.getInfo();

}

