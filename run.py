
import os

for file in os.listdir('./'):
    if (file[-4:] != ".cpp") and (file[-2:] != "re") and (file[-2:] != "py") and (file[-2:] != "md") and (file[-3:] != "git"):
        os.system("./{}".format(file))
