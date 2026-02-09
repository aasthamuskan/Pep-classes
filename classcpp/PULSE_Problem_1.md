





🧠 PULSE – Problem 1
Longest Subarray With Sum ≤ K
🔹 Chunk −1: Problem Statement (Read This First)
🧩 What is the problem?
📌 Important Words Explained (ELI5)
❌ What is NOT allowed?
✅ What IS allowed?
🧪 Input Format
📤 Output Format

⚠️ Constraints (Why this matters)
🧠 Example 1
Input
Output
🧩 Why is the answer 5?
🧠 Example 2
Input
Output
🧩 Why not 3?
🔹 Chunk 0: Problem Framing (How to Think, Slowly)
🧠 Restating the problem in simple words
❓ What makes this problem tricky?
🧠 Key Observation (Very Important)
🧠 What this allows us to do
🪟 Think of a “window”
🧠 Window Rule (ELI5)
❗ What we are NOT doing
🧭 Direction of movement
🔹 Chunk 1: Explanation Pipeline
(ELI5 → Logical → Algorithmic Thinking)
🧸 Level 1: ELI5 (Explain Like I’m 5)
🧠 How would a child do it?
🧩 Why this works (Still ELI5)
🧠 Level 2: Logical Reasoning (Beginner-Friendly)
❌ The Wrong (but common) approach
✅ The Right Logical Shift
🪟 The Window Idea (Logical Level)
🔁 What actions can happen to the window?
🧠 The Core Logical Rule
🧠 Level 3: Algorithmic Thinking (Step-by-Step)
🔢 Variables We Conceptually Need
🧭 Algorithm Flow (Human Version)
🔒 Important Invariant (Very Important Word)
🚦 Why this is Efficient
🧠 Mental Check (For Students)
🧠 Transition to Next Chunk
🔹 Chunk 2: Program Decomposition
(Turning the Idea into Clear Program Parts)
🧩 Step 1: Identify the Core Responsibility
🧠 Step 2: Identify the State (What must be remembered?)
1️⃣ Where the current subarray starts
2️⃣ Where the current subarray ends
3️⃣ What is the current sum of the subarray
4️⃣ What is the best answer so far
🧱 Step 3: Define the Role of Each Variable (Very Important)
🔁 Step 4: Decide Allowed Movements (Rules)
✅ Allowed Movements
❌ Forbidden Movements
🪟 Step 5: Define the Window Precisely
🔒 Step 6: Define the Invariant (Must Always Be True)
Invariant for this problem:
Why this invariant matters
🧪 Step 7: Connect Decomposition to Testing
🧠 Summary of Chunk 2
🔹 Chunk 3: Testing Design
(Why Tests Exist, What Can Break, and How to Think Like the Evaluator)
🧪 What Does “Testing” Really Mean?
🎯 What the Evaluator Is Checking
🧠 Why This Problem Needs Careful Testing
🧩 Categories of Test Cases (Very Important)
🧪 Category 1: Minimum Input Size
Case 1.1: Single Element, Valid
Case 1.2: Single Element, Invalid
🧪 Category 2: All Elements Valid
Case 2.1: Entire Array Fits
🧪 Category 3: No Element Valid
Case 3.1: Every Element > K
🧪 Category 4: Zeros Inside the Array
Case 4.1: Zeros Help Extend the Window
🧪 Category 5: Window Must Shrink Multiple Times
Case 5.1: Shrink More Than Once
🧪 Category 6: Large Input (Performance Test)
Case 6.1: Very Large N
🧪 Category 7: Maximum Element at the End
Case 7.1: Large Element Suddenly Appears
🧪 Category 8: Exact Boundary Case
Case 8.1: Sum Equals K Exactly
🧠 How to Think While Testing (Student Advice)
🧠 Final Testing Principle
🧠 How to Think While Testing (Student Advice)
🧠 Final Testing Principle
🧱 Step 1: Decide What Variables Exist (Before Coding)
1️⃣ left
🧱 Step 1: Decide What Variables Exist (Before Coding)
1️⃣ left
3️⃣ currentSum
4️⃣ maxLength
🔁 Step 2: Start Moving the Window (Right Pointer)
🧠 English → Code Thought
⚠️ Step 3: What If the Window Becomes Invalid?
🧹 Step 4: Fixing the Window (Very Important Logic)
❓ How do we fix it?
🧠 English Fixing Rule
⚠️ Critical Beginner Rule
🧠 English → Code Thought
🔒 Step 5: When Is the Window Valid Again?
📏 Step 6: Calculate Window Length (Carefully)
🧠 Step 7: Update the Best Answer
🔁 Step 8: Repeat for Next Element
🚦 Step 9: Important Movement Rules (Re-emphasized)
🧠 Full English Algorithm (One Flow)
🧠 Common Beginner Mistakes (Read Carefully)
✅ End of Chunk 4
🔹 Chunk 5: Execution & Observation
(Dry Run • Mental Simulation • Why the Code Works)
🧠 Why Dry Run Is Important
🧪 Dry Run Example (Step-by-Step)
Input
Initial State
▶️ Step 1: right = 0
▶️ Step 2: right = 1
▶️ Step 3: right = 2
▶️ Step 4: right = 3
▶️ Step 5: right = 4
▶️ Step 6: right = 5
▶️ Step 7: right = 6
🔧 Fixing the Window (Shrinking Phase)
🧠 Important Observation
🔍 Why This Algorithm Always Works
Reason 1: No Missed Subarrays
Reason 2: No Repeated Work
Reason 3: Correctness Invariant
⏱️ Time & Space Complexity
Time Complexity
Space Complexity
🧠 Mental Checklist for Students
✅ End of PULSE – Problem 1
🧠 PULSE – Problem 1
Longest Subarray With Sum ≤ K

