#include "VectorSpace.h"

VectorSpace::VectorSpace(const std::vector<Vector>& basisVectors)
    : basis(basisVectors) {}

bool VectorSpace::IsInSpan(const Vector& v) const {
    // TODO: implement this using Gaussian elimination or rank check



    // for (v: )
    return false;
}

bool VectorSpace::IsSubSpace(const VectorSpace& subspace) const {
    // TODO: Check if every basis vector of subspace is in this space's span
    return false;
}

bool VectorSpace::IsLinearCombination(const std::vector<Vector>& set1,
    const std::vector<Vector>& set2) {
    // TODO: check if each vector in set2 is a linear combination of vectors in set1
    return false;
}

bool VectorSpace::IsLinearlyIndependent() const {
    // TODO: implement linear independence check
    return false;
}

std::size_t VectorSpace::Dimension() const {
    return basis.size();
}
