name = input("what's your name? ")
match name:
    case "Harry" | "Hermione" | "Draco":
        print("gryffindor")
    case _:
        print("Who?")
