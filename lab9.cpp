#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

int collisions = 0;
int thestrings = 0;
bool arr[10007] = {false};

long hashcode(char* s){
    long bucket = 0;
    int n = sizeof(s);
    long hs = 0;
    for(int i=0; i < n; i++){
        hs += s[i]*(pow(31,(n-1)-i));
    }
    bucket = (hs % 10007);
    if(arr[bucket] == true){
        collisions++;
        
    }
    if(arr[bucket] == false){
        arr[bucket] = true;
    }
    
    thestrings++;
    return 0;
}

int main(int argc, char* argv[]){
    char word[100];
    fstream input(argv[1]);
    while(!input.eof()){
        input >> word;
        hashcode(word);
        
    }
    cout << "Collision # is " << collisions << endl;
    cout << "Total Input is " << thestrings-1 << endl;
}
