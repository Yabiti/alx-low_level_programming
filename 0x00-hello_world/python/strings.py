with open("students.csv") as file:
    for line in file:
        home , name = line.strip().split(",")
        print(f"['name'] is in ['house']")