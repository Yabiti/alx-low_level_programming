import csv

name = input("what's your name? ")
home = input("wher's your home? ")

with open("Students.csv") as file:
    writer = csv.DictWriter(file, fieldnames=['name', 'home'])