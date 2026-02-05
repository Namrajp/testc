import sys

def main():
   if (len(sys.argv) != 2): 

        print("Invalid number of arguments.")

   else:
        say_hello(sys.argv[1])


def say_hello(name):
    print(f"Hello, {name}!")



main()
