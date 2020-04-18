### Impostazioni Geany per Linux e C++ ###
- In ```Modifica/Preferenze/Scorciatoie da tastiera```
  -  Elimina shortcut per chiudi.
  - Duplica riga corrente: ```<Primary>e``` 
  - Cancella riga corrente: ```<Primary>d```.
  - Sposta riga(e) su: ```<Primary>Up```.
  - Sposta riga(e) già:```<Primary>Down```.
  - Commenta/decommenta riga ```<Primary>q```.
  - Passa all'editor ```F1```.
  - Passa all'emulatore di terminale virtuale: ```F2```.
- In ```Modifica/preferenze/Terminale```
  - Spunta: Segui il percorso del file corrente.   
- In ```Preferenze/Editor```
   - Elimina il Marcatore di selezione del commento.
- Dopo avere aperto un file.cpp
  - In ```Genera/Imposta i comandi per la compilazione```
    - Compile (F8): ```g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -O2 -Wno-unused-result```  
    -  Build (F9): ```g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG```
- In ```Visualizza``` togli la spunta a mostra batta degli strumenti e mostra barra laterale.
- Apri il file ```~/.bashrc``` con ```geany ~/.bashrc``` da terminale  scommenta `#force_color_prompt=yes` , applica il cambiamento con ```source ~/.bashrc``` (sempre da terminale)
- In ```Preferenze/Editor/Visualizzazione``` togli la spunta a `Marcatore linea lunga`.
- In ```Preferenze/Editor/Completamenti``` spunta tutte le checkbox per la chiusura automatica di virgolette e parentesi.
Opzionale: aggiungere cppcheck.

- Installare i plugins ```sudo apt-get install geany-plugins```.
- In ```Strumenti/Gestione Plugin``` spunta Auto-chiusura.


Elenco comandi:
- ```F9```: safe compilation.
- ```F8```: fast compilation.
- ```F5```: run.
