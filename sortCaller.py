import subprocess
from time import sleep

nums = list(range(10000, 0, -1))
print("Starting Python")
nums.sort()
print("Python Done")
str = " ".join([str(i) for i in nums])
print("Sleeping 3 seconds")
sleep(3)
print("Starting C++")
output = subprocess.check_output("./sort {} s".format(str), shell=True)
print(output)
