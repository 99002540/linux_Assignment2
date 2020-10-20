Practice : links
1. Create two files named winter.txt and summer.txt, put some text in them.
ans: echo Winter> winter.txt ; echo Summer  > summer.txt

2. Create a hard link to winter.txt named hlwinter.txt.
ans: ln winter.txt hlwinter.txt

3. Display the inode numbers of these three files, does the hard links have the same inode?
ans:ls -li winter.txt summer.txt hlwinter.txt

4. Use the find command to list the two hardlinked files
ans:find . -inum xyz #replace xyz with the inode number


5. Create a symbolic link to summer.txt called slsummer.txt.
ans:ln -s summer.txt slsummer.txt

6. Look at the directories /etc/init.d/ /etc/rc2.d/ /etc/rc3.d/ ... do you see the links ?
ans:ls -l /etc/init.d
ls -l /etc/rc2.d
ls -l /etc/rc3.d

7. Look in /lib with ls -l...
ans:ls -l /lib

8. Use find to look in your home directory for regular files that do not(!) have one hard link.
ans: find ~ ! -links 1 -type f



5. Everything about a file is in the inode, except two things : name them!
7. Find all files with inode number 2. What does this information tell you ?
ans: