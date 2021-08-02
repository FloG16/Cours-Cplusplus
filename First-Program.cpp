#include <iostream>
 
using namespace std;
 
int main()
{
	cout << "Hello world!" << endl;
	return 0;
}

/*La toute première ligne est :

#include <iostream>

C'est ce qu'on appelle une directive de préprocesseur. Son rôle est de « charger » des fonctionnalités du C++ pour que nous puissions effectuer certaines actions.

En effet, le C++ est un langage très modulaire. De base, il ne sait pas faire grand-chose (pas même afficher un message à l'écran !). On doit donc charger des 
extensions que l'on appelle bibliothèques et qui nous offrent de nouvelles possibilités.

Ici, on charge le fichieriostream, ce qui nous permet d'utiliser une bibliothèque… d'affichage de messages à l'écran dans une console ! Quelque chose de vraiment 
très basique, comme vous le voyez, mais qui nécessite quand même l'utilisation d'une bibliothèque.

Appeleriostreamnous permet en fait de faire un peu plus qu'afficher des messages à l'écran : on pourra aussi récupérer ce que saisit l'utilisateur au clavier, comme
nous le verrons plus tard.
iostreamsignifie « Input Output Stream », ce qui veut dire « Flux d'entrée-sortie ». Dans un ordinateur, l'entrée correspond en général au clavier ou à la souris, 
et la sortie à l'écran. Inclureiostreamnous permet donc en quelque sorte d'obtenir tout ce qu'il faut pour échanger des informations avec l'utilisateur.

Plus tard, nous découvrirons de nouvelles bibliothèques et il faudra effectuer des inclusions en haut des codes source comme ici. Par exemple, lorsque nous 
étudierons Qt, qui permet de réaliser des programmes graphiques (GUI), on insérera une ligne comme celle-ci :

#include <Qt>

Notez qu'on peut charger autant de bibliothèques que l'on veut à la fois.
using namespace

La ligne :

using namespace std;

… permet en quelque sorte d'indiquer dans quel lot de fonctionnalités notre fichier source va aller piocher.

Si vous chargez plusieurs bibliothèques, chacune va proposer de nombreuses fonctionnalités. Parfois, certaines fonctionnalités ont le même nom. Imaginez une 
commande « AfficherMessage » qui s'appellerait ainsi pouriostreammais aussi pourQt! Si vous chargez les deux bibliothèques en même temps et que vous appelez 
« AfficherMessage », l'ordinateur ne saura pas s'il doit afficher un message en console aveciostreamou dans une fenêtre avecQt!

Pour éviter ce genre de problèmes, on a créé des namespaces (espaces de noms), qui sont des sortes de dossiers à noms. La ligneusing namespace std;indique que
vous allez utiliser l'espace de nomsstddans la suite de votre fichier de code. Cet espace de noms est un des plus connus car il correspond à la bibliothèque 
standard (std), une bibliothèque livrée par défaut avec le langage C++ et dontiostreamfait partie.
int main()

C'est ici que commence vraiment le cœur du programme. Les programmes, vous le verrez, sont essentiellement constitués de fonctions. Chaque fonction a un rôle et
peut appeler d'autres fonctions pour effectuer certaines actions.
Tous les programmes possèdent une fonction dénommée « main » (Qui se prononce « mèïne » en anglais), ce qui signifie « principale ». C'est donc la fonction principale.

Une fonction a la forme suivante :*/

int main()

{

    

}

/*Les accolades déterminent le début et la fin de la fonction. Comme vous le voyez dans le code source qui a été généré par Code::Blocks, il n'y a rien après la 
fonctionmain. C'est normal : à la fin de la fonctionmainle programme s'arrête ! Tout programme commence au début de la fonctionmainet se termine à la fin de celle-ci.

Cela veut dire qu'on va écrire tout notre programme dans la fonctionmain?

Non ! Bien que ce soit possible, ce serait très délicat à gérer, surtout pour de gros programmes. À la place, la fonctionmainappelle d'autres fonctions qui, 
à leur tour, appellent d'autres fonctions. Bref, elle délègue le travail.
Cependant, dans un premier temps, nous allons surtout travailler dans la fonctionmaincar nos programmes resteront assez simples.
cout

Voici enfin la première ligne qui fait quelque chose de concret ! C'est la première ligne demain, donc la première action qui sera exécutée par l'ordinateur 
(les lignes que nous avons vues précédemment ne sont en fait que des préparatifs pour le programme).

cout << "Hello world!" << endl;

Le rôle de cout(à prononcer « ci aoute ») est d'afficher un message à l'écran. C'est ce qu'on appelle une instruction. Tous nos programmes seront constitués 
d'instructions comme celle-ci, qui donnent des ordres à l'ordinateur.

Notez que coutest fourni par iostream. Si vous n'incluez pas iostreamau début de votre programme, le compilateur se plaindra de ne pas connaître coutet vous
ne pourrez pas générer votre programme !

Notez bien : chaque instruction se termine par un point-virgule ! C'est d'ailleurs ce qui vous permet de différencier les instructions du reste.
Si vous oubliez le point-virgule, la compilation ne fonctionnera pas et votre programme ne pourra pas être créé !

Il y a 3 éléments sur cette ligne :*/

    cout: commande l'affichage d'un message à l'écran ;

    "Hello world!": indique le message à afficher ;

    endl: crée un retour à la ligne dans la console.

