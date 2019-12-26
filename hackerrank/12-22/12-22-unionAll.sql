
(select concat(name,' (',substring(occupation,1,1),')')
from occupations
group by concat(name,' (',substring(occupation,1,1),')')
order by name asc)
union all
(select concat('There are a total of ',count(occupation),' ',occupation,'s')
from occupations
group by occupation
order by count(occupation) asc,occupation asc)