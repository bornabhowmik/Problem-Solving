# N = int(input())

# arr = []

# for _ in range(N):
#     command = input().split()

#     # command will store in command[0]
#     # i or position = command[1]
#     # e or elemet = command[2]

#     if command[0] == 'insert':
#         arr.insert(int(command[1]), int(command[2]))
#     elif command[0] == 'print':
#         print(arr)
#     elif command[0] == 'remove':
#         arr.remove(int(command[1]))
#     elif command[0] == 'append':
#         arr.append(int(command[1]))
#     elif command[0] == 'sort':
#         arr.sort()
#     elif command[0] == 'print':
#         print(arr)
#     elif command[0] == 'pop':
#         arr.pop()
#     elif command[0] == 'reverse':
#         arr.reverse()
    
    
    
    
    
    
# #     # alt + shift + down arrow
# #     # ctrl + /
# #     #print(arr)

# # if __name__ == '__main__':
# #     N = int(input())  # Number of commands
# #     arr = []  # Initialize an empty list

# #     for _ in range(N):
# #         command = input().split()
# #         cmd = command[0]  # Extract the command name
# #         args = list(map(int, command[1:]))  # Extract arguments as integers
        
# #         # Handle the command
# #         if cmd == 'insert':
# #             arr.insert(args[0], args[1])
# #         elif cmd == 'print':
# #             print(arr)
# #         elif cmd == 'remove':
# #             arr.remove(args[0])
# #         elif cmd == 'append':
# #             arr.append(args[0])
# #         elif cmd == 'sort':
# #             arr.sort()
# #         elif cmd == 'pop':
# #             arr.pop()
# #         elif cmd == 'reverse':
# #             arr.reverse()


n = int(input())

arr = []

for _ in range(n):
    cmd = input().split()

    if cmd[0] == "insert":
        arr.insert(int(cmd[1]), int(cmd[2]))
    elif cmd[0] == "print":
        print(arr)
    elif cmd[0] == "remove":
        arr.remove(int(cmd[1]))
    elif cmd[0] == "append":
        arr.append(int(cmd[1]))
    elif cmd[0] == "sort":
        arr.sort()
    elif cmd[0] == "print":
        print(arr)
    elif cmd[0] == "pop":
        arr.pop()
    elif cmd[0] == "reverse":
        arr.reverse()
    


    
        
        