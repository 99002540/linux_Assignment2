Practise2: Working with files
1. List the files in the /bin directory
ans:ls /bin
2. Display the type of file of /bin/cat, /etc/passwd and /usr/bin/passwd.
ans:file /bin/cat /etc/passwd /usr/bin/passwd

3. Create a directory ~/touched and enter it.
ans: mkdir ~/touched ; cd ~/touched
4. Create the files today.txt and yesterday.txt in touched.
ans:touch today.txt yesterday.txt
5. Change the date on yesterday.txt to match yesterday's date.
ams:touch -t 20201012 yesterday.txt
6. Copy yesterday.txt to copy.yesterday.txt
cp yesterday.txt copy.yesterday.txt
7. Rename copy.yesterday.txt to kim
mv copy.yesterday.txt kim
8. Create a directory called ~/testbackup and copy all files from ~/touched into it.
mkdir ~/testbackup ; cp -r ~/touched ~/testbackup/ 
9. Use one command to remove the directory ~/testbackup and all files in it.
rm -rf ~/testbackup 

10. Create a directory ~/etcbackup and copy all *.conf files from /etc into it. Did you include all subdirectories of /etc ?
cp -r /etc/*.conf ~/etcbackup
11. Use rename to rename all *.conf files to *.backup .




3. Use files LFS.png dummy.pdf 
3a. Display the type of file of wolf.jpg and dummy.pdf
3b. Rename LFS.png to wolf.pdf
3c. Display the type of file of wolf.pdf and dummy.pdf.