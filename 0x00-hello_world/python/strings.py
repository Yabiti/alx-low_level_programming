# ask user   for their name
name = input("what's your name? ").strip().title()

# spliting user's name

first, last = name.split(" ")
# say hello to user
print(f"Hello, {last}")