def main():
    x = get_int()
    print(f"x is {x}")

def get_int():
    while True:
        try:
            x = int(print("what's x? "))
        except ValueError:
            print("x is not an integer")
        return x
    
    main()