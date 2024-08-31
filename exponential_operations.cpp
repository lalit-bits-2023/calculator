#include <cmath>
#include "scientific_calculator.h"
#include <stdexcept>

double power(double base, double exponent) {
    return pow(base, exponent);
}

double logarithm(double value) {
    if (value <= 0) {
        throw std::invalid_argument("Logarithm undefined for non-positive values.");
    }
    return log(value);
}

double exponential(double value) {
    return exp(value);
}
