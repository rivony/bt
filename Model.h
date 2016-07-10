#ifndef Model_Included
#define Model_Included

#include "Var.h"
#include "Domain.h"
#include "BinaryConstraint.h"
#include <vector>


class Model{
public:
    vector<Var> vars;
    vector<BinaryConstraint> binaryConstraints;
    vector<Domain> domains;

    Model();
    Model(std::vector<Var> nvars, std::vector<BinaryConstraint> nbinaryConstraints, std::vector<Domain> ndomains);

    std::vector<vector<int> > solve();
};

#endif