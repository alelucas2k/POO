#include "IntegerSet.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

IntegerSet::IntegerSet()
{
    for ( int i = 0; i <= 100; i++ )
        set[ i ] = false;
}

IntegerSet::IntegerSet( int array[], int size )
{
    for ( int i = 0; i <= 100; i++ )
        set[ i ] = false;

    for ( int j = 0; j < size; j++ )
        if ( validEntry( array[ j ] ) )
            set[ array[ j ] ] = true;
}

void IntegerSet::inputSet()
{
    int number;

    do
    {
        cout << "Digite um numero entre 0 e 100 (-1 para sair): ";
        cin >> number;

        if ( validEntry( number ) )
            set[ number ] = true;
        else if ( number != -1 )
            cout << "Numero invalido." << endl;
      } while ( number != -1 ); // end do...while

      cout << "Fim da entrada de dados." << endl;

}

void IntegerSet::printSet() const
{
    cout << '{';

    for ( int u = 0; u <= 100; u++ )
        if ( set[ u ] )
            cout << setw( 4 ) << u << ' ';

    cout << '}' << endl;
} // end function printSet

void IntegerSet::insertElement( int k )
{
    if ( validEntry( k ) )
        set[ k ] = true;
    else
        cout << "Insert invalido." << endl;
}

void IntegerSet::deleteElement( int k )
{
    if ( validEntry( k ) )
        set[ k ] = false;
    else
        cout << "Delete invalido." << endl;
}


IntegerSet unionOfSets( const IntegerSet &a, const IntegerSet &b )
{
    IntegerSet c;

    for ( int i = 0; i <= 100; i++ )
        if ( a.set[ i ] || b.set[ i ] )
            c.set[ i ] = true;

    return c;
}

IntegerSet intersectionOfSets( const IntegerSet &a, const IntegerSet &b )
{
    IntegerSet c;

    for ( int i = 0; i <= 100; i++ )
        if ( a.set[ i ] && b.set[ i ] )
            c.set[ i ] = true;

    return c;
}


IntegerSet::~IntegerSet()
{
    //dtor
}
