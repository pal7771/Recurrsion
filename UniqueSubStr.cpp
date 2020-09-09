#include "function.h"

void printUniqueSubstringUtil( string output, string input, map<string, int> &setOfString, vector<string> &result){
    if( input.length() == 0 ){

        if( setOfString.find( output ) == setOfString.end() ){
            result.push_back( output );
            setOfString.insert( make_pair(output, 1));
        }
        return;
    }

    string opt1 = output;
    string opt2 = output;

    opt2.push_back( input[0] );
    input.erase( input.begin() + 0 );

    printSubstringUtil( opt1, input );
    printSubstringUtil( opt2, input );

}
void printUniqueSubstring( string str, map<string, int> &setOfString, vector<string> &result ){
    string optput = "";
    string input = str;
    printUniqueSubstringUtil( optput, input, setOfString, result );
}

