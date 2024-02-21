def main():
    meow(get_number())
    
def get_number():
    n = int(input("what's n? "))
    if n > 1:
        return n

def meow(n):
    for _ in range(n):
        print("meow")

main()