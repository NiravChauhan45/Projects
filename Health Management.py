# Projects

import datetime
def gettime():
    return datetime.datetime.now()
def take(k):
    if k==1:
        c=int(input("Enter 1 for excersise and 2 for food"))
        if(c==1):
            value=input("Type here\n")
            f=open("Paras-ex.txt","a")
                f.write(str([str(gettime())])+": "+value+"\n")
            print("Successfully written")
        elif(c==2):
            value = input("Type here\n")
            with open("Paras-food.txt", "a") as op:
                op.write(str([str(gettime())]) + ": " + value + "\n")
            print("Successfully written")
    elif(k==2):
        c = int(input("Enter 1 for excersise and 2 for food"))
        if (c == 1):
            value = input("Type here\n")
            with open("Nirav-ex.txt", "a") as op:
                op.write(str([str(gettime())]) + ": " + value + "\n")
            print("Successfully written")
        elif (c == 2):
            value = input("Type here\n")
            with open("Nirav-food.txt", "a") as op:
                op.write(str([str(gettime())]) + ": " + value + "\n")
            print("Successfully written")
    elif(k==3):
        c = int(input("Enter 1 for excersise and 2 for food"))
        if (c == 1):
            value = input("Type here\n")
            with open("SatishROy-ex.txt", "a") as op:
                op.write(str([str(gettime())]) + ": " + value + "\n")
            print("Successfully written")
        elif (c == 2):
            value = input("Type here\n")
            with open("SatishROy-food.txt", "a") as op:
                op.write(str([str(gettime())]) + ": " + value + "\n")
            print("Successfully written")
    else:
        print("Plz enter valid input (1(Paras),2(Nirav),3(SatishRoy)")
def retrieve(k):
    if k==1:
        c=int(input("Enter 1 for excersise and 2 for food"))
        if(c==1):
            with open("Paras-ex.txt") as op:
                for i in op:
                    print(i,end="")
        elif(c==2):
            with open("Paras-food.txt") as op:
                for i in op:
                    print(i, end="")
    elif(k==2):
        c = int(input("Enter 1 for excersise and 2 for food"))
        if (c == 1):
            with open("Nirav-ex.txt") as op:
                for i in op:
                    print(i, end="")
        elif (c == 2):
            with open("Nirav-food.txt") as op:
                for i in op:
                    print(i, end="")
    elif(k==3):
        c = int(input("Enter 1 for excersise and 2 for food"))
        if (c == 1):
            with open("SatishRoy-ex.txt") as op:
                for i in op:
                    print(i, end="")
        elif (c == 2):
            with open("SatishRoy-food.txt") as op:
                for i in op:
                    print(i, end="")
    else:
        print("Plz enter valid input (Paras,Nirav,SatishRoy)")
print("Health management system: ")
a=int(input("Press 1 for log the value and 2 for retrieve "))

if a==1:
    b = int(input("Press 1 for Paras 2 for Nirav 3 for SatishRoy "))
    take(b)
else:
    b = int(input("Press 1 for Paras 2 for Nirav 3 for SatishRoy "))
    retrieve(b)
  

       
