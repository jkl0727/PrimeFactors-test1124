#include "pch.h"
#include "../project2/prime_factors.cpp"

#include <vector>
using std::vector;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}