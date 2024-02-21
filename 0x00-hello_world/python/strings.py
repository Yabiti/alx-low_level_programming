def main():
    love(get_number())

def get_number():
    n = int(input("wo's she? "))
    if n > 1:
        return n
    
def love(n):
    for _ in range(n):
        print("my_love")

main()