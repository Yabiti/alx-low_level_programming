students = []

with open("students.csv") as file:
    for line in file:
        name , house = line.strip().split()
        students.append(f"{name} is in {house}")
    
    for student in sorted(students, key=lambda student: student['name']):
        print(f"{student['name']} is in {student['house']}")