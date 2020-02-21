#include <cmath> 
#include <iostream>
#include "warnings/errors.h"
#include "warnings/exceptions.h"
#pragma once
class Math {
    public:
    double multiply(double x, double y) {
        return x*y;
    }
    double add(double x, double y) {
        return x+y;
    }
    double reciprocal(double x) {
        if(x==0) {
            InitializeError(MathsError.DivideByZero);
        }
        return 1/x;
    }
    double getceiling(double x){
        return ceil(x);
    }
    double getfloor(double x) {
        return floor(x);
    }
    double getround(double x) {
        return round(x);
    }
};