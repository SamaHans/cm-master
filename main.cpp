#include "sort.h"

int main(int argc, char* argv[]) {
	
	int nums[5] = { 0, 2, 1, 4, -100 };
	sort::bubbleSort(nums, 5);
	for (int i = 0; i < 5; ++i)
		std::cout << nums[i] << std::endl;
	return 0;

}