/*Il est possible de combiner plusieurs messages en une instruction. Par exemple :*/

cout << "Bonjour tout le monde !" << endl << "Comment allez-vous ?" << endl;

/*… affiche ces deux phrases sur deux lignes différentes. Essayez ce code, vous verrez !

/*Sous Windows, les caractères accentués s'affichent mal (essayez d'afficher « Bonjour Gérard » pour voir !). C'est un problème de la console de Windows 
(problème qu'on peut retrouver plus rarement sous Mac OS X et Linux). Il existe des moyens de le régler mais aucun n'est vraiment satisfaisant. À la place, 
je vous recommande plutôt d'éviter les accents dans les programmes console sous Windows.
Rassurez-vous : les GUI que nous créerons plus tard avec Qt n'auront pas ce problème !

Pour être sûr de bien comprendre ce qui se passe, je vous invite à créer vos propres exemples et à afficher ce qui vous passe par la tête. N'oubliez pas 
d’utiliser endlpour réaliser des retours à la ligne et de séparer chaque morceau de texte par les chevrons<<. D'ailleurs, vous devriez être fier de ces essais, 
ce sont les premiers programmes C++ que vous réalisez tout seul sans copier depuis un cours ! Je vous conseille de faire de même tout au long de ce cours. 
A chaque que fois qu'il y aura des exemples, essayez de modifier les instructions, de voir ce qui se passe si on change l'ordre, bref de "bidouiller", c'est 
le meilleur moyen d'apprendre.

Au cours de vos essais, vous avez peut-être essayé d'afficher un backslash (\) ou des guillemets ("). Si ce n'est pas le cas, je vous propose de le faire maintenant:*/

#include <iostream>

using namespace std;


int main()

