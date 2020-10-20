Practise1: working with directories
1. Display your current directory.
ans:pwd
2. Change to the /etc directory.
ans:cd /etc
3. Now change to your home directory using only three key presses.
ans:cd

4. Change to the /boot/grub directory using only eleven key presses.
ans:cd /boot/grub
5. Go to the parent directory of the current directory.
ans:cd .. 
6. Go to the root directory. 
ans:cd /
7. List the contents of the root directory. 
ans:ls -l
8. List a long listing of the root directory.
ans:ls /etc
9. Stay where you are, and list the contents of /etc. 
ans:ls /etc
10. Stay where you are, and list the contents of /bin and /sbin.
ans: ls /bin /sbin
11. Stay where you are, and list the contents of ~.
ans:ls ~
12. List all the files (including hidden files) in your home directory.
ans:ls -al~
13. List the files in /boot in a human readable format.
ans:ls -lh /boot
14. Create a directory testdir in your home directory.
mkdir ~/testdir
15. Change to the /etc directory, stay here and create a directory newdir in your home directory. 
ans: cd /etc ; mkdir ~/newdir
16. Create in one command the directories ~/dir1/dir2/dir3 (dir3 is a subdirectory from dir2,and dir2 is a subdirectory from dir1 ).
ans:mkdir -p  ~/dir1/dir2/dir3 
17. Remove the directory testdir.
ans: rmdir testdir



18. Open manual page for bash and read about pushd and popd by searching in manpage.