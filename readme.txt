#CPP file run with compiler
g++ test.cpp -o test.exe
./test.exe

#GIT with VS
git config --global user.name "mqureshi-prorobo"
git config --global user.email "mqureshi@cobionix.com"

git version 
git init
git remote add origin <your_repo_url>
git branch -M main
git status

git add .         # all files
or
git add file.cpp  # specific file

git commit -m "First commit"

git push origin main
git pull origin main



