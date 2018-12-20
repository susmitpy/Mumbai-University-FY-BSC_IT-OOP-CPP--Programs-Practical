import os

for file in os.listdir("./"):
    if file[-4:] == ".cpp":
        os.system("g++ -o {} {}".format(file[:-4],file))
