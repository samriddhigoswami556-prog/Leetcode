# Write your MySQL query statement below
SELECT NAME AS Customers FROM CUSTOMERS WHERE id NOT IN (SELECT customerId FROM ORDERS);