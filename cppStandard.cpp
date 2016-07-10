#include <string>

using namespace std;

string cppStandard(){
	if(__cplusplus == 201103L){
		return "C++11";
	}
	if(__cplusplus == 19971L){
		return "C++98";
	}
	return "pre-standard C++";
}