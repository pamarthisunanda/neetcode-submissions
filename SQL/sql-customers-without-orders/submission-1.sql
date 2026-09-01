-- Write your query below
select name
from customers
left join orders
on customers.id=orders.customer_id
where customer_id is NULL;