#include "Model.h"
#include "Var.h"
#include "BinaryConstraint.h"
#include "Domain.h"

Model::Model(){
}

Model::Model(std::vector<Var> nvars, std::vector<BinaryConstraint> nbinaryConstraints, std::vector<Domain> ndomains){
	vars = nvars;
	binaryConstraints = nbinaryConstraints;
	domains = ndomains;
}

std::vector<vector<int> > Model::solve(int &backtracks){
	vector<vector<int> > result;
	//if(){

	//}

	//for
}
