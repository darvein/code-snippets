--SELECT price + amount AS total FROM items
select COALESCE(price,0) * COALESCE(amount,0) as total from items
