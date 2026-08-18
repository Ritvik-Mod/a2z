with b as(
    select product_id, min(`year`) as `year`
    from Sales
    group by product_id
)
select s.product_id, s.`year` as first_year, s.quantity, s.price
from Sales s
join b on b.product_id = s.product_id
and s.`year` = b.`year`;