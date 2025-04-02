#pragma once
#include "Vector.h"
#include <vector>

class VectorSpace {


	bool IsInSpan(std::vector<double> const);

	bool IsLinearlyIndependent() const; 
private:
	// Find the basis vectors for this vector space
	std::vector<Vector> basis; 
};