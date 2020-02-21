/*  

Reads Exceptions from errors.h and initializes
them on request of a header

*/
#pragma once
#include "errors.h"
#include <string>
#include <iostream>
#include <tuple>
using namespace std;
void InitializeError(tuple <string, int> type) {
    cout << get<0>(type) << endl;
    throw get<1>(type);
}