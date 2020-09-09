#include<bits/stdc++.h>
using namespace std;

void printSubstringUtil( string output, string input ){
    if( input.length() == 0 ){
        cout << output << endl;
        return;
    }

    string opt1 = output;
    string opt2 = output;

    opt2.push_back( input[0] );
    input.erase( input.begin() + 0 );

    printSubstringUtil( opt1, input );
    printSubstringUtil( opt2, input );

}
void printSubstring( string str ){
    string optput = "";
    string input = str;
    printSubstringUtil( optput, input );
}

int main(){

    string str;
    cin >> str;

    printSubstring( str );
    return 0;
}
