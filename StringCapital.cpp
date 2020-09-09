
#include "function.h"


void stringCapitalUtil( string output, string input ){
    if( input.length() == 0 ){
        cout << output << endl;
        return;
    }

    string op1 = output;
    string op2 = output;

    op1.push_back( input[0] );
    op2.push_back( toupper( input[0] ) );

     input.erase( input.begin() + 0 );

     stringCapitalUtil( op1, input );
     stringCapitalUtil( op2, input );
}

void stringCapital( string str ){

    string output = "";

    stringCapitalUtil( output, str );
}
