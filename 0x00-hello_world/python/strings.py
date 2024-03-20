# Ask the user for their name

name = input("what's your name? ").strip().title()

first, last = name.split(" ")

# say hello to the user
print(f"Hello, {last}")