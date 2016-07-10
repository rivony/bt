// tests.cpp
#include "cppStandard.cpp"
#include "Var.cpp"
#include "BinaryConstraint.cpp"
#include "Domain.cpp"
#include "Model.cpp"
#include <gtest/gtest.h>
#include <vector>

TEST(VarTest, ReturnGoodValues) {

	Var A = Var("A", 1);
	vector<Var> vars;
	vars.push_back(A);
	Var B = Var("B", 2);
	vars.push_back(B);
	Var C = Var("C", 3);
	vars.push_back(C);
	Var D = Var("D", 4);
	vars.push_back(D);

	BinaryConstraint ABdifferent = BinaryConstraint(1, A, B, "!=");
	std::vector<BinaryConstraint> binaryConstraints;
	binaryConstraints.push_back(ABdifferent);
	BinaryConstraint BCdifferent = BinaryConstraint(2, B, C, "!=");
	binaryConstraints.push_back(BCdifferent);
	BinaryConstraint BDdifferent = BinaryConstraint(3, B, D, "!=");
	binaryConstraints.push_back(BDdifferent);
	BinaryConstraint CDdifferent = BinaryConstraint(4, C, D, "!=");
	binaryConstraints.push_back(CDdifferent);

	std::vector<int> commonValues;
	commonValues.push_back(0);
	commonValues.push_back(1);
	commonValues.push_back(2);
	Domain domainA = Domain(1, A, commonValues);
	std::vector<Domain> domains;
	domains.push_back(domainA);
	Domain domainB = Domain(2, B, commonValues);
	domains.push_back(domainB);
	Domain domainC = Domain(3, C, commonValues);
	domains.push_back(domainC);
	Domain domainD = Domain(4, D, commonValues);
	domains.push_back(domainD);

	Model colorationModel = Model(vars, binaryConstraints, domains);

    ASSERT_EQ(2, B.id);
    ASSERT_EQ("B", B.name);
    ASSERT_EQ("!=", BCdifferent.relation);
    ASSERT_EQ(2, domainD.values.at(2));
}

TEST(CplusplusStandardUsed, AllCases){
	ASSERT_EQ("C++11", cppStandard());
	ASSERT_EQ("C++98", cppStandard());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
