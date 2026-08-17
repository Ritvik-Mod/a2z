select e.name
from Employee as e
where 
    e.id in (
        select m.managerId
        from Employee as m
        group by m.managerId
        having count(m.id)>=5
    );