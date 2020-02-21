#include <iostream>
#include <fstream>
#include <string>
#include "utils/proccessing.h"
#include "utils/parser.h"
#include <iostream>
#include <vector>
using namespace std;
string line;
void Lexer(string filename, string os) {
    ifstream datafile(filename);
    while (getline(datafile, line)) {
        vector<string> tokendata=processintotokens(line);
        parse(tokendata);
    }
}