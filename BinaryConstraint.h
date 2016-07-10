#ifndef BinaryConstraint_Included
#define BinaryConstraint_Included

#include <string>
#include "Var.h"

using namespace std;

class BinaryConstraint{
public:
    int id;
    Var firstVar;
    Var secondVar;
    std::string relation;

    BinaryConstraint();
    BinaryConstraint(int nid, Var nfirstVar, Var nSecondVar, std::string nrelation);

};

#endif