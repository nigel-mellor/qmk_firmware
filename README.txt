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
qmk clean && qmk compile -kb bpiphany/pegasushoof/2015 -km mac_uk_iso
qmk clean && qmk compile -kb xiudi/xd87 -km mac_uk_iso
qmk clean && qmk compile -kb filco/majestouch2/tkl -km mac_uk_iso
