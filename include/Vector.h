#pragma once

#include <vector>

class Vector {

	std::vector<double> data;
	double norm() const;
	double dot(const Vector& secondOperand) const;
	Vector cross(const Vector& secondOperand) const;
	Vector normalize() const;

};