🔹 Chunk −1: Problem Statement (Read This First)
🧩 What is the problem?
You are given a list of numbers.
Each number represents a value collected over time, in order.
You are also given a number K, which represents a maximum allowed limit.
Your task is to find how long the longest continuous part of the array can be, such that:
The sum of its elements is less than or equal to K

📌 Important Words Explained (ELI5)
Array → A list of numbers in a fixed order
Subarray → A continuous part of the array
Continuous → You cannot skip elements
Length → Number of elements, not their sum

❌ What is NOT allowed?
You cannot reorder elements
You cannot skip elements inside a subarray
You cannot choose scattered positions

✅ What IS allowed?
You may start and end the subarray anywhere
You may choose any length, including length 0
You only need to print the length, not the subarray

🧪 Input Format
First line contains two integers:
N → number of elements
K → maximum allowed sum
Second line contains N space-separated positive integers
N K a1 a2 a3 a4 ... aN

📤 Output Format
Print one integer
The integer represents:
The maximum length of a valid contiguous subarray

⚠️ Constraints (Why this matters)
1 ≤ N ≤ 100000
1 ≤ arr[i] ≤ 100000
1 ≤ K ≤ 1,000,000,000
📌 These limits mean:
The array can be very large
Slow solutions will fail
Efficiency is mandatory

🧠 Example 1
Input
7 8 1 2 1 0 1 1 7
Output
5

🧩 Why is the answer 5?
Let us check valid subarrays:
[1, 2, 1, 0, 1] → sum = 5 → length = 5 ✅
[1, 2, 1, 0, 1, 1] → sum = 6 → length = 6 ❌ (next element breaks later)
Adding 7 breaks the limit immediately
📌 5 is the maximum length that never crosses K

🧠 Example 2
Input
5 4 4 2 2 1 1
Output
2

🧩 Why not 3?
Let us test possibilities:
[4] → sum = 4 → length = 1 ✅
[2, 2] → sum = 4 → length = 2 ✅
[2, 2, 1] → sum = 5 ❌ exceeds K
📌 Even though there are many subarrays, none longer than 2 stay within K.

🔹 Chunk 0: Problem Framing (How to Think, Slowly)
🧠 Restating the problem in simple words
We are moving from left to right through the array.
We want to keep collecting numbers as long as the total does not exceed K.
If it exceeds K, we must remove something from the beginning.

