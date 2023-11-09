select Name as Employee from Employee as E1
where E1.salary>(select salary from Employee as E2 where E2.id=E1.Managerid);
