int main()
{
    struct horario
{
    int horas;
    int minutos;
    int segundos;
};

struct horario teste[3] = {{1,2,3}, {2,3,4}, {3,4,5}};

int i;
for (i=0; i<3; i++){
    printf ("%d:%d:%d\n", teste[i].horas,
                          teste[i].minutos,
                          teste[i].segundos);
}


}
