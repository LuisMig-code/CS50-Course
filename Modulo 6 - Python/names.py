import sys

names = ["Bill" , "charlie" , "Fred" , "George" , "Ginny" , "Percy" , "Ron"]

if "Ron" in names:
    print("Found")
    sys.exit(0)
else:
    print("Not found")
    sys.exit(1)