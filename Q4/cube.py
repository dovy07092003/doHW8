# File name: cube.py
# Print out the cube of odd number from 0 to 19
# or even number if they are even
# To run: python cube.py

for i in range(20):
    if i%2 == 1:
        print(i*i*i)
    else:
        print(i)
