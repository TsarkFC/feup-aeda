#ifndef _DIC
#define _DIC
#include <string>
#include <fstream>
#include "bst.h"


class PalavraSignificado {
      string palavra;
      string significado;
public:
       PalavraSignificado(string p, string s): palavra(p), significado(s) {}
       string getPalavra() const { return palavra; }
       string getSignificado() const { return significado; }
       void setSignificado(string sig) { significado=sig; }
       bool operator < (const PalavraSignificado &ps1) const;
};

class Dicionario
{
      BST<PalavraSignificado> palavras;
public:
      Dicionario(): palavras(PalavraSignificado("","")){};
      BST<PalavraSignificado> getPalavras() const;
      void lerDicionario(ifstream &fich);
      string consulta(string palavra) const;
      bool corrige(string palavra, string significado);
      void imprime() const;
};

// a alterar
class PalavraNaoExiste
{
    PalavraSignificado antes = PalavraSignificado("","");
    PalavraSignificado depois = PalavraSignificado("","");
public:
    PalavraNaoExiste(PalavraSignificado antes, PalavraSignificado depois){
        this->antes = antes;
        this->depois = depois;
    }
	string getPalavraAntes() const { return antes.getPalavra(); }
	string getSignificadoAntes() const { return antes.getSignificado(); }
	string getPalavraApos() const { return depois.getPalavra(); }
	string getSignificadoApos() const { return depois.getSignificado(); }
};


#endif
