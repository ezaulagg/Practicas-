class Mascota
{
private:
    int vida;
public:
    Mascota() {
        vida = 100;
    }
    ~Mascota() {}
    void golpear(){
        vida +=10;
    }
    int LeerVida(){
        return vida;
    }
    void Acariciar(){
    vida += 10;
    }
};