def main():
    width = get_width()
    for i in range(width):
        print("?",end="")
    print()
    
def get_width():
   while True:
        try:
            number = int((input("What's width? ")))
            if number > 0:
                return number  
        except ValueError:
            # print("Invalid input")    
            pass
    





if __name__ == "__main__":
    main()