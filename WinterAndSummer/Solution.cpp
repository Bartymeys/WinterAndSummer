#include "stdafx.h"
#include "Solution.hpp"

Solution::Solution()
{
}


Solution::~Solution()
{
}

int Solution::solution(std::vector<int>& vec)
{
	int maxAssumed = vec[0];
	int maxOfWinter = vec[0];
	int result = 1;									//shortest possible winter

	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] > maxAssumed) {
			maxAssumed = vec[i];
		}
		if (vec[i] <= maxOfWinter) {				//if we found temperature that belongs to winter
			maxOfWinter = maxAssumed;
			result = i + 1;							//remembering quantity of days
		}
	}

	return result;
}
