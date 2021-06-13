#
#Function takes in a non-empty array of distinct integers and an integer representing a target sum.
#If any two numbers in the input array add up to the target sum, the function returns them in an array in any order.
#Function returns an empty array if no numbers add up to target sum.
#
def twoNumberSum(array, targetSum):
    for i in range(len(array)):
        num1 = array[i]
        for j in range(i + 1, len(array)):
            num2 = array[j]
            if num1 + num2 == targetSum:
                return [num1, num2]
    return []


array = [3, 5, -4, 8, 11, 1, -1, 6]
targetSum = 10
print(twoNumberSum(array, targetSum))
