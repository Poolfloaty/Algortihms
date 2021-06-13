/*
Function takes in a non-empty array of distinct integers and an integer representing a target sum.
If any two numbers in the input array add up to the target sum, the function returns them in an array in any order.
Function returns an empty array if no numbers add up to target sum.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	vector<int> targetAddends;
	for (int i = 0; i < array.size() - 1; i++) {
		int num1 = array[i];
		for (int j = i + 1; j < array.size(); j++) {
			int num2 = array[j];
			if (num1 + num2 == targetSum) {
				targetAddends.push_back(num1);
				targetAddends.push_back(num2);
			  }
			}
		}
	return targetAddends;
}
int main() {
    vector<int> testArray = {3, 5, -4, 8, 11, 1, -1, 6};
    int testTargetSum = 10;
    vector<int> testSum = twoNumberSum(testArray, testTargetSum);
    for (int i = 0; i < testSum.size(); i++) {
        cout << testSum[i] << endl;;
    }
    return 0;
}