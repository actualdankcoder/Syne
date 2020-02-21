#include <string>
#pragma once
bool checkfiletype(std::string args){
    return (std::string(args).find(".syne") != std::string::npos);
}