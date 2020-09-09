#include "function.h"


void printSubStringWithSpaceUtil( string output, string input ){
    if( input.length() == 0 ){
        cout << output << endl;
        return;
    }

    string op1 = output;
    string op2 = output;

    op1.push_back( ' ' );
    op1.push_back( input[0] );
    op2.push_back( input[0] );

     input.erase( input.begin() + 0 );

     printSubStringWithSpaceUtil( op1, input );
     printSubStringWithSpaceUtil( op2, input );
}

void printSubStringWithSpace( string str ){
    if( str.length() == 1 || str.length() == 0 ){
        return;
    }

    string output = "";

    output.push_back( str[0] );

    str.erase( str.begin() + 0 );

    printSubStringWithSpaceUtil( output, str );
}
