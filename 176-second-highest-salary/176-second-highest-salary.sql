# Write your MySQL query statement below
SELECT max(Salary) SecondHighestSalary from employee where salary < (select max(salary) from employee);