Practice: standard file permissions
1. As normal user, create a directory ~/permissions. Create a file owned by yourself in there.
ans:mkdir ~/permissions ; touch ~/permissions/file1.txt

2. Copy a file owned by root from /etc/ to your permissions dir, who owns this file now ?
ans:cp /etc/hosts ~/permissions/

3. As root, create a file in the users ~/permissions directory.
ans:# touch /home/username/permissions/rootfile 

4. As normal user, look at who owns this file created by root.
ans:ls -l ~/permissions

5. Change the ownership of all files in ~/permissions to yourself.
ans:chown user ~/permissions/* 

6. Make sure you have all rights to these files, and others can only read.
ans: chmod 644 (on files)
chmod 755 (on directories)

7. With chmod, is 770 the same as rwxrwx--- ?
ans: YES

8. With chmod, is 664 the same as r-xr-xr-- ?
Ans: No

9. With chmod, is 400 the same as r-------- ?
ANs: YES

10. With chmod, is 734 the same as rwxr-xr-- ? ans: NO
11a. Display the umask in octal and in symbolic form.ans:umask ; umask -S
11b. Set the umask to 077, but use the symbolic format to set it. Verify that this works. ans:umask -S u=rwx,go=
12. Create a file as root, give only read to others. Can a normal user read this file ? Test writing to this file with nano.
13a. Create a file as normal user, give only read to others. Can another normal user read this file ? Test writing to this file with vi. ans:YES

13b. Can root read this file ? Can root write to this file with vi ? ans :YES
14. Create a directory that belongs to a group, where every member of that group can read and write to files, and create files. Make sure that people can only delete their own files.
Ans: mkdir /home/project42 ; groupadd project42