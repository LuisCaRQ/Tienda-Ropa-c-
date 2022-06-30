#include "archivos.h"

////////////////////////////////PERSON////////////////////////////////
void archivos::addPersonFile(cliente* parameter){
    updatePersonFile();
    string nameFile = "filePerson.txt";
    ofstream file;
    file.open(nameFile.c_str(), ios::out);
    file << textFilePerson
         << parameter->getCedula() << endl
         << parameter->getNombre() << endl
         << parameter->getCorreo() << endl
         << parameter->getCiudad() << endl
         << parameter->getPais() << endl
         << parameter ->getPago() << endl
         << parameter ->getNacionalidad()
         <<endl;
    file.close();
}

void archivos::updatePersonFile(){
    ifstream file;
    string line;
    textFilePerson = "";
    file.open("filePerson.txt",ios::in);

    if(file.fail()){
        cout << "File does not exist, creating a new one \"filePerson.txt\"\n" << endl << endl;
        ofstream fileAux("filePerson.txt"); // crea un archivo nuevo
        fileAux.close();
        file.open("filePerson.txt",ios::in);
    }
    int index = 0;
    int cont = 0;
    lenListPerson = 0;
    while(!file.eof()){
        getline(file, line);
        if(line != ""){
            textFilePerson += line + "\n";
            if(cont % 7 == 0){
                listPerson[index] = line;
                lenListPerson++;
                index ++;
            }
            cont ++;
        }
    }
    file.close();
}

persona* archivos::getPersonFile(string parameter){
    updatePersonFile();
    ifstream file;
    string line;
    persona* person = new persona;
    file.open("filePerson.txt",ios::in);
    while(!file.eof()){
        getline(file, line);
        if(line == parameter){
            person->setCedula(line);
            getline(file, line); person->setNombre(line);
            getline(file, line); person->setCorreo(line);
            getline(file, line); person->setCiudad(line);
            getline(file, line); person->setPais(line);
            getline(file, line); person->setPagoSuscrip(stod(line));
            getline(file, line); person->setNacionalidad(line);
            break;
        }
    }

    file.close();
    return person;
}

string* archivos::getListPerson(){
    updatePersonFile();
    return listPerson;
}

int archivos::getLenListPerson(){
    updatePersonFile();
    return lenListPerson;
}

///////////////////////////////////////////Business///////////////////////////
void archivos::updateBusinessFile(){
    ifstream file;
    string line;
    textFileBusiness = "";
    file.open("fileBusiness.txt",ios::in);

    if(file.fail()){
        cout << "File does not exist, creating a new one \"fileBusiness.txt\"\n" << endl << endl;
        ofstream fileAux("fileBusiness.txt"); // crea un archivo nuevo
        fileAux.close();
        file.open("fileBusiness.txt",ios::in);
    }
    int index = 0;
    int cont = 0;
    lenlistBusiness = 0;
    while(!file.eof()){
        getline(file, line);
        if(line != ""){
            textFileBusiness += line + "\n";
            if(cont % 7 == 0){
                listBusiness[index] = line;
                lenlistBusiness++;
                index ++;
            }
            cont ++;
        }
    }
    file.close();
}

void archivos::addBusinessFile(cliente* parameter){
    updateBusinessFile();
    string nameFile = "fileBusiness.txt";
    ofstream file;
    file.open(nameFile.c_str(), ios::out);
    file << textFileBusiness
         << parameter->getCedula() << endl
         << parameter->getNombre() << endl
         << parameter->getCorreo() << endl
         << parameter->getCiudad() << endl
         << parameter->getPais() << endl
         << parameter ->getPago() << endl
         << parameter ->getClienteFrecuente()
         <<endl;
    file.close();
}

empresa* archivos::getBusinessFile(string parameter){
    updateBusinessFile();
    ifstream file;
    string line;
    empresa* person = new empresa;
    file.open("fileBusiness.txt",ios::in);
    while(!file.eof()){
        getline(file, line);
        if(line == parameter){
            person->setCedula(line);
            getline(file, line); person->setNombre(line);
            getline(file, line); person->setCorreo(line);
            getline(file, line); person->setCiudad(line);
            getline(file, line); person->setPais(line);
            getline(file, line); person->setPagoSuscrip(stod(line));
            getline(file, line);
            if(line == "0"){
                person->setClienteFrecuente(false);
            }else{
                person->setClienteFrecuente(true);
            }

            break;
        }
    }

    file.close();
    return person;
}
string* archivos::getListBusiness(){
    updateBusinessFile();
    return listBusiness;
}

int archivos::getLenListBusiness(){
    updateBusinessFile();
    return lenlistBusiness;
}


/////////////////////////////////////////SUITS/////////////////////////////////////////

void archivos::updateSuitFile(){
    ifstream file;
    string line;
    textFileSuit = "";
    file.open("fileSuit.txt",ios::in);

    if(file.fail()){
        cout << "File does not exist, creating a new one \"fileSuit.txt\"\n" << endl << endl;
        ofstream fileAux("fileSuit.txt"); // crea un archivo nuevo
        fileAux.close();
        file.open("fileSuit.txt",ios::in);
    }
    int index = 0;
    int cont = 0;
    lenListSuit = 0;
    while(!file.eof()){
        getline(file, line);
        if(line != ""){
            textFileSuit += line + "\n";
            if(cont % 15 == 0){

                listSuit[index] = line;
                lenListSuit++;

            }
            if(cont % 15 == 2){
                listSuitPrice[index] = line;
                index ++;
            }
            cont ++;
        }
    }
    file.close();
}

void archivos::addSuitFile(AbstractSuit* parameter){
    updateSuitFile();
    string nameFile = "fileSuit.txt";
    ofstream file;
    file.open(nameFile.c_str(), ios::out);
    file << textFileSuit
         << parameter->getCode() << endl
         << parameter->getType() << endl
         << parameter->getPrice() << endl
         << parameter->getCamisAbstr()->getCode() << endl
         << parameter->getCamisAbstr()->getColor() << endl
         << parameter->getCamisAbstr()->getCondicion() << endl
         << parameter->getCamisAbstr()->getPrice() << endl
         << parameter->getPantalonAbstr()->getCode() << endl
         << parameter->getPantalonAbstr()->getColor() << endl
         << parameter->getPantalonAbstr()->getCondicion() << endl
         << parameter->getPantalonAbstr()->getPrice() << endl
         << parameter->getZapatoAbstr()->getCode() << endl
         << parameter->getZapatoAbstr()->getColor() << endl
         << parameter->getZapatoAbstr()->getCondicion() << endl
         << parameter->getZapatoAbstr()->getPrice() << endl
         <<endl;
         cout << "aqui no\n"<<endl;
    file.close();
}

AbstractSuit* archivos::getSuitFile(string parameter){
    ifstream file;
    string line;
    AbstractSuit* suit = new executiveSuit();
    CamisAbstr* camisa = new ConCuadros();
    ZapatoAbstr* zapato = new bota();
    PantalonAbstr* patalon = new Jeams();
    file.open("fileSuit.txt",ios::in);

    while(!file.eof()){
        getline(file, line);
        if(line == parameter){

            suit->setCode(line);
            getline(file, line); suit->setType(line);
            getline(file, line); suit->setPrice(stod(line));


            getline(file, line); camisa->setCode(line);
            getline(file, line); camisa->setColor(line);
            getline(file, line);
            if(line == "0"){
                camisa->setCondicion(false);
            }else{
                camisa->setCondicion(true);
            }
            getline(file, line); camisa->setPrice(stod(line));


            getline(file, line); patalon->setCode(line);
            getline(file, line); patalon->setColor(line);
            getline(file, line);
            if(line == "0"){
                patalon->setCondicion(false);
            }else{
                patalon->setCondicion(true);
            }
            getline(file, line); patalon->setPrice(stod(line));


            getline(file, line); zapato->setCode(line);
            getline(file, line); zapato->setColor(line);
            getline(file, line);
            if(line == "0"){
                zapato->setCondicion(false);
            }else{
                zapato->setCondicion(true);
            }
            getline(file, line); zapato->setPrice(stod(line));
            suit->setCamisAbstr(camisa);
            suit->setPantalonAbstr(patalon);
            suit->setZapatoAbstr(zapato);
            break;
        }
    }
    file.close();
    return suit;
}

string* archivos::getListSuitPrice(){
    updateSuitFile();
    return listSuitPrice;
}

string* archivos::getListSuit(){
    updateSuitFile();
    return listSuit;
}

int archivos::getLenListSuit(){
    updateSuitFile();
    return lenListSuit;
}

////////////////////////////////////////////VENTAS//////////////////////////////

void archivos::updateSellFile(){
    ifstream file;
    string line;
    textFileSell = "";
    file.open("fileSell.txt",ios::in);

    if(file.fail()){
        cout << "File does not exist, creating a new one \"fileSell.txt\"\n" << endl << endl;
        ofstream fileAux("fileSell.txt"); // crea un archivo nuevo
        fileAux.close();
        file.open("fileSell.txt",ios::in);
    }
    int index = 0;
    int cont = 0;
    lenListSell = 0;
    while(!file.eof()){
        getline(file, line);
        if(line != ""){
            textFileSell += line + "\n";
            if(cont % 11 == 0){
                listSell[index] = line;
            }
            if(cont % 11 == 2){
                listSell_idSuit[index] = line;
            }
            if(cont % 11 == 3){
                listSell_Price[index] = line;
            }
            if(cont % 11 == 4){
                listSell_Stonk[index] = line;
                lenListSell++;
                index ++;
            }
            cont ++;
        }
    }
    file.close();
}

void archivos::addSellFile(venta* parameter){

    updateSellFile();
    string nameFile = "fileSell.txt";
    ofstream file;
    file.open(nameFile.c_str(), ios::out);
    file << textFileSell
         << parameter->getId_factura() << endl
         << parameter->getId_Cliente() << endl
         << parameter->getId_traje() << endl
         << parameter->getSuitPrice() << endl
         << parameter->getGanancia() << endl
         << parameter->getIva() << endl
         << parameter->getTotalPrice() << endl
         << parameter->getTransporteCiudad() << endl
         << parameter->getTransporteCodigo() << endl
         << parameter->getTransportePais() << endl
         << parameter->getTransportePrecio() << endl
         <<endl;
    file.close();
}
string* archivos::getListSell(){
    updateSellFile();
    return listSell;
}

string* archivos::getListSell_Price(){
    updateSellFile();
    return listSell_Price;
}

string* archivos::getListSell_Stonk(){
    updateSellFile();
    return listSell_Stonk;
}

string* archivos::getListSell_idSuit(){
    updateSellFile();
    return listSell_idSuit;
}

int archivos::getLenListSell(){
    updateSellFile();
    return lenListSell;
}
