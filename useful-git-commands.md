1) 
pour changer le message du dernier commit dans une branch nommée "tp1" par ex :

git switch tp1
git branch (pour vérifier qu'on est bien dans tp1)
git commit --amend -m "New message"
git push --force-with-lease origin tp1