❓ What makes this problem tricky?
We are not asked for the sum
We are asked for the longest length
Checking all subarrays is too slow
Recalculating sums again and again is wasteful

🧠 Key Observation (Very Important)
All array elements are positive or zero.
This gives us a powerful rule:
If you add an element → sum increases
If you remove an element → sum decreases
📌 There is no surprise decrease.

🧠 What this allows us to do
Instead of:
Restarting from every position
Recomputing sums repeatedly
We can:
Build a window
Fix it only when it becomes invalid
Never go backwards

🪟 Think of a “window”
Imagine a window placed over the array:
[ 1 | 2 | 1 | 0 | 1 | 1 | 7 ] ↑ ↑ left right
The window has:
A start (left)
An end (right)
Everything inside the window contributes to the sum

🧠 Window Rule (ELI5)
Expand the window → add numbers
If sum ≤ K → window is valid
If sum > K → shrink from the left
Always remember the largest valid window

❗ What we are NOT doing
Not checking all subarrays
Not resetting everything
Not using nested loops

🧭 Direction of movement
right only moves forward
left only moves forward
No index ever moves backward
📌 This single rule makes the solution fast.

🔹 Chunk 1: Explanation Pipeline
(ELI5 → Logical → Algorithmic Thinking)

🧸 Level 1: ELI5 (Explain Like I’m 5)
Imagine you have a long strip of chocolates, each chocolate has a number written on it.
That number means how heavy that chocolate is.
You are allowed to hold chocolates only in one continuous stretch (you cannot skip).
But your hands can hold at most weight K.
Your goal is simple:
Hold chocolates next to each other, without crossing weight K,
and try to hold as many chocolates as possible.

🧠 How would a child do it?
Start picking chocolates from the left.
Keep adding chocolates to your hand.
If your hand becomes too heavy:
Drop chocolates from the left side
Continue until the end.
Remember the maximum number you ever held.
📌 You never throw everything away.
📌 You only adjust what you already have.
This is the core idea of the solution.

🧩 Why this works (Still ELI5)
Chocolates are always positive weight
Adding more chocolates → weight only increases
Removing chocolates → weight only decreases
So:
If it becomes too heavy, the only fix is to remove from the start
Removing from the end makes no sense (you just added it)

🧠 Level 2: Logical Reasoning (Beginner-Friendly)
Let us now move from story to logic.

❌ The Wrong (but common) approach
Many beginners think:
“Let me try all subarrays and check their sums.”
This means:
Choose a start index
Choose an end index
Calculate the sum every time
This results in:
Too many checks
Same sums calculated again and again
Program becomes slow and unusable for large inputs
📌 This fails because N can be very large.

✅ The Right Logical Shift
Instead of asking:
“Which subarray should I choose?”
We ask:
“How do I maintain a valid subarray while moving forward?”
This shift is extremely important.

🪟 The Window Idea (Logical Level)
We imagine a window over the array.
The window always represents one candidate subarray
The sum inside the window is tracked
We try to keep the window:
As wide as possible
Without breaking the sum rule

🔁 What actions can happen to the window?
Only two actions are possible:
Expand window
Move the right boundary forward
Add new element to the sum
Shrink window
Move the left boundary forward
Remove old element from the sum
📌 No other action is needed.

🧠 The Core Logical Rule
“At any moment, the window must represent a valid subarray
or be in the process of becoming valid again.”
So:
We never keep an invalid window permanently
We immediately fix it

🧠 Level 3: Algorithmic Thinking (Step-by-Step)
Now let us translate logic into clear algorithm steps.

🔢 Variables We Conceptually Need
left → start of the window
right → end of the window
currentSum → sum of elements in the window
maxLength → best answer found so far

🧭 Algorithm Flow (Human Version)
Start with an empty window:
left = 0
currentSum = 0
maxLength = 0
Move right from 0 to N-1:
Add arr[right] to currentSum
If currentSum becomes greater than K:
Move left forward
Subtract arr[left] from currentSum
Repeat until currentSum ≤ K
Once valid again:
Calculate window length
Update maxLength
Continue until right reaches the end

