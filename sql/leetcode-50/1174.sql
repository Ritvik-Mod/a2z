with t as (
    select customer_id, min(order_date) as first_order
    from Delivery
    group by customer_id
)
select round(
    100*(sum(case when d.order_date = d.customer_pref_delivery_date then 1 else 0 end)/
count(*)),2
) as immediate_percentage
from t
join Delivery d
on t.customer_id = d.customer_id
and d.order_date = t.first_order;