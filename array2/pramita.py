def display_student(name, branch):
    
    if branch== "CSE":
        print("Student Name:", name)
        print("Function: display_student()")
    else:
        print("Student Name:", name)
        print("Branch:", branch)



student_name = input("Enter Student Name: ")
student_branch = input("Enter Branch: ")


display_student(student_name, student_branch)