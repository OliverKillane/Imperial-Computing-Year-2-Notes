## Deprecation Notice
These notes will not longer be maintained. Over the next year they will be moved into the [Imperial-Computing-Notes](https://github.com/OliverKillane/Imperial-Computing-Notes) repository and heavily refactored to a higher quality.

# Imperial-Computing-Year-2-Notes

My notes from second year at Imperial College, in a nice structure blessed with overzealous & somewhat unecessary latex.

## Setup
1. `git clone <this repo>`
2. Add Tools directory to your path so you can use `newtut` and `newnotes` easily.
```
cd Tools && pwd
cd ~
<editor of choice> .bashrc
export PATH="$PATH:<path to Tools directory>"
```
3. Set the default user to yourself within the newnotes file
```
# Default arguments:
user='Oliver Killane'
```
...
7. Profit (time saved in notes setup time & writing with handy commands)

## Usage
Simply cd to any notes directory, and run `newnotes` (`-h` for help dialog), the `<module> common.tex` file contains any common commands, format to be used across all notes of that directory.
```
cd "50004 - Operating Systems"
newnotes -t "Lecture 42" -l "panopto link"
```
You should now have:
```
├── <module> common.tex
├── <Other Lectures>
└── Lecture 42
    ├── Lecture 42.tex        
    ├── code
    ├── diagram
    └── image
```
Then simply edit your `Lecture 42.tex` file to your heart's content, placing `.drawio` diagrams, code files & images in their respective directories.

## VSCode Glory
I recommend using [Latex Workshop](https://marketplace.visualstudio.com/items?itemName=James-Yu.latex-workshop), [Draw.io VS Code Integration](https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio) & [VSCode-PDF](https://marketplace.visualstudio.com/items?itemName=tomoki1207.pdf) to edit tex, draw diagram & have lecture slides open all in vscode.

`latexindent` is used as a basic formatter for consistency & ensuing PR diffs are not overwhelming.

## Contributions
### Notes Improvements
Users who have contributed material to improve and extend the notes.
- [Yelun](https://github.com/eylun) - [Fixed Typos, Completed unfinished cost model proof for algorithms lecture 2, first PR for the repo!](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/c82926a79b6592245c50964823bcacf88405d8e9)
- [Yelun](https://github.com/eylun) - [Fixed Typos, improved and corrected errors in multistep reductions proof.](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/056d6083c14773efe33e1eaa4c753af71d48ef4c)
- [Yelun](https://github.com/eylun) - [Fixed Typos including error with variance definition.](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/45c3087385ab63818cc80a43a13a91c019e8ad73)
### Mistakes Found
Users who found errors to be corrected & hence helped to improve the quality of these notes.

If *you* have found a mistake, please add an issue, create a pull request, or message me directly and I will fix it asap & add your credit here.
- [Naman](https://github.com/NamanSharma5) - [Typo, Y instead of X](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/cf65aae4f87aca2f0ae3321b7d82d13b61d492d8)
- [Naman](https://github.com/NamanSharma5) - [Comments mixed up left & right](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/3812ae2e788f6d9686ced47fd9a016e147f6cca3)
- [Deepro](https://github.com/DeeproChoudhury) - [Changed 'no page table' to 'no change of page table'](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/eb8bbb7d825a86d27f1ef8c8a4a2ff322b5823cf)
- Kartik Ilyer - Fixes for the reference bits in OS Lecture 11's clock algorithm example [here](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/1807277adab2e0adca641fcdda0021a9c870959b) and [here](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/d97c16179b32c63946ce9072de5d9edacbbfc1fd)
- [Naman](https://github.com/NamanSharma5) - [Typos in OS, Networks, redex definition in Models](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/1766b72b6c2302411f34545c5e422e2db039cc46)
- [Deepro](https://github.com/DeeproChoudhury) - [Fixes to minor errors in OS (clock algorithm) and Compilers (rationale for hoisting rules)](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/467fb457b5623ccd6b3a115d80bfcee75e54471d)
- [Dayana](https://github.com/yana-alia) - [Fixes to OS Lecture 16 typos](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/4be0155094fbef71d0ed29c5354402b45052a69d)
- [Dayana](https://github.com/yana-alia) - [General Typo Fixed to OS Lectures](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/71b30ad6e7b9f84e3f0afde4b8d74ec03c83bbec)
