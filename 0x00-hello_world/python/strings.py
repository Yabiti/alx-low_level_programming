def main():
    name = input("what's your name? ")
    print(name)

    hello()

def hello(to= "world"):
    print("hello, ", to)
main()