select r.contest_id,
       round(
            ifnull(
                    count(r.user_id)
                    / nullif(
                        (select count(*) from Users)
                        ,0) 
                    ,0
                    )*100 
                    ,2
       ) as percentage
from Register r
left join Users u
on r.user_id = u.user_id
group by r.contest_id
order by percentage desc, r.contest_id;