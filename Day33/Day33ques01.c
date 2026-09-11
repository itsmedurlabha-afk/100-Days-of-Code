Search in a sorted array using binary search.
def binary_search(arr, target):
   low, high = 0, len(arr) - 1
   while low <= high:
       mid = low + (high - low) // 2 # Avoids overflow in some languages
       if arr[mid] == target:
           return mid # Element found
       elif arr[mid] < target:
           low = mid + 1 # Search right half
       else:
           high = mid - 1 # Search left half
   return -1 # Element not found
# Example usage
array = [3, 4, 5, 6, 7, 8, 9]
x = 4
result = binary_search(array, x)
if result != -1:
   print(f"Element is present at index {result}")
else:
   print("Not found")
