students = []

with open("students.csv") as file:
    for line in file:
        name, home = line.strip().split(",")