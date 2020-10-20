Practice8: shell history
1. Issue the command 
echo The answer to the meaning of life, the universe and everything is 42.

2. Repeat the previous command using only two characters (there are two solutions!)
!!
OR
!e
3. Display the last 5 commands you typed.
ls
rev
date 
cal
histroy 5

4. How many commands can be kept in memory for your current shell session ?
ans :echo $HISTSIZE

5. Where are these commands stored when exiting the shell ?
ans: echo $HISTFILE
6. How many commands can be written to the history file when exiting your current shell session ?
ans: echo $HISTFILESIZE
9. Make sure your current bash shell remembers the only 10 commands you type.
10. When is command history written to the history file ?
6. Is the current session history stored to ~/.bashrc_history?
4. Issue the long echo from question 1 again, using the line numbers you received from the command in question 3.