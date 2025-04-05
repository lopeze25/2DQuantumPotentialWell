#pragma once
#include "Vector.h"
#include <vector>

class VectorSpace {
public:
    // Constructor to initialize the vector space with a basis
    VectorSpace(const std::vector<Vector>& basisVectors);
    // Check if a vector is in the span of this vector space
    bool IsInSpan(const Vector& v) const;
    // Check if a set of vectors forms a subspace of this space
    bool IsSubSpace(const VectorSpace& subspace) const;
    // Check if the second set of vectors is a linear combination of the first, Static so that it may be used without calling the object
    static bool IsLinearCombination(const std::vector<Vector>& set1,
        const std::vector<Vector>& set2);
    // Check if the basis is linearly independent
    bool IsLinearlyIndependent() const;

    // Return the dimension of the vector space
    std::size_t Dimension() const;

private:
    std::vector<Vector> basis;
};
