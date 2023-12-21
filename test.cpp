#include "pch.h"
#include "firstlib.cpp"
#include "firslib.h"


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
    EXPECT_EQ(10, studentas.getEgzaminas());
}

TEST(KlasesStudentTestas, StudentoPatykra)
{
    Studentas studentas;
    studentas.setVardas("Cipsas");
    studentas.setPavarde("Kebabas");
    studentas.addND(-5);
    studentas.addND(10);
    studentas.addND(33);
    studentas.setEgzaminas(10);
    EXPECT_EQ("Cipsas", studentas.vardas());
    EXPECT_EQ("Kebabas", studentas.pavarde());
    EXPECT_EQ(10, studentas.egzaminas());
    EXPECT_THROW(studentas.addND(-5), std::invalid_argument);
    EXPECT_EQ("Pazymys negali buti didesnis uz 10 arba mazesnis uz 0");
}
TEST(KlasesStudentTestas, StudentoRezultatuPatykra)
{
    Studentas studentas;
    studentas.addND(5);
    studentas.addND(8);
    studentas.addND(7);
    studentas.setEgzaminas(9);
    EXPECT_DOUBLE_EQ(7.4, studentas.getGalutinis());
    double mediana = studentas.Med();
    EXPECT_DOUBLE_EQ(8.6, studentas.rezMed(mediana));
}