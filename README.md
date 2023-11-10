# My-first-project
Sistemos parametrai:Intel(R) Core(TM) i5-7300HQ CPU @ 2.50GHz; RAM 8.00GB, SSD 117 GB

5 testavimų laiko vidurkiai milisekundėmis.(su vektoriais)
| Veiksmo tipas/Studentų kiekis |   1000  |  10000  |  100000  |  1000000  |   10000000  |
|:-----------------------------:|:-------:|:-------:|:--------:|:---------:|:-----------:|
| Failo generavimas             | 338 ms  | 202 ms  | 1156 ms  | 6912 ms   | 80654 ms    |
| Failo skaitymas               | 5.4 ms  | 60.2 ms | 605.4 ms | 5931.4 ms | 103737.6 ms |
| Rušiavimas į dvi kategorijas  | 0 ms    | 3.4 ms  | 39 ms    | 396.6 ms  | 4062.8 ms   |
| Sort vargšiukų rušiavimas     | 0 ms    | 3.4 ms  | 39 ms    | 396.6 ms  | 4062.8 ms   |
| Sort kietiakų rušiavimas      | 0 ms    | 3.4 ms  | 39 ms    | 396.6 ms  | 4062.8 ms   |
| Rašymas į vargšiukų failą     | 11.4 ms | 41.4 ms | 253.8 ms | 2070.8 ms | 21762.2 ms  |
| Rašymas į kietiakų failą      | 6.6 ms  | 38.2 ms | 317.8 ms | 3167 ms   | 30110.8 ms  |

5 testavimų laiko vidurkiai milisekundėmis.(su listais)
| Veiksmo tipas/Studentų kiekis |   1000  |   10000  |   100000  |  1000000  | 10000000 |
|:-----------------------------:|:-------:|:--------:|:---------:|:---------:|:--------:|
| Failo generavimas             | 338 ms  | 202 ms   | 1156 ms   | 6912 ms   | 80654 ms |
| Failo skaitymas               | 81.2 ms | 218.4 ms | 1522.6 ms | 14706 ms  | -        |
| Rušiavimas į dvi kategorijas  | 5.4 ms  | 55.2 ms  | 527.6 ms  | 5379.2 ms | -        |
| Sort vargšiukų rušiavimas     | 0.2 ms  | 2.4 ms   | 35.6 ms   | 500.2 ms  | -        |
| Sort kietiakų rušiavimas      | 0 ms    | 2.4 ms   | 48.8 ms   | 748.8 ms  | -        |
| Rašymas į vargšiukų failą     | 3.8 ms  | 22.4 ms  | 233.2 ms  | 2123.8 ms | -        |
| Rašymas į kietiakų failą      | 4 ms    | 63.6 ms  | 335 ms    | 3026.6 ms | -        |

3 Strategijų tyrimas su Vector priklausomai nuo studentų dalijimo į dvi kategorijas.
|    Vector    |  1000  |  10000  | 100000 |  1000000  | 10000000 |
|:------------:|:------:|:-------:|:------:|:---------:|:--------:|
| 1 strategija | 0 ms   | 3.4 ms  | 38 ms  | 405.2 ms  | 4011 ms  |
| 2 strategija | 2.2 ms | 32.8 ms | 438 ms | 5651.6 ms | 70362 ms |
| 3 strategija | 0 ms   | 7.8 ms  | 88 ms  | 879.2 ms  | 8984 ms  |

Išvados: Pirma strategija yra greičiausia, palyginus su kitom, bet ji užima daugiausiai atminties(6.4GB su 10mln eilučių).
         Antra strategija yra žymiai lėtesnė, negu pirma ir trečia strategija, bet užima mažiausiai atminties.(5.4GB su 10 mln eilučių).
         Trečia strategija yra subalansiuota, ji yra lėtesnė negu pirma, tačiau greitesnė nugu antra, ir užima mažiau atminties palyginus su pirma, tačiau daugiau negu antra.(6.0 GB su 10 mln eilučių).
![Screenshot_5](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/a96235e9-c962-4540-ab95-04822a535b30) (1 strategija)

