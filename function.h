#include<bits/stdc++.h>
using namespace std;

void printSubstringUtil( string output, string input );

void printSubstring( string str );


void printUniqueSubstringUtil( string output, string input, map<string, int> &setOfString, vector<string> &result);

void printUniqueSubstring( string str, map<string, int> &setOfString, vector<string> &result );

void printSubStringWithSpaceUtil( string output, string input );

void printSubStringWithSpace( string str );

void stringCapitalUtil( string output, string input );

void stringCapital( string str );

bool checkIfValid( string parString );

void generateBalanceParUtil( string output, int input, vector<string> &possiblePar );

void generateBalancePar( int n );

void pseudoBalPar(int open, int close, vector<string> &result, string opt);

vector<string> pseudoBalPar( int n );
