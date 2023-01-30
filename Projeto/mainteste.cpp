#include <iostream>

#include "App.hpp"
#include "Ator.hpp"
#include "Diretor.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include "Pessoa_.hpp"
#include "Producao.hpp"
#include "Streaming.hpp"
#include "Time.hpp"
#include "SmarTV.hpp"

// A classe smartv possui algumas funções "extras" que me ajudaram a criar o programa da forma que achei ser melhor
// Esse main serve basicamente para adicionar apps e filmes ou series mas tbm é possível criar os menus aqui no main e chamar as funções por aqui

int main()
{
    Hora h;

    // Criando os filmes e series

    Filme Godfather("The Godfather", 175);
    Godfather.adicionarAtor(Ator("Marlon Brando", "40 anos"));
    Godfather.adicionarAtor(Ator("Al Pacino", "50 anos"));
    Godfather.adicionarDiretor(Diretor("Francis Ford Coppola", 40));

    Filme THR("The Shawshank Redemption", 142);
    THR.adicionarAtor(Ator("Tim Robbins", "25 anos"));
    THR.adicionarAtor(Ator("Morgan Freeman", "56 anos"));
    THR.adicionarDiretor(Diretor("Frank Darabont", 30));

    Filme TDK("The Dark Knight", 152);
    TDK.adicionarAtor(Ator("Christian Bale", "30 anos"));
    TDK.adicionarAtor(Ator("Heath Ledger", "29 anos"));
    TDK.adicionarDiretor(Diretor("Christopher Nolan", 38));

    Filme pp("Pulp Fiction", 154);
    pp.adicionarAtor(Ator("John Travolta", "40 anos"));
    pp.adicionarAtor(Ator("Samuel L. Jackson", "40 anos"));
    pp.adicionarDiretor(Diretor("Quentin Tarantino", 100));

    Serie s1("Game of Thrones", 73);
    s1.adicionarAtor(Ator("Kit Harington", "20 anos"));
    s1.adicionarAtor(Ator("Emilia Clarke", "20 anos"));
    s1.adicionarAtor(Ator("Peter Dinklage", "20 anos"));
    s1.adicionarDiretor(Diretor("David Benioff", 19));
    s1.adicionarDiretor(Diretor("D. B. Weiss", 19));

    Serie s2("Stranger Things", 20);
    s2.adicionarAtor(Ator("Millie Bobby Brown", "20 anos"));
    s2.adicionarAtor(Ator("Winona Ryder", "20 anos"));
    s2.adicionarAtor(Ator("David Harbour", "20 anos"));
    s2.adicionarDiretor(Diretor("Matt Duffer", 19));
    s2.adicionarDiretor(Diretor("Ross Duffer", 19));

    Serie s3("The Walking Dead", 108);
    s3.adicionarAtor(Ator("Andrew Lincoln", "20 anos"));
    s3.adicionarAtor(Ator("Norman Reedus", "20 anos"));
    s3.adicionarAtor(Ator("Lauren Cohan", "20 anos"));
    s3.adicionarDiretor(Diretor("Frank Darabont", 19));
    s3.adicionarDiretor(Diretor("Greg Nicotero", 19));

    Serie s4("Breaking Bad", 62);
    s4.adicionarAtor(Ator("Bryan Cranston", "20 anos"));
    s4.adicionarAtor(Ator("Aaron Paul", "20 anos"));
    s4.adicionarAtor(Ator("Anna Gunn", "20 anos"));
    s4.adicionarDiretor(Diretor("Vince Gilligan", 19));
    s4.adicionarDiretor(Diretor("Peter Gould", 19));

    // Declarando os apps e adicionando produções

    Streaming prime("Prime", "2.0.1");
    prime << Godfather;
    prime << s1;

    Streaming HBO("HBO", "0.5.2");
    HBO << THR;
    HBO << s4;

    Streaming netflix("Netflix", "1.0.2");
    netflix << TDK;
    netflix << s3;

    Streaming Disney("Disney+", "2.1.3");
    Disney << pp;
    Disney << s2;

    Smartv ex("Samsung", "AU8000", "Tyzen 1.2.0");
    ex.ligar();

    Streaming yt("Youtube", "5.3.2");
    Streaming spt("Spotify", "3.2.5");

    //carregando aplicações:
    ex << h;
    ex << netflix;
    ex << prime;
    ex << HBO;
    ex << Disney;
    ex << yt;
    ex << spt;

    // iniciando o programa p valer
    ex.menuinicio();

    return 0;
}