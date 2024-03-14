email = input("what's our email ").strip()

if "@" in email and "." in email:
    print("valid")
else:
    print("invalid")