import csv

students = []
with open("students.csv") as file:
    reader = csv.DictReader(file)
    for file in reader:
        students.append