while True:
    print("1. Celsius to Fahrenheit")
    print("2. Fahrenheit to Celsius")
    print("3. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        c = float(input("Enter temperature in Celsius: "))
        f = (c * 9/5) + 32
        print("Temperature in Fahrenheit: {:.1f}".format(f))
    elif choice == 2:
        f = float(input("Enter temperature in Fahrenheit: "))
        c = (f - 32) * 5/9
        print("Temperature in Celsius: {:.1f}".format(c))
    elif choice == 3:
        break
    else:
        print("Invalid choice. Please try again.")
