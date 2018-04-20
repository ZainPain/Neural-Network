import math
import sys

dataset = [[1.0,1.0],[.4,5.2],[-2.8,-1.1],[3.2,1.4],[-1.3,3.2],[-3,3.1]]
arg1 = float(raw_input("arg1\n"))  #open(sys.argv[1])
arg2 = float(raw_input("arg2\n"))  #open(sys.argv[1])
j = 0
print "\n"
for i in dataset:
    j+=1
    print j

    distance = math.sqrt(math.pow(arg1-i[0],2) + math.pow(arg2-i[1],2))
    print distance


# if __name__ == '__main__':


