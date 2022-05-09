enum Color {White, Black};


class Chesspiece
{
private:

public:
    Chesspiece();
    ~Chesspiece();
};


class Pawn : public Chesspiece
{
    private:
    public:
        Pawn();
        ~Pawn();
};


class King : public Chesspiece
{
    private:
    public:
        King();
        ~King();
};


class Queen : public Chesspiece
{
    private:
    public:
        Queen();
        ~Queen();
};


class Bishop : public Chesspiece
{
    private:
    public:
        Bishop();
        ~Bishop();
};


class Rook : public Chesspiece
{
    private:
    public:
        Rook();
        ~Rook();
};


class Knight : public Chesspiece
{
    private:
    public:
        Knight();
        ~Knight();
};


Chesspiece::Chesspiece(/* args */)
{
}

Chesspiece::~Chesspiece()
{
}
