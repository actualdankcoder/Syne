#include "Lib/filetype.h"
#include "Lib/processfile.h"
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    if(argc>1){
        ProcessFile(argv[1]);
    } 
}