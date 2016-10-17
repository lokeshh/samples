//
// Created by Omar Shaikh on 10/17/16.
//

#ifndef INC_01_SMARTLINKEDLIST_PRECONDVIOLATEDEXCEP_H
#define INC_01_SMARTLINKEDLIST_PRECONDVIOLATEDEXCEP_H


#include<string>

using namespace std;

class PrecondViolatedExcep : public logic_error {
 public:
  PrecondViolatedExcep(const string &message = "");
};  // end PrecondViolatedExcep

#endif //INC_01_SMARTLINKEDLIST_PRECONDVIOLATEDEXCEP_H
