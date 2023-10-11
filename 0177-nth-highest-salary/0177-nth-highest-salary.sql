CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN  DECLARE M INT;
SET M=N-1;
RETURN (
    # Write your MySQL query statement below.
    # method - 1
    # SELECT MAX(salary) AS getNthHighestSalary
    #    from employee e1
    #    where n-1 = (
    #        select count(distinct salary)
    #        from employee e2
    #        where e2.salary>e1.salary
    #    )

    # method - 2
      select distinct salary as getNthHighestSalary
      from employee
      order by salary desc
      limit 1 offset M
     );
END