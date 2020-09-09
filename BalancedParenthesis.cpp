
#include "function.h"

bool checkIfValid( string parString ){

    int count = 0;
    bool flag = true;

    for(int i = 0; i < parString.length(); i++){
        if( parString[i] == '('){
            count++;
        } else {
            count--;
        }

        if( count < 0 ){
            flag = false;
            break;
        }
    }

    if( count != 0 ){
        flag = false;
    }
    return flag;
}
void generateBalanceParUtil( string output, int input, vector<string> &possiblePar ){
    if( input == 0 ){
        if( checkIfValid(output) ){
            possiblePar.push_back( output );
        }
        return;
    }

    string op1 = output + "(";
    string op2 = output + ")";

    generateBalanceParUtil( op1, input-1, possiblePar );
    generateBalanceParUtil( op2, input-1, possiblePar );
}

void generateBalancePar( int n ){

    vector<string> possiblePar;
    string output = "";

    generateBalanceParUtil( output, 2*n, possiblePar );

    for(int i = 0; i < possiblePar.size(); i++){
        cout << possiblePar[i] << endl;
    }

}

void pseudoBalPar(int open, int close, vector<string> &result, string opt){

    //base condition

    if( open == 0 && close == 0 ){
        result.push_back( opt );
        return;
    }

    //recall function based on observation


    if( open != 0 ){

        string opt1 = opt;
        opt1.push_back( '(' );

        pseudoBalPar( open-1, close, result, opt1 );
    }

    if( close > open ){

        string opt2 = opt;
        opt2.push_back( ')' );

        pseudoBalPar( open, close-1, result, opt2 );
    }
}

vector<string> pseudoBalPar( int n ){

    vector<string> result;
    int close = n;
    int open = n;

    string opt = "";

    pseudoBalPar(open, close, result, opt);

    return result;
}

