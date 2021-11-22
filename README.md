# Imperial-Computing-Year-2-Notes

My notes from second year at Imperial College, in a nice structure blessed with overzealous & somewhat unecessary latex.

### Setup
1. `git clone <this repo>`
2. Add Tools directory to your path so you can use `newtut` and `newnotes` easily.
```
cd Tools && pwd
cd ~
<editor of choice> .bashrc
export PATH="$PATH:<path to Tools directory>"
```

### Usage
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

### VSCode Glory
I recommend using [Latex Workshop](https://marketplace.visualstudio.com/items?itemName=James-Yu.latex-workshop), [Draw.io VS Code Integration](https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio) & [VSCode-PDF](https://marketplace.visualstudio.com/items?itemName=tomoki1207.pdf) to edit tex, draw diagram & have lecture slides open all in vscode.

