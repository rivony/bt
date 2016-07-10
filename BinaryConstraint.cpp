#include "BinaryConstraint.h"

BinaryConstraint::BinaryConstraint(){
	id = -1;
	relation = "";
}

BinaryConstraint::BinaryConstraint(int nid, Var nfirstVar, Var nsecondVar, std::string nrelation){
	id = nid;
	firstVar = nfirstVar;
	secondVar = nsecondVar;
	relation = nrelation;
}