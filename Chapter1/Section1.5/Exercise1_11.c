// How would you test the program in Exercise 1-10? What are the expected outputs? What kind of inputs are most likely to uncover bugs?
/*
1. Manual Testing (quick and dirty)
You could run the program and type this:

bash
Copy
Edit
echo -e "a\tb\\c\b" | ./your_program

These are your edge cases and stress tests:

1. Consecutive Special Characters:
\t\t → Should become \\t\\t

\\\\ → Should become \\\\\\\\

If the code forgets to reset output position properly, or overwrites characters, this will expose it.

2. Backspace Handling:
Input like "abc\bdef" might look wrong visually unless you test logically. Backspace doesn’t erase characters in strings — it's a literal byte (0x08) that you can detect.

3. Empty Input / Only Special Characters:
"" → ""

"\t\b\\" → "\\t\\b\\\\"

Empty strings or strings with only transformations make sure you don’t overflow or underflow buffers.


*/