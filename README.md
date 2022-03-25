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

## Contributions
### Mistakes Found
Users who found errors to be corrected & hence helped to improve the quality of these notes.

If *you* have found a mistake, please add an issue, create a pull request, or message me directly and I will fix it asap & add your credit here.

- [Naman](https://github.com/NamanSharma5) - [Typo, Y instead of X](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/cf65aae4f87aca2f0ae3321b7d82d13b61d492d8)
- [Naman](https://github.com/NamanSharma5) - [Comments mixed up left & right](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/3812ae2e788f6d9686ced47fd9a016e147f6cca3)
- [Deepro](https://github.com/DeeproChoudhury) - [Changed 'no page table' to 'no change of page table'](https://github.com/OliverKillane/Imperial-Computing-Year-2-Notes/commit/eb8bbb7d825a86d27f1ef8c8a4a2ff322b5823cf)