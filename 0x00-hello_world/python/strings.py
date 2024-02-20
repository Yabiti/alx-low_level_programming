# ASk a user for their name

name = input("what's your name? ").strip().title()

first , last = name.split()

# getting user's name
print(f'Hello, {name}')