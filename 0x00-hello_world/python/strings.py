with open("students.csv") as file:
    for line in file:
        row = line.rstrip().split()