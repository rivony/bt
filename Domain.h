#ifndef Domain_Included
#define Domain_Included

#include <vector>
#include "Var.h"

class Domain{
public:
    int id;
    Var var;
    vector<int> values;

    Domain();
    Domain(int nid, Var nvar, std::vector<int> nvalues);
};

#endif