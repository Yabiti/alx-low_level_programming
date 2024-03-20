#Ask user for their name
name = input("what's your name? ")

#removing white space
name = name.strip()
#capitalizing user name
name = name.title()
#say hello to the user
print(f"Hello, {name}")
