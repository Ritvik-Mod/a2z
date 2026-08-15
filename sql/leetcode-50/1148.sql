select distinct author_id as id
from Views
where article_id in (select article_id from Views where author_id = viewer_id)
order by id;