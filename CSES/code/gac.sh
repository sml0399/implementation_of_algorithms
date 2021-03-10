cd ..
read -p "commit name:" name
git add .
git commit -m "${name}"
git push -u origin main