![Screenshot_10](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/8236b4b5-e2df-47b5-811d-b25bcdc083b8) (2 strategija)

![Screenshot_15](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/2d940b1b-a7c6-4458-a456-369d949ab515) (3 strategija)


3 Strategijų tyrimas su List priklausomai nuo studentų dalijimo į dvi kategorijas.
|     List     |  1000  |  10000  |  100000  |  1000000  | 10000000 |
|:------------:|:------:|:-------:|:--------:|:---------:|:--------:|
| 1 strategija | 4.8 ms | 50.2 ms | 491.8 ms | 4993.6 ms | -        |
| 2 strategija | 0.8 ms | 18.4 ms | 240.8 ms | 2898.2 ms | -        |
| 3 strategija | 0.6 ms | 19.4 ms | 246 ms   | 2833.6 ms | -        |

Išvados: Pirma strategija yra pati neefektiviausia, nes yra apie dukart lėtesnė negu antra ir trečia strategijos, ir užima daugiausiai atminties(4.7 GB su 1 mln eilučių).
         Antra strategija yra labai panaši į trečią strategiją, jų greitis beveik nesiskiria, tačiau ji užima daugiau atminties negu trečia(4.5 GB su 1mln eilučių).
         Trečia strategija yra pati efektyviausia, ji yra panašaus greičio su antra strategija, tačiau užima mažiausiai atminties (3.9 GB su 1 mln eilučių).

![Screenshot_19](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/0c016500-6e02-4b78-a04c-ca1b47cb91a0) (1 strategija)

![Screenshot_23](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/f6c765c0-81d1-4444-897a-4c1a81fb3311) (2 strategija)

![Screenshot_27](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/3fea1c20-cc96-4cd7-8a4c-12c922d58d92) (3 strategija)

V.01:
1)Nauduotojas gali įvesti duomenis ir gauti rezultatus į ekraną. Programa gali skaičiuoti galutinį studento balą pagal vidurkį ar pagal medianą.
2)Yra galimybė sugeneruoti atsitiktinius studento namų darbų ir egzamino rezultatus.
3)Duomenis galima įvesti ne tik ranka,  bet ir nuskaityti iš failo. Taip pat galima gauti rezultatus ne tik ekrane, bet ir faile.
4)Yra realizuotas išimčių valdymas.

V.02:
1)Atsirado galimybė generuoti failus, nauduotojas pats gali nuspresti studentų kiekį, jų namų darbų kiekį.
2)Studentai rušiuojami į dvį grupes - "vargšiukai" - tie, kurių galutinis pažymis yra mažesnis negu 5.0,  ir "kietiakai" - tie, kurių galutinis pažymis yra didesnis negu 5.0.
3)Yra matuojamas failų kūrimo, duomenų nuskaitymo iš failų, studentų rūšiavimo į dvi grupes, surūšiuotų studentų išvedimo į du naujus failus laiko vidurkiai.

V.03:
1)Tokie pat metodai, kaip ir versijoje v.02 realizuoti su list.

V.1.0:
1)Realizuotos 3 skirtingos strategijos su vector ir list.
2)Parengta naudojimosi instrukcija
3)Paruoštas cmake CMakeLists.txt 


Naudojimosi instrukcija : 1) Iš pradžių bus galimybė sugeneruoti savo failą , kuriam reikės nurodyti studentų skaičių, failo pavadinimą ir namų darbų kiekį. Studento vardas ir pavardė yra šabloniniai, namų darbų ir egzamino rezultatai generuojami atsitiktinai. 2) Toliau yra galimybė testuoti skaitymo, rušiavimo ir išvedimo laiką bet kuriai iš 3 strategijų. Yra galivybė pasirinkti kaip reikia rušiuoti studentus(pagal vardą, pavardę arba galutinio balo vidurkį). 3) Po šitų dviejų žingsnių yra galimybė įvesti duomenis arba nuskaityti iš failo. Yra galimybė pasirinkti kaip bus skaičiuojamas galutinis balas( su vidurkiu arba su mediana). 4) Tada naudotojas gali pasirinkti, kur jam patogiau gauti rezultatus - jie gali būti išvedami į ekraną arba į atskirą failą.





