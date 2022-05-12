# Write your MySQL query statement below
select e.employee_id from Employees as e where employee_id not in (select employee_id from Salaries) 
union
select s.employee_id from Salaries as s where employee_id not in (select employee_id from Employees) order by employee_id asc;