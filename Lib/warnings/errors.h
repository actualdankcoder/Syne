#pragma once
#include <string>
#include<tuple>
using namespace std;
class maths {
    public:
        const tuple <string, int> DivideByZero=make_tuple("DivideByZero: Cannot divide a number by zero",-250);
};
class core {
    public:
        const tuple <string, int> MemoryError=make_tuple("MemoryError: Memory was overloaded",-300);
        const tuple <string, int> FileNotFound=make_tuple("FileNotFound: Couldn't find the file mentioned",-301);
        const tuple <string, int> BadFileType=make_tuple("BadFileType: The Syne console can only execute .syne files",-302);
        const tuple <string, int> BadSyntax=make_tuple("BadSyntax: Unclosed quotes were present in the line",-303);
      
};
maths MathsError;
core SystemError;