#include "pch.h"
#include "firstlib.h"
#include "firstlib.cpp"



TEST(KlasesStudentTestas, StudentoVeikymoPatykra ) 
{
    Studentas studentas;
    studentas.setVardas("Cipsas");
    studentas.setPavarde("Kebabas");
    studentas.addND(1);
    studentas.addND(2);
    studentas.addND(3);
    studentas.setEgzaminas(10);
    EXPECT_EQ("Cipsas", studentas.getVardas());
    EXPECT_EQ("Kebabas", studentas.getPavarde());
    EXPECT_EQ(10, studentas.getEgz());
}

TEST(KlasesStudentTestas, StudentoPazymiuPatykra)
{
    Studentas studentas;
    studentas.addND(-5);
    studentas.addND(10);
    studentas.addND(33);
    EXPECT_THROW(studentas.addND(-5), std::invalid_argument);
    EXPECT_THROW(studentas.addND(33), std::invalid_argument);
}

TEST(KlasesStudentTestas, GalutinisSkaiciavimas)
{
    Studentas studentas;
    studentas.addND(5);
    studentas.addND(8);
    studentas.addND(7);
    studentas.setEgzaminas(9);
    studentas.setGalutinis(rezultatas(studentas));
    EXPECT_EQ(8.06, studentas.getGalutinis);
}
