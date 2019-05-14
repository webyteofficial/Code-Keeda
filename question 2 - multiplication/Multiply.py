from functools import reduce
class MonkSolution(object):
    def convert(self,i):
        m = {'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9}
        return m[i]
    def Monkmultiply(self, num1, num2):
        if num1 == '0' or num2 == '0': return '0'
        if num1 == '1': return num2
        if num2 == '1': return num1
        i =
        j = 
        return str(i * j)
emp=MonkSolution()
num1=input()
num2=input()
print(emp.Monkmultiply(num1,num2))
