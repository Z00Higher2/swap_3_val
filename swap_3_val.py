#this program swaps its three arguments to arrange them in sorted order

def sort3(a, b , c):
    if (a > b):
        a , b = b , a
    if (b > c):
        b , c = c, b
    if (a > b):
        a , b = b, a

    return a, b ,c

def main():
    a = int(input("Enter a number: "))
    b = int(input("Enter b number: "))
    c = int(input("Enter c number: "))

    print(sort3(a,b,c))

main()

    