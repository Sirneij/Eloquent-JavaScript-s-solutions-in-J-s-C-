# Exercise One

hash = "#"
for i in range(0, 7):
    print(hash)
    hash = hash + "#"


# Exercise two

for i in range(1, 101):
    if i % 3 == 0:
        if i % 5 == 0:
            print("FizzBuzz")
        else:
            print("Fizz")
    elif i % 5 == 0:
        print("Buzz")
    else:
        print(i)

# Exercise three

size = 8
chess_board = ""
for i in range(0, size):
    for j in range(0, size):
        if (i + j) % 2 == 0:
            chess_board = chess_board + " "
        else:
            chess_board = chess_board + "#"
    chess_board = chess_board + "\n"

print(chess_board)
