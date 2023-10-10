# Write your MySQL query statement below
# select person.firstName, person.lastName, address.city, address.state
# from person
# left join address
# on address.personId = person.personId;
select p.firstName, p.lastName, a.city, a.state
from person p
left join address a
on a.personId  = p.personId;