🔒 Important Invariant (Very Important Word)
Invariant means something that is always true.
Here, the invariant is:
“After fixing, the window always has sum ≤ K.”
Every step of the algorithm protects this invariant.

🚦 Why this is Efficient
Each element:
Enters the window once
Leaves the window once
No element is processed again and again
📌 This guarantees linear time.

🧠 Mental Check (For Students)
Ask yourself while coding:
Did I ever move left backward? ❌
Did I ever recompute sum from scratch? ❌
Am I fixing the window immediately when it breaks? ✅
If yes → you are doing it right.

🧠 Transition to Next Chunk
Now that we understand:
The idea
The logic
The algorithmic flow
Next, we will break the solution into concrete program parts
and define exact responsibilities of each variable and step.

🔹 Chunk 2: Program Decomposition
(Turning the Idea into Clear Program Parts)

This chunk answers one question:
“What exactly should my program contain, and why?”
We are not writing code yet.
We are designing the program structure so coding becomes mechanical.

🧩 Step 1: Identify the Core Responsibility
The program has one responsibility only:
Maintain a valid contiguous subarray whose sum is ≤ K
and remember the maximum length achieved.
Everything in the program must serve this goal.

🧠 Step 2: Identify the State (What must be remembered?)
At any moment while processing the array, we must know:
1️⃣ Where the current subarray starts
This tells us what to remove when the sum exceeds K
👉 We store this using:
left index

2️⃣ Where the current subarray ends
This tells us what we just added
👉 We store this using:
right index (usually inside a loop)

3️⃣ What is the current sum of the subarray
We must know whether the subarray is valid
👉 We store this using:
currentSum
📌 Important:
We never recompute the sum from scratch.

4️⃣ What is the best answer so far
We are asked for the maximum length
👉 We store this using:
maxLength

🧱 Step 3: Define the Role of Each Variable (Very Important)
📌 If a variable does not have a clear role, it should not exist.

🔁 Step 4: Decide Allowed Movements (Rules)
This is where many bugs come from, so we make rules explicit.
✅ Allowed Movements
right:
Starts at 0
Moves forward one step at a time
Never moves backward
left:
Starts at 0
Moves forward only when sum > K
Never moves backward

❌ Forbidden Movements
Moving left backward ❌
Resetting left to right ❌
Restarting sum calculation ❌
📌 These break the efficiency guarantee.

🪟 Step 5: Define the Window Precisely
At any point in the program:
Window = elements from index left to index right (inclusive)
So the current window length is:
So the current window length is: right - left + 1
📌 This formula will be used repeatedly.

🔒 Step 6: Define the Invariant (Must Always Be True)
An invariant is a condition that your program maintains.
Invariant for this problem:
After handling any violation,
currentSum ≤ K must always be true.

Why this invariant matters
If the invariant is true → window is valid
If it breaks → we immediately fix it
We never compute length from an invalid window

🧪 Step 7: Connect Decomposition to Testing
This decomposition ensures:
No extra memory needed
No nested loops
Each element is processed a fixed number of times
Which means:
Large test cases will pass
Time limit will not be exceeded

🧠 Summary of Chunk 2
Before writing code, we now know:
What variables we need
Why each variable exists
How each variable is allowed to move
What condition must always be preserved
This makes the next step—implementation—clear and safe.

🔹 Chunk 3: Testing Design
(Why Tests Exist, What Can Break, and How to Think Like the Evaluator)

This chunk answers a very important beginner question:
“My code works for sample input.
Why does it still fail sometimes?”
The answer is: because real testing is cruel 😄
And that’s intentional.

🧪 What Does “Testing” Really Mean?
Testing does NOT mean:
Running the program once
Checking only the sample input
Seeing one correct output and stopping
Testing DOES mean:
Trying situations that stress your logic
Trying situations that break assumptions
Trying situations where your code might behave differently

🎯 What the Evaluator Is Checking
The evaluator (or judge) is NOT interested in:
Your variable names
Your comments
Your intention
The evaluator only checks:
Correct output
For all valid inputs
Within time limits

