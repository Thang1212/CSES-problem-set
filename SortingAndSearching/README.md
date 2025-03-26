## Continuing developing this project

### Apartments

- How can we use for and while loop to find the appropriate apartment for the applicant?

### Ferris Wheel

- Does sorting can help us find the matches? 
- If sorting, How can we find the match between the first and others last one
- And if, the first and the next last one is the match, how can we count the last next time?
	- We will count how many combo and we see every combo as 1 and let n - numberOfCombo
	- A combo can has multiple child

### Concert Tickets

- Customers arrive in order, so we must not sort it 
- Price of each ticket can be sort in order to find the appropriate for customer and then delete it (bc it taken) 
	- So that we need to use set (sort, delete, lower bound)
	- But there are tickets that the same price, so we use set<ar<int, 2>>, to store price and index to make it unique
	- Lower bound in set will return the first value whose value at least x
	- Upper bound in set will return the first value whose value more than x

### Restaurant Customer

- You need to rethink the approach, you dont' need to find the time when there are the most people
- You think this is a max element in the array problem
- The comming is +1 and the leaving is -1, so we sort the coming and the leaving time
	- So we using set<ar<int, 2>> again, to sort and store +1, -1 at the same time
- And all arrival and leaving is distinct because set is not allow undistinct, so if not distinct, we need to find another approach

### Movie Festival

- The more time movie ends fast, the more we can watch movies 
- So we need to sort the ending time and then compare the starting with the ending if we can watch the next movie

### Sum of Two Values

- The easiest way is to use map generalized array, because it has find(), insert(), erase() method
- How do the map work? It's like object in JS, contains of key and values
- find() method will find the key

### Maximum Subarray Sum

- It is a little bit different from maximum array sum
- Maximum subarray sum, we need to compare between current x element and x + msf 
- So that we can decide to accept it or not

### Stick Lengths

- This idea of problem is well-known
- Sort the array of stick, make the medium stick (p[n/2]) to be the standard stick 
- Why not take the average length of those stick? Because of the outlier would be affect the cost 

### Playlist

- Longest sequence of unique songs 
- The approach is find the range where the start and the end is the same, so the element between them is unique
- So the array need to store element and does it visit or not
- We can think about ar<int, 2>, set<ar<int, 2>>, map<int, int>
	- ar: cannot find
	- set: we don't need sort here
	- map: we need a key to set it visit anytime

### Towers

- Given n cubes in certain order, so that we cannot sort in this case
- Given element, we need to find are there any cube larger than it
	- If yes, we put on top
	- If no, we begin new tower
- So we decide to using vector<int>, because it allow us to use upper pound (find that any element larger)
- In vector<int>, we just need to store the top cube, every next cube must be smaller than it or not
- it = upper(v.begin(), v.end(), k) - v.begin()
	- Upper pound will return address
	- If we minus v.begin(), it will be like an index

### Traffic Lights

- You need to maintain the traffic light and maintain the maximum length of passage when add on
	- set<int> to maintain traffic light and the end, the start of the road
	- map<int, int> to maintain the distance between 2 traffic light, map will auto sort the keys, so that the end of map will be the maximum passage without traffic light
	- The value of map would be store, if this distance need to remove or not

### Room Allocation

- The problem need how many room are there and these customer have what room's number 
- We need to sort the departure day for sure, because we want minimum room
- And we need to maintain room, where room has customer with departure day and room's number
	- ans[mxN] to let us know order customer has what room's number
	- ar<int, 3> because we need to sort departure day, arrival day also need order customer
	- set<ar<int, 2>> maintain room that already have customer

### Factory Machines

- The problem require us to find minimum time, so search for the approriate time using binary search
	- So that we will have a large range from 0 to 1e18 (:death)
- Why using min when find the product, because the time to large will produce large product, we just choose the min 1e9 to have a little faster algorithm

### Tasks and Deadlines

- Doing tasks optimally, obviously, you need to start with task that has short duration, so that sort the duration
- And the rest is add on the previous hour, then take the deadline minus the add on hour to get the reward

### Reading Books

- Waiting until the book had done reading by another people, so the minimum time will be double the longest reading book's time
- Or in some cases, it will be the total time of all the book

### Sum of Three Values

- Do we need to sort the array? Yes, so that we can loop down to find the exact result
- You need to isolate the sum to be 2 values, so that we can find it more easier

### Sum of Four Values

- We can implement it like three and two values
- Though, we can use another way like unordered map
	- Why unordered map? Because, find() method will take only O(1) in this case
	- Remember to allocate memory for the problem (using reserve method)
- What does 1<<22 mean in cpp?
	- 1 << 22 means that the bits of the number 1 (which is represented as 00000001 in binary) are shifted 22 positions to the left.
	- With each left shift, the bits are effectively multiplied by 2. In this case, 1 << 22 would be equivalent to 2^22, i.e., raising 2 to the power of 22. (2^22)

### Nearest Smaller Values

- We use 2 arrays:
	- First, storing element, for sure
	- Second, store the index where that index element is nearest left smaller
- That second array will store the previous index, at element 0 it will be -1
- So will shift left gradually

### Subarray Sum 1

- Using add on sum s and minus it with current value a[i]
- Using map<ll, int>
    - First, storing s - a[i], so that we can find this value in the future
    - Second, counting how many s - a[i] value
- Does it guarantee that the subarray would be continuosly?
    - Yes

### Subarray Divisibility

- The condition of a number to divisiblity (by n) is that the number should construct by n * x
- So again we using map<ll, int>
	- First, storing the remainder when dividing
	- Because, 3 % 2 and 5 % 2 = 1, has the same remainder, then 3 + 5 % 2 = 0
	- Second, storing the frequency of it 
- The sum s = (s + a[i] % n + n) % n
	- First, a[i] % n, because we need to compress it, to find same remainder easier
	- Second, plus more n to avoid zero division

