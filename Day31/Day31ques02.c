Reverse an array without taking extra space.

  def reverse_array(arr):
   left, right = 0, len(arr) - 1
   while left < right:
       arr[left], arr[right] = arr[right], arr[left]
       left += 1
       right -= 1
   return arr
# Example usage
arr = [1, 4, 3, 2, 6, 5]
print(reverse_array(arr)) # Output: [5, 6, 2, 3, 4, 1]
