import csv

students = []
with open("Students.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        students.append({"name": row['name'], "home": row['home']})