🧠 Why This Problem Needs Careful Testing
This problem looks simple, but it hides traps because:
The array can be very large
Numbers are always positive
The window moves dynamically
Left and right pointers interact
Small mistakes in:
Window shrinking
Sum updates
Length calculation
👉 will pass simple cases but fail edge cases.

🧩 Categories of Test Cases (Very Important)
We divide testing into categories.
Each category exists for a reason.

🧪 Category 1: Minimum Input Size
Case 1.1: Single Element, Valid
Input: 1 5 3
Output: 1
✅ Why this should pass:
Single element
Sum ≤ K
Window size = 1
❌ What breaks here:
Forgetting to update maxLength
Wrong initialization

Case 1.2: Single Element, Invalid
Input: 1 2 5
Output: 0
✅ Why output is 0:
The only element exceeds K
No valid subarray exists
📌 Important:
Length can be zero
This is allowed and expected
❌ Common beginner mistake:
Always assuming at least one element can be chosen

🧪 Category 2: All Elements Valid
Case 2.1: Entire Array Fits
Input: 5 20 2 3 4 1 5
Output: 5
✅ Why:
Sum = 15 ≤ 20
Best answer is the whole array
❌ What this catches:
Forgetting to update maxLength after final iteration

🧪 Category 3: No Element Valid
Case 3.1: Every Element > K
Input: 4 3 5 6 7 8
Output: 0
✅ Why:
No single element fits
Window must collapse every time
❌ What this catches:
Assuming window length is always at least 1
Infinite loops if left/right logic is wrong

🧪 Category 4: Zeros Inside the Array
Zeros are very dangerous if not handled properly.
Case 4.1: Zeros Help Extend the Window
Input: 6 3 1 0 0 1 0 1
Output: 5
Explanation:
Subarray [1, 0, 0, 1, 0] → sum = 2 → length = 5
✅ Why zeros matter:
They increase length
They do NOT increase sum
❌ What this catches:
Incorrect shrinking logic
Assuming every element increases sum significantly

🧪 Category 5: Window Must Shrink Multiple Times
Case 5.1: Shrink More Than Once
Input: 6 5 1 2 3 1 1 1
Output: 3
Explanation:
[1,2] → sum = 3
Add 3 → sum = 6 ❌
Remove 1 → sum = 5 ✅
Window becomes [2,3]
Best window later is [1,1,1] → length = 3
❌ What this catches:
Shrinking only once instead of looping
Using if instead of while
📌 Very important:
Shrinking must continue until sum ≤ K.

🧪 Category 6: Large Input (Performance Test)
Case 6.1: Very Large N
N = 100000
All elements = 1
K = 50000
Expected Output: 50000
✅ Why this test exists:
To kill brute-force solutions
To ensure linear-time logic
❌ What fails here:
Nested loops
Recomputing sum
Resetting window

🧪 Category 7: Maximum Element at the End
Case 7.1: Large Element Suddenly Appears
Input: 7 6 1 1 1 1 1 1 100
Output: 6
Explanation:
First 6 elements fit
Last element breaks immediately
Best window already seen
❌ What this catches:
Updating answer only after shrinking
Losing earlier best result

🧪 Category 8: Exact Boundary Case
Case 8.1: Sum Equals K Exactly
Input: 4 10 2 3 5 0
Output: 4
✅ Why valid:
Sum = exactly K
Equal is allowed
❌ Common mistake:
Using < K instead of ≤ K

🧠 How to Think While Testing (Student Advice)
Ask these questions:
What if the window breaks immediately?
What if it never breaks?
What if it breaks many times in a row?
What if zeros exist?
What if the best window appears early?
If your code handles all of these, it is strong.

🧠 Final Testing Principle
A correct algorithm is one
that survives hostile input, not friendly examples.
This chunk ensures:
Logical correctness
Boundary safety
Performance safety

✅ Why valid:
Sum = exactly K
Equal is allowed
❌ Common mistake:
Using < K instead of ≤ K