{

  cout << "Je fais des tests pour apprendre le C++ !" << endl;

  cout << """ << endl;

  cout << "\" << endl;

  return 0;

}

/*Le compilateur ne va pas aimer cela du tout et il un message d'erreur devrait s'afficher dans la zone au bas de votre fenêtre Code::Blocks. La raison est simple,
pour afficher des guillemets, il faut utiliser la combinaison\"et pas juste", idem pour le backslash qu'il faut doubler. Il faut donc écrire:*/

#include <iostream>

using namespace std;


int main()

{

  cout << "Je fais des tests pour apprendre le C++ !" << endl;

  cout << "\"" << endl;

  cout << "\\" << endl;

  return 0;

}

/*Je vous laisse faire le test pour vérifier que cela fonctionne. Maintenant que vous avez vu ces deux petites exceptions, vous êtes prêt à écrire tout ce qui vous
passera par la tête dans la console. Voyons maintenant ce qui se passe à la fin de notre programme.
return

La dernière ligne est :

return 0;

Ce type d'instruction clôt généralement les fonctions. En fait, la plupart des fonctions renvoient une valeur (un nombre par exemple). Ici, la fonctionmainrenvoie 0 
pour indiquer que tout s'est bien passé (toute valeur différente de 0 aurait indiqué un problème).

Vous n'avez pas besoin de modifier cette ligne, laissez-la telle quelle. Nous aurons d'autres occasions d'utiliserreturnpour d'autres fonctions, nous en reparlerons !

Commentez et mettez en forme vos programmes !

En plus du code qui donne des instructions à l'ordinateur, vous pouvez écrire des commentaires pour expliquer le fonctionnement de votre programme.

Les commentaires n'ont aucun impact sur le fonctionnement de votre logiciel : en fait, le compilateur ne les lit même pas et ils n'apparaissent pas dans le programme généré. Pourtant, ces commentaires sont indispensables pour les développeurs : ils leur permettent d'expliquer ce qu'ils font dans leur code !

Dès que vos programmes vont devenir un petit peu complexes (et croyez-moi, cela ne tardera pas), vous risquez d'avoir du mal à vous souvenir de leur fonctionnement quelque temps après avoir écrit le code source. De plus, si vous envoyez votre code à un ami, il aura des difficultés pour comprendre ce que vous avez essayé de faire juste en lisant le code source. C'est là que les commentaires entrent en jeu !
Les différents types de commentaires

Il y a deux façons d'écrire des commentaires selon leur longueur. Je vais vous les présenter toutes les deux.
Les commentaires courts

Pour écrire un commentaire court, sur une seule ligne, il suffit de commencer par//puis d'écrire votre commentaire. Cela donne :

// Ceci est un commentaire

Mieux, vous pouvez aussi ajouter le commentaire à la fin d'une ligne de code pour expliquer ce qu'elle fait :

cout << "Hello world!" << endl; // Affiche un message à l'écran

Les commentaires longs

Si votre commentaire tient sur plusieurs lignes, ouvrez la zone de commentaire avec/*et fermez-la avec*/:

/* Le code qui suit est un peu complexe

alors je prends mon temps pour l'expliquer

parce que je sais que sinon, dans quelques semaines,

j'aurai tout oublié et je serai perdu pour le modifier 

En général, on n'écrit pas un roman dans les commentaires non plus… sauf si la situation le justifie vraiment.
Commentons notre code source !

Reprenons le code source que nous avons étudié dans ce chapitre et complétons-le de quelques commentaires pour nous souvenir de ce qu'il fait.*/

#include <iostream> // Inclut la bibliothèque iostream (affichage de texte)


using namespace std; // Indique quel espace de noms on va utiliser


/*

Fonction principale "main"

Tous les programmes commencent par la fonction main

*/

int main()

{

    cout << "Hello world!" << endl; // Affiche un message

    return 0; // Termine la fonction main et donc le programme

}

/*Si vous lancez ce programme, vous ne verrez aucune nouveauté. Les commentaires sont, comme je vous le disais, purement ignorés par le compilateur.

J'ai volontairement commenté chaque ligne de code ici mais, dans la pratique il ne faut pas non plus commenter à tout-va. Si une ligne de code fait quelque chose 
de vraiment évident, inutile de la commenter.
En fait, les commentaires sont plus utiles pour expliquer le fonctionnement d'une série d'instructions plutôt que chaque instruction une à une.
Mettez votre code en forme

Un autre élément important pour les développeurs est la mise en forme du code. Le compilateur ne s'intéresse pas aux espaces ou aux retours à la ligne présents 
dans le code source. En fait, ils ne sont là que pour nous aider, nous les humains, à lire le code. Le compilateur serait tout à fait heureux de compiler ce code:*/

#include <iostream>

using namespace std; int main()

      {

    cout << "Hello world!"<<     endl; return 0; }

/*(Essayez pour voir !) Par contre, il n'est pas facile à lire du tout, vous en conviendrez. ;) Les paires de parenthèses ne sont pas simple à repérer, on ne voit pas
bien la séparation entre les instructions, bref, ce code source n'est pas facile à utiliser. Imaginez maintenant que votre programme fasse des centaines de lignes de 
long, cela deviendra vite incompréhensible. Pour éviter que cela devienne ingérable, il est donc nécessaire de mettre son code en forme de manière plus lisible.

Pour nous aider dans cette tâche, Code::Blocks met à disposition un outil. Ouvrez le menu Plugins puis sélectionnez Source code formatter (AStyle). Votre code source 
se met alors en forme tout seul et devient automatiquement plus lisible ! Cela n'a rien changé pour le compilateur, le programme fera toujours exactement la 
même chose, par contre, pour vous (et vos collègues travaillant sur le même projet), cela change tout. Vous verrez que plus on avance dans ce cours, plus cela 
deviendra important d'avoir un code mis en forme proprement et bien commenté.
En résumé

    On distingue deux types de programmes : les programmes graphiques (GUI) et les programmes console.

    Il est plus simple de réaliser des programmes console pour commencer, c'est donc ce type de programme que nous étudierons en premier.

    Un programme possède toujours une fonction main(): c'est son point de démarrage.

    La directive coutpermet d'afficher du texte dans une console.

    On peut ajouter des commentaires dans son code source pour expliquer son fonctionnement. Ils prennent la forme// Commentaireou /* Commentaire */.
