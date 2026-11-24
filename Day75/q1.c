# Define the file name
filename = "example.txt"

# Open the file in append mode and take user input
with open(filename, "a") as file:
    new_text = input("Enter a new line of text: ")
    # Append the text with a newline at the end
    file.write(new_text + "\n")
