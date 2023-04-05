# a = int(input())
# b = int(input())

# while a < b:
#     if (a % 3) == 0:
#         print(a)
#     a = a + 1
    

# hello_world = "Hello World"
# mystery = ''

# for chara in hello_world:
#     mystery += chara.lower()

# result = 'All Lower' if chara.islower() else 'All Upper'

# print(result)

# a1 = a2 = None
# b = [22, 4, 5, 43, 62, 41, 72, 91, 86, 98, 46]
# for i in b:
#     if (i-1) % 11 == 0:
#         a1 = "ada, yaitu " + str(i)
#     if i % 7 == 0:
#         a2 = i
# if "ada" in a1 or a2 in b:
#     print("hore")
# else:
#     print("yaah")

a = int(input())
for x in range(a):
    for i in range(a):
        if x == i:
            print("x",end='')
        elif i < x:
            print("p",end='')
        else:
            print("q",end='')
    print()