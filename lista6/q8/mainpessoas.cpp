    #include <iostream>
    #include <string>
    #include "pessoa.hpp"
    #include "pessofisica.hpp"
    #include "pessoajuridica.hpp"
    #include "funcionario.hpp"
    #include "cliente.hpp"
    #include "empresa.hpp"

    using std::cout, std::cin, std::string, std::getline, std::endl;

int main()
{
    Pessoa person1("Alessandro Lucas");
    person1.print();
    cout << "\n";
    PessoaFi person2("Victoria Arruda Porto", "782.116.700-20");
    person2.print();
    cout << "\n";
    PessoaJu person3("Yarin Arruda Porto", "67.493.431/0001-08", "Empresa ltda", "Empresa nota 10");
    person3.print();
    cout << "\n";

    cout << person1 << " / " << person2 << " / " << person3 << "\n\n";

    Funcionario person4("alessandro", "595.560.760-93", "67843678", 1100.50, 32, 25);
    cout << person4;

    cout << "\n";

    Cliente person5("André", "859.797.010-36", "(11) 57804-3276", "Rua josefa 05");
    cout << person5;

    Empresa ficticia("Fictícia","000.000.000/1234-00","Fictícia S.A.", "nome fantasia");

    ficticia.armazenaClientes(Cliente("C1","CPF1","3316-2321", "rua sla"));
    ficticia.armazenaClientes(Cliente("C2","CPF2","1234-4321", "rua sla"));

    ficticia.armazenaFuncionarios(Funcionario("F1","CPF4","2001001",3000.0,160,160));
    ficticia.armazenaFuncionarios(Funcionario("F2","CPF5","2001002",4000.0,180,160));

    ficticia.imprimeClientes();
    ficticia.imprimeFuncionarios();

    cout << "Total folha de pagamento: " << ficticia.calculaFolhaPagamento() << endl;

    return 0;
}