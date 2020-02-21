#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include "lexer.h"
#include "platform.h"
#include "warnings/exceptions.h"
#include "warnings/errors.h"
#include "filetype.h"

using namespace std;

bool filexists (const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}

void ProcessFile (string filename) {
    if(checkfiletype(filename)) {
        if (filexists(filename)) {
            Lexer(filename, PLATFORM);
        }
        else {
            InitializeError(SystemError.FileNotFound);
        }
    }
    else {
        InitializeError(SystemError.BadFileType);
    }
}