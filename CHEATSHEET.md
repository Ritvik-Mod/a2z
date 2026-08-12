# Daily commands

## Start a problem (from repo root)
./new <step-suffix> <problem-slug>
cd step-<step-suffix>/<problem-slug>
code .

## Run
cpr        # g++ -std=c++20 -O2 -Wall -o /tmp/a sol.cpp && /tmp/a
pyr        # python3 sol.py

## End of day (from repo root)
git status
git add .
git commit -m "step X.Y: what you solved (cpp + py)"
git push

## Step suffixes
01-basics  02-sorting  03-arrays  04-binary-search  05-strings
06-linked-list  07-recursion  08-bit-manipulation  09-stacks-queues
10-sliding-window  11-heaps  12-greedy  13-binary-trees  14-bst
15-graphs  16-dp  17-tries  18-strings-hard

## Fixing mistakes
git restore --staged <file>    # unstage, keep edits
git restore <file>             # discard edits (destructive)
git commit --amend -m "..."    # fix last message, only if unpushed
