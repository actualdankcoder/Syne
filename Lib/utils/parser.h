#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "../commands.h"
#include "tokens.h"
;using namespace std;
stringstream commandstream;
void parse(vector<string> tokens) {
    for(size_t i=0; i<tokens.size(); ++i) {
        if(i!=0) {
            commandstream<<" ";
        }
        commandstream<<tokens[i];
    }
    string command = commandstream.str();
    if (command.substr(0, 12)==PRINT_TOKEN) {
        printline(command.substr(13,-1));
    }
    commandstream.str(string());
}