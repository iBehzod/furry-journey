# is_male = False
# is_tall = True

# if is_male and is_tall:
#     print("You are tall")
# elif is_tall and not(is_male):
#     print("You are a woman")
# else:
#     print("You have no gender")



        # If Statements & Comparisons




# def max_number(num1, num2 , num3):
#     if num1 >= num2 and num1 >= num3:
#         return num1
#     elif num2 >= num1 and num2 >= num3:
#         return num2
#     else:
#         return num3



# print(max_number(2, 4 , 4))




        ### Creating a calculator ###

# num1 = float(input("Enter first number : "))
# op = input("Enter operator: ")
# num2 = float(input("Enter second number : "))

# if op == "+":
#     print(num1 + num2)
# elif op == "-":
#     print(num1 - num2)
# elif op == "/":
#     print(num1 / num2)
# elif op == "*":
#     print(num1 * num2)
# else:
#     print("Error")


        ### Dictionaries ###


# request = input("Enter a month u want, gotcha?: ")

# monthConversions = {'Jan' : 'January',
#                     'Feb' : 'February',
#                     'Mar' : 'March',
#                     'Apr' : 'April',
#                     'Jun' : 'June',
#                     'Jul' : 'July',
#                     'Aug' : 'August',
#                     'Sep' : 'September',
#                     'Oct' : 'October',
#                     'Nov' : 'November',
#                     'Dec' : 'December',
                    

# }

# print(monthConversions.get(request, "Bruh, make first latter in upper case, okay?"))




        ### While Loop ###

# n = 1

# while n <= 10:
#     print(n)
#     n += 1

 

        ### Basic guessing game ####

# secret_word = 'Bekhzod'
# guess = ""
# guess_count = 0
# guess_limit = 3
# out_of_guesses = False

# while guess != secret_word and not(out_of_guesses):
#     if guess_count < guess_limit:
#         guess = input("Enter a  guess: ")
#         guess_count +=  1
#     else:
#         out_of_guesses = True

# if out_of_guesses:
#     print("Out of guesses, YOU LOSE!")
# else:
#     print("You win!")
                            ### to be continued
    

        ### For Loop ###


friends = ['Mirkom', 'Aziz', 'Shahzod']

for index in range(5): 
    if index == 0:
        print("First iteration")
    else:
        print("Not first")