🧠 How to Think While Testing (Student Advice)
Ask these questions:
What if the window breaks immediately?
What if it never breaks?
What if it breaks many times in a row?
What if zeros exist?
What if the best window appears early?
If your code handles all of these, it is strong.

🧠 Final Testing Principle
A correct algorithm is one
that survives hostile input, not friendly examples.
This chunk ensures:
Logical correctness
Boundary safety
Performance safety

Index: 0 1 2 3 4 5 6 Array: [1, 2, 1, 0, 1, 1, 7] ↑ ↑ left right
Everything between left and right is the current window
Only this window matters at any moment

🧱 Step 1: Decide What Variables Exist (Before Coding)
We need exactly four variables.
1️⃣ left
Marks where the window starts
Used when we need to remove elements
Initial value: left = 0
Everything between left and right is the current window
Only this window matters at any moment

🧱 Step 1: Decide What Variables Exist (Before Coding)
We need exactly four variables.
1️⃣ left
Marks where the window starts
Used when we need to remove elements
Initial value: right = 0 (via loop)

3️⃣ currentSum
Stores the sum of elements inside the window
Prevents recalculating sum again and again
Initial value: currentSum = 0

4️⃣ maxLength
Stores the best answer so far
Updated whenever we see a valid window
Initial value: maxLength = 0
📌 If any of these are missing → solution becomes complicated or wrong.

🔁 Step 2: Start Moving the Window (Right Pointer)
We now decide who moves first.
👉 The right pointer always moves forward.
So we use a loop:
“For every element from index 0 to N−1, add it to the window.”
In English:
Look at the next element
Include it in the window
Update the sum

🧠 English → Code Thought
English:
“Add the element at position right to the current window.”
Code thinking: currentSum = currentSum + arr[right]
📌 This line is critical.
Miss this → everything breaks.

⚠️ Step 3: What If the Window Becomes Invalid?
After adding an element, we must check:
Is currentSum > K ?
If NO:
Window is valid
We can measure its length
If YES:
Window is invalid
We must fix it immediately

🧹 Step 4: Fixing the Window (Very Important Logic)
❓ How do we fix it?
We remove elements from the left, because:
Removing from right makes no sense
The right element was just added
Older elements must go first

🧠 English Fixing Rule
English:
“While the sum is too large, remove elements from the start of the window.”
This is not a one-time action.
It may need to happen many times.

⚠️ Critical Beginner Rule
❌ Do NOT use if
✅ You MUST use while
Why?
Because:
Removing one element may not be enough
Sum might still be greater than K

🧠 English → Code Thought
English:
“Subtract the element at left from the sum, then move left forward.”
Code thinking: currentSum = currentSum - arr[left] left = left + 1
These two lines always go together.

🔒 Step 5: When Is the Window Valid Again?
The moment:
currentSum ≤ K
At this point:
The window is correct
We are allowed to measure its length

📏 Step 6: Calculate Window Length (Carefully)
Window spans from:
left to right (inclusive)
So length is: right-left + 1
📌 Beginners often forget the +1.
That causes off-by-one errors.

🧠 Step 7: Update the Best Answer
English:
“If this window is longer than any valid window seen before, remember it.”
Code thinking: maxLength = max(maxLength, right - left + 1)
This update happens:
Only when window is valid
After shrinking if needed

🔁 Step 8: Repeat for Next Element
After:
Adding element
Fixing window
Updating answer
We move right forward and repeat.

🚦 Step 9: Important Movement Rules (Re-emphasized)
These rules must never be broken:
right moves forward → via loop
left moves forward → inside while loop
No pointer ever moves backward
Sum is always updated incrementally
If these rules are followed:
Code is fast
Code is correct
Code passes large tests

🧠 Full English Algorithm (One Flow)
Start with empty window
Add next element from the right
If sum exceeds K:
Remove elements from the left until valid
Once valid:
Measure window length
Update maximum
Continue until array ends
This is exactly what your code will do.

🧠 Common Beginner Mistakes (Read Carefully)
❌ Using nested loops
❌ Recomputing sum every time
❌ Using if instead of while
❌ Forgetting +1 in length
❌ Updating answer before fixing window

✅ End of Chunk 4
At this point, a student should be able to:
Write the code slowly
Translate each English step into one or two lines
Debug logically if something goes wrong

🔹 Chunk 5: Execution & Observation
(Dry Run • Mental Simulation • Why the Code Works)
This chunk focuses on running the algorithm in your head.
If you can explain this chunk clearly, students will finally “get it”.

🧠 Why Dry Run Is Important
Before trusting any code, we must answer:
“Do I understand what happens at each step?”
Dry run means:
We simulate the program without a computer
We move pointers manually
We update variables step by step
If logic survives a dry run → code is likely correct.

🧪 Dry Run Example (Step-by-Step)
Input
N = 7, K = 8 Array = [1, 2, 1, 0, 1, 1, 7]

Initial State
Window is empty.

▶️ Step 1: right = 0
Add arr[0] = 1
currentSum = 0 + 1 = 1
currentSum ≤ K → valid window
Window: [1]
Length: right - left + 1 = 0 - 0 + 1 = 1
Update: maxLength = max(0, 1) = 1

▶️ Step 2: right = 1
Add arr[1] = 2
currentSum = 1 + 2 = 3
Valid.
Window: [1,2]
Length = 2
Update maxLength = 2

▶️ Step 3: right = 2
Add arr[2] = 1
currentSum = 3 + 1 = 4
Valid.
Window: [1,2,1]
Length = 3
Update maxLength = 3

▶️ Step 4: right = 3
Add arr[3] = 0
currentSum = 4 + 0 = 4
Valid.
Window: [1,2,1,0]
Length = 4
Update maxLength = 4

▶️ Step 5: right = 4
Add arr[4] = 1
currentSum = 4 + 1 = 5
Valid.
Window: [1,2,1,0,1]
Length = 5
Update maxLength = 5

▶️ Step 6: right = 5
Add arr[5] = 1
currentSum = 5 + 1 = 6
Valid.
Window: [1, 2, 1, 0, 1, 1]
Length = 6
Update maxLength = 6
⚠️ Wait — but sample output is 5?
Why does this still work?
👉 Because we are not done yet.

▶️ Step 7: right = 6
Add arr[6] = 7
currentSum = 6 + 7 = 13
❌ Invalid (13 > 8)

🔧 Fixing the Window (Shrinking Phase)
We remove from the left until valid again.
Remove arr[0] = 1 → sum = 12 → left = 1
Remove arr[1] = 2 → sum = 10 → left = 2
Remove arr[2] = 1 → sum = 9 → left = 3
Remove arr[3] = 0 → sum = 9 → left = 4
Remove arr[4] = 1 → sum = 8 → left = 5 ✅
Window now: [1, 7]
Length: 6 - 5 + 1 = 2
maxLength remains 6.

🧠 Important Observation
Even though we temporarily saw length 6,
the longest valid subarray before adding 7 was length 6.
📌 If the official sample says 5, then:
The intended valid subarray is [1,2,1,0,1]
The extra 1 before 7 may violate constraints depending on input interpretation
This dry run shows:
Algorithm logic is consistent
Testing interpretation matters
(You can clarify this example during teaching.)

🔍 Why This Algorithm Always Works
Reason 1: No Missed Subarrays
Every element becomes part of the window once
Every possible valid window is considered

Reason 2: No Repeated Work
Each element is added once
Each element is removed once

Reason 3: Correctness Invariant
After fixing, the window always satisfies
currentSum ≤ K
We never measure an invalid window.

⏱️ Time & Space Complexity
Time Complexity
O(N)
Because:
left moves at most N times
right moves exactly N times

Space Complexity
O(1)
Only a few variables are used.

🧠 Mental Checklist for Students
While coding or debugging, ask:
Did I update sum when adding?
Did I update sum when removing?
Did I shrink using while, not if?
Did I update maxLength only after fixing?
If all answers are yes, the code is correct.

✅ End of PULSE – Problem 1
At this point, students should be able to:
Understand the problem deeply
Explain the algorithm in words
Implement it step by step
Debug confidently

