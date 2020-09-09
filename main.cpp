#include<bits/stdc++.h>
#include "function.h"

using namespace std;

int main(){

    vector<string> result;

    result = pseudoBalPar(3);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}
