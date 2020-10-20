Practice6: control operators( ;, &, $?, &&, ||, #, \ )
0. Each question can be answered by one command line!
1. When you type passwd, which file is executed ?
Ans: which passwd

2. What kind of file is that ?
Ans:file /usr/bin/passwd

3. Execute the pwd command twice. (remember 0.)
Ans:pwd ; pwd

4. Execute ls after cd /etc, but only if cd /etc did not error.
Ans:cd /etc && ls

5. Execute cd /etc after cd etc, but only if cd etc fails.
Ans:cd etc || cd /etc\

6. Execute sleep 200 in background (do not wait for it to finish).
Ans:sleep 200 &

7. Write a command line that executes rm file55. Your command line should print 'success'
if file55 is removed, and print 'failed' if there was a problem.
Ans:rm file55 && echo success || echo failed

8. Use echo to display "Hello World with strange' characters \ * [ } ~ \\ ." (including all quotes)
Ans:echo \""Hello World with strange' characters \ * [ } ~ \\ . "\"