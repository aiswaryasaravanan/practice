(select city ,CHAR_LENGTH(city)
from station
order by CHAR_LENGTH(city),city
limit 1)
union
(select city ,CHAR_LENGTH(city)
from station
order by CHAR_LENGTH(city) desc,city asc
limit 1)
