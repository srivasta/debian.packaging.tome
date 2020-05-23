#include "range.hpp"

#include <cassert>

void range_init(range_type *range, s32b min, s32b max)
{
	assert(range != NULL);

	range->min = min;
	range->max = max;
}
