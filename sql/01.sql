SELECT Name from customer 
Where refree_is NULL OR refree_id <>2;
- This means that fetch the name form the customer table where value can be null but not the  refree_id = 2 ,
 
 OR operator return the result where atleast one condition 