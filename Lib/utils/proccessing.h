#include <string>
#include <algorithm>
#include "syntax.h"
#include "../warnings/errors.h"
#include "../warnings/exceptions.h"
#include <vector>
#include<stdio.h>
#include<ctype.h>

std::vector<std::string> processintotokens(std::string DATA) {
    std::string token="";
    std::string expression="";
    int stringstate = 0;
    std::string stringdata="";
    std::vector<std::string> tokens;
    for(std::string::size_type i = 0; i < DATA.size(); ++i) {
        token+=DATA[i];
        if (std::isdigit(DATA[i])) {
            if (stringstate != 1) {
                expression+=DATA[i];
            }
        }
        else if (token==PRINTSTATEMENT) {
            //std::cout<<"print statement\n";
            tokens.push_back("PRINT");
            token="";
        }
        else if (token==BLANKSPACE) {
            token="";
        }
        else if (token==BIGQUOTE) {
            if (stringstate==0) {
                stringstate=1;
                token="";
            }
            else if (stringstate==1) {
                //std::cout<<"STRINGFOUND\n";
                tokens.push_back("STRING:" + stringdata);
                stringstate=0;
                token="";
            }
        }
        else if (stringstate==1) {
            stringdata+=DATA[i];
            token="";
        }
    }
    if (stringstate==1) {
        InitializeError(SystemError.BadSyntax);
    }
    return tokens;

}

