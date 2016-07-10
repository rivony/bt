#include "Domain.h"

Domain::Domain(){
	id = 0;
	var = Var();
	values.push_back(0);

}

Domain::Domain(int nid, Var nvar, std::vector<int> nvalues){
	id = nid;
	var = nvar;
	values = nvalues;
}