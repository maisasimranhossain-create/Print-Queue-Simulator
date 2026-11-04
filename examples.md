# Print Queue Simulator - Examples

This file contains some sample inputs and outputs of the Print Queue Simulator implemented using C.

## Example 1: Adding Print Jobs

**Input:**
```text
Enter your choice: 1
Enter document name: Assignment.pdf

Enter your choice: 1
Enter document name: Research.docx

Enter your choice: 1
Enter document name: Notes.txt
```

**Output:**
```text
'Assignment.pdf' added to print queue.
'Research.docx' added to print queue.
'Notes.txt' added to print queue.
```

## Example 2: Displaying Pending Jobs

**Input:**
```text
Enter your choice: 3
```

**Output:**
```text
----- PENDING PRINT JOBS -----
1. Assignment.pdf
2. Research.docx
3. Notes.txt
```

## Example 3: Processing a Print Job

**Input:**
```text
Enter your choice: 2
```

**Output:**
```text
Printing document: Assignment.pdf
```

The first document is removed because a queue follows FIFO (First In, First Out).

## Example 4: Checking the Next Document

**Input:**
```text
Enter your choice: 4
```

**Output:**
```text
Next document: Research.docx
```

## Example 5: Empty Queue

After processing all pending documents:

**Input:**
```text
Enter your choice: 2
```

**Output:**
```text
Print Queue is EMPTY!
```

## Observations

- The first document added is processed first.
- Enqueue adds a document to the rear of the queue.
- Dequeue removes a document from the front.
- Peek displays the next document without removing it.
- The queue can store a maximum of 5 documents at a time.
- This implementation uses a linear queue with a fixed-size array.