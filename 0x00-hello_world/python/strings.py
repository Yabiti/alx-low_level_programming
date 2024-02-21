def main():
    my_love(get_number())

def get_number():
    while True:
        n = int(input("who's she? "))
        if n > 1:
            return n