#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

using std::cout;
using std::endl;




int main(int argc, char *argv[]){

	std::string v1 = "table and chair";
	std::string v2 = "spoon and fork";
	std::string intersection;

	std::sort(v1.begin(), v1.end());   // сложность O(N·log(N))
	std::sort(v2.begin(), v2.end());   // сложность O(N·log(N))
 


 	//В большинстве сравнений 2·(N1+N2-1), 
 			//где N1 = std::distance(first1, last1) 
			//и N2 = std::distance(first2, last2).
	std::set_intersection(v1.begin(), v1.end(),
                          v2.begin(), v2.end(),
                          std::back_inserter(intersection));

	cout << intersection <<endl;


    return 0;
}