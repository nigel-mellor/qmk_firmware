Syncing origin with master
--------------------------

git fetch -p origin
git fetch -p upstream
git checkout master
git merge upstream/master
git push
git checkout custom
git rebase master
git push -f

*OR*

git fetch -p upstream
git checkout custom
git rebase uptream/master
git push -f

---

make git-submodules clean distclean

make clean bpiphany/pegasushoof/2015:mac_uk_iso
make clean filco/majestouch2/tkl:mac_uk_iso
make clean xiudi/xd87:mac_uk_iso

./util/docker_build.sh filco/majestouch2/tkl:mac_uk_iso
