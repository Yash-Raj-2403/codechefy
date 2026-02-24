/* Write a query to add a column 'Designation' to the table and set 'Null' as the 
    default value. Output the entire table.*/
alter table employee
add column Designation TEXT default NULL;

select *from employee;