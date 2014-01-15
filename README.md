OVS
===

This repository features a concice summary (in Dutch) of the slides from the Course *Secure Software Development* (Ontwikkeling van Veilige Software) from the academic year 2013 - 2014. The homepage of the course is located [here](http://people.cs.kuleuven.be/~frank.piessens/OVS/).

PDF
---
The latest version of the PDF can be found [here](http://git.jonasdevlieghere.com:8000/out/OVS) (Powered by [InTexration](https://github.com/JDevlieghere/InTeXration))


Status
------

Currently the document is still a draft and has to be treated accordingly. The document has **not yet been proofread** and may content errors related to spelling, grammar and typing. 

Currently the following chapters are almost complete:

* Chapter 1
* Chapter 3
* Chapter 4
* Chapter 5

Please feel free to mark, review and correct errors. I'll gladly merge your pull request. 

Practicalities
--------------
Since all chapters are located in a subdirectory please use the following command to refer to image or code folders:

```latex
\imageSrc
\codeSrc
```
You can temporarily redefine these command when compiling a chapter individually inside the chapter directory. Please don't forget to remove them before committing in order to allow everyone to compile the main tex-file.
