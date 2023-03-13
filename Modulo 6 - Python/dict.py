from cs50 import get_string

people = {
    "Luis" : "+55 98 91234-5678",
    "Miguel" : "+55 98 97894-5612"
}

name = get_string("Name: ")

if name in people:
    number = people[name]
    print(f"Number: {number}")