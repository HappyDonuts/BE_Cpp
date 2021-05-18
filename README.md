# BE_OneManBand

ESP8266 One Man Band

Une petite machine qui permet de jouer de petites mélodies, les reproduire, et jouer par dessus en boucle. 

Hardware:
- 7 boutons poussoir
- 2 buzzers
- Breadboard

Software:
- Arduino IDE
- ESP8266 Arduino libraries

Fonctionalités:
- Métronome
- Enregistrer une petite mélodie
- Reproduire la mélodie
- Enregistrer une autre mélodie par dessus et les jouer en même temps

Préparation:
- Brancher les boutons et les buzzers à la carte ESP8266.
- Selectioner les libraries de la carte sur Tools->Board->NodeMCU 0.9
- Selectioner le port USB sur Tools->Port
- Compiler
- Brancher la carte à l'ordianteur et appuyer sur Upload

Utilisation:
- Lorsque la lumière est allumé, enregistrer une petite de 10 secondes jusqu'à ce que la LED s'éteigne
- Attendre deux secondes, jusqu'e ca que la LED s'allume à nouveau
- Jouer une deuxième mélodie de 10 secondes jusqu'à ce que la LED s'éteigne
- Après une petite pause, profitez de votre chef d'oeuvre en écoutant les deux mélodies en même temps !
