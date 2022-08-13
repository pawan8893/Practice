# Write your MySQL query statement below
SELECT E1.name as Employee from Employee E1 where salary>(select salary from Employee E2 where E2.id=E1.managerId);
