students = []

with open("students.csv") as file:
    for line in file:
        name , home = line.strip().split(",")
        students.append(f"{name} is in {home}")

for student in sorted(students):
    print(student)