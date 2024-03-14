email = input("what's our email ").strip()

username, domain = email.split("@")

if username and domain.endswith(".edu"):
    print("valid")
else:
    print("invalid")