try:
    x = int(input("what's x? "))
except ValueError:
    print("x is not an integer")

print(f"x is {x}")