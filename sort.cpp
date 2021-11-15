#include "sort.h"

void sort::bubbleSort(int* nums, int len) {
	for (int i = 0; i < len - 1; ++i) {
		for (int j = 0; j < len - 1 - i; ++j) {
			if (nums[j] > nums[j + 1]) {
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
}