/*Design an algorithm and write a to read an employee name, weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%)?*/

Algorithm
start
intput(employee name,weekly woking hour,bouns rate per hour,base salary)
bouns = bouns rate*weekly working hour
gross salary=base salary+bouns 
tax=15/100*gross salary
pension=5/100*base salary
net salary=gross salary-tax-pension
print net salary,gross salary,bouns 
end
