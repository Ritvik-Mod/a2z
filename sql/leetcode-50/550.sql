with first_logins as(
    select player_id, min(event_date) as first_log
    from Activity
    group by player_id
)
select round(
        (count(a.player_id) / (select count(distinct player_id) from Activity)
        ),2) as fraction
from Activity a
join first_logins on first_logins.player_id = a.player_id
and a.event_date = date_add(first_logins.first_log, interval 1 day);