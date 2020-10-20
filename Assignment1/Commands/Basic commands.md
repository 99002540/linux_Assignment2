Practice: Basic Commands
1. Explain the difference between these two commands.
find /data -name "*.txt"
find /data -name *.txt
Ans: "*.txt" :find will look /data and will give the result
*.txt: find will give different result 


2. Explain the difference between these two statements. Will they both work when there are 200 .odf files in /data ? How about when there are 2 million .odf files ?
find /data -name "*.odf" > data_odf.txt
find /data/*.odf > data_odf.txt
ans: find in first command will give all files in /data whereas the find in second command will give files in /data also in  *.odf.

3. Write a find command that finds all files created after January 30th 2010.
ans: touch -t 201001302359 marker_date
find . -type f -newer marker_date 

4. Count the number of *.conf files in /etc and all its subdirs.
ans: find /etc -type f -name '*.conf' | wc –l

5. Here are two commands that do the same thing: copy *.odf files to /backup/ . What would be a reason to replace the first command with the second ?
cp -r /data/*.odf /backup/
find /data -name "*.odf" -exec cp {} /backup/ \;
ans: The first command will not suite when there are many files in one line

6. Create a file called loctest.txt. Can you find this file with locate ? Why not ? How do you make locate find this file ?
ans: Because it is not in index

7. Use find and -exec to rename all .htm files to .html.
ans: exec is used to execute a command from the bash

8. Issue the date command. Now display the date in YYYY/MM/DD format.
ans:$ date +"%y%y/%m/%d"
2020/09/22


9. Issue the cal command. Display a calendar of 1582 and 1752. Notice anything special ?
ans:$ cal 1582
$ cal 1752

1752 is leap year.
Cal command will issue the calendar of the current month.
Cal 1752 command will issue the calendar of that particular year.



20. Write a find command that finds all *.odf files created in September 2009.