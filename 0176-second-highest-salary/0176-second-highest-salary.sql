# Write your MySQL query statement below
# select  max(salary) as SecondHighestSalary
# from employee
# where salary < (select max(salary)from employee);

# // second method

# select distinct salary as SecondHighestSalary from employee
# order by salary desc
# limit 1,1;


# SELECT MAX(salary) AS SecondHighestSalary 
# FROM employee e1
# WHERE 1 = (
#     # select COUNT (DISTINCT salary)
#     SELECT COUNT(DISTINCT salary)
#     FROM employee e2
#     WHERE e2.salary > e1.salary
# );


SELECT MAX(salary) AS SecondHighestSalary
FROM employee e1
WHERE 1 = (
    SELECT COUNT(DISTINCT salary)
    FROM employee e2
    WHERE e2.salary > e1.salary
);
