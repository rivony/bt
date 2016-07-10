#ifndef Var_Included
#define Var_Included


#include <string>

using namespace std;

class Var{
public:
    std::string name;
    int id;

    Var();
    Var(std::string nname, int nid);

};

#endif