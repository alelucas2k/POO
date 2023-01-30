#ifndef INTEGERSET_HPP
#define INTEGERSET_HPP
#include <iostream>
#include <iomanip>

using namespace std;


class IntegerSet
{
public:
friend IntegerSet unionOfSets( const IntegerSet &, const IntegerSet & );
friend IntegerSet intersectionOfSets( const IntegerSet &, const IntegerSet & );
    IntegerSet();
    IntegerSet( int array[], int size );
    void inputSet();
    void printSet() const;
    void insertElement( int k );
    void deleteElement( int k );
    ~IntegerSet();

private:
    bool set[ 101 ];
    bool validEntry( int k ) const
    {
        return ( k >= 0 && k <= 100 );
    }
};
#endif