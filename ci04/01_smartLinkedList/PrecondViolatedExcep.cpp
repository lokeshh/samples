//
// Created by Omar Shaikh on 10/17/16.
//

#include "PrecondViolatedExcep.h"
#include <string>
#include <exception>

using namespace std;

PrecondViolatedExcep::PrecondViolatedExcep(const string &message) :
    logic_error("Precondition Violated Exception: " + message) {
}   // end constructor