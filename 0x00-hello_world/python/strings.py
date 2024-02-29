students = []

with open("students.csv") as file:
    for line in file:
        name , home = line.strip().split(",")
        students.append({"name": name , "home": home})
    
    for student in sorted(students, key=lambda student: student["name"]):
        print(f"{student['name']} is in {student['home']}")
    