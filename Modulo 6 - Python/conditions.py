import cs50 

x = cs50.get_int("X: ")
y = cs50.get_int("Y: ")

if x<y:
    print("X < Y")
elif x>y:
    print("X > Y")
else:
    print("X = Y")