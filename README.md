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
1)Naudotojas gali įvesti duomenis ir gauti rezultatus į ekraną. Programa gali skaičiuoti galutinį studento balą pagal vidurkį ar pagal medianą.
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

Naudojimosi instrukcija: 1)Naudotojas turi įdiegti CMake programą. Versija turi būti neankstesnė negu 3.28. 2) Reikia atsiųsti aplankalą "vector" arba "list"(arba ir tą ir tą).3) Naudotojas turi paleisti failą "RUNMEE.bat". Jame jau yra paruoštos komandos.(4 eilutėje jeigu yra kopijuojamas failas, todėl, naudotojas gali pakeisti failo pavadinimą į sau reikalingą failo pavadinimą).4)Aplankale "Debug" naudotojas galės rasti failą su plėtinių .exe. Jį reikia paleisti, tam, kad galima būtų naudotis programą.
Programos galimybės : 1) Iš pradžių bus galimybė sugeneruoti savo failą , kuriam reikės nurodyti studentų skaičių, failo pavadinimą ir namų darbų kiekį. Studento vardas ir pavardė yra šabloniniai, namų darbų ir egzamino rezultatai generuojami atsitiktinai. 2) Toliau yra galimybė testuoti skaitymo, rušiavimo ir išvedimo laiką bet kuriai iš 3 strategijų. Yra galivybė pasirinkti kaip reikia rušiuoti studentus(pagal vardą, pavardę arba galutinio balo vidurkį). 3) Po šitų dviejų žingsnių yra galimybė įvesti duomenis arba nuskaityti iš failo. Yra galimybė pasirinkti kaip bus skaičiuojamas galutinis balas( su vidurkiu arba su mediana). 4) Tada naudotojas gali pasirinkti, kur jam patogiau gauti rezultatus - jie gali būti išvedami į ekraną arba į atskirą failą.

Tirkinimui buvo pasirinkta pirma strategija, nes ji buvo pati greičiausia. Čia yra spartos Struct ir Class palyginimas su Vector konteineriu.

|       Vector su Struct       |  100000  |   1000000  | Vector su Class | 100000   | 1000000    |
|:----------------------------:|:--------:|:----------:|:---------------:|----------|------------|
| Failo generavimas            | 1156 ms  | 6912 ms    | -               | 1156 ms  | 6912 ms    |
| Failo skaitymas              | 683.8 ms | 6107.4 ms  | -               | 617.2 ms | 6344.2 ms  |
| Rušiavimas į dvi kategorijas | 38 ms    | 405.2 ms   | -               | 39.4 ms  | 417.8 ms   |
| Sort vargšiukų rušiavimas    | 576.8 ms | 7155 ms    | -               | 584.4 ms | 7306.8 ms  |
| Sort kietiakų rušiavimas     | 843.6 ms | 10482.4 ms | -               | 867.8 ms | 10687.4 ms |
| Rašymas į vargšiukų failą    | 275.2 ms | 2204.4 ms  | -               | 370.8 ms | 2348.2 ms  |
| Rašymas į kietiakų failą     | 360.4 ms | 3189.4 ms  | -               | 339.2 ms | 3270.4ms   |

![Screenshot_3](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/c7840a9d-f138-4e4e-bafe-9b465cf8f641) (100000 su Struct)
![Screenshot_4](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/ee5376f9-2993-481d-a0e3-bd82b528954d) (1000000 su Struct)
![Screenshot_28(class)](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/8e264aad-e178-44c6-9915-7813f42dc1b8) (100000 su Class)
![Screenshot_29(class)](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/aca884d9-3c38-4a84-bf07-2c8f28765e1f) (1000000 su Class)

Išvada: Kaip galima matyti iš lentelės pateiktos aukščiau, Struct ir Class veikimo greitis buvo panašus, tačiau Struct yra nežymiai greitesnis. Taip pat, Struct naudoja mažiau atminties negu Class. 

|     Vector su Struct.O1      |  100000  |  1000000  | Vector su Struct.O2  | 100000   | 1000000    | Vector su Struct.O3  | 100000   | 1000000    |
|:----------------------------:|:--------:|:---------:|:--------------------:|----------|------------|:--------------------:|----------|------------|
| Failo generavimas            | 1156 ms  | 6912 ms   | -                    | 1156 ms  | 6912 ms    | -                    | 1156 ms  | 6912 ms    |
| Failo skaitymas              | 422.8 ms | 4179 ms   | -                    | 421.4 ms | 4214 ms    | -                    | 418 ms   | 4191.8 ms  |
| Rušiavimas į dvi kategorijas | 12.2 ms  | 137.6 ms  | -                    | 11.6 ms  | 133.2 ms   | -                    | 12.2 ms  | 132 ms     |
| Sort vargšiukų rušiavimas    | 112.8 ms | 1475.4 ms | -                    | 113.4 ms | 1456.4 ms  | -                    | 108.8 ms | 1426.8 ms  |
| Sort kietiakų rušiavimas     | 167.6 ms | 2156 ms   | -                    | 166.2 ms | 2135.6 ms  | -                    | 162 ms   | 2098.4 ms  |
| Rašymas į vargšiukų failą    | 198.4 ms | 2105.4 ms | -                    | 197.4 ms | 1985.6 ms  | -                    | 200.8 ms | 1984.2 ms  |
| Rašymas į kietiakų failą     | 275 ms   | 2771.2 ms | -                    | 277.6 ms | 2782.8 ms  | -                    | 272.2 ms | 2976.6 ms  |

|      Vector su Class.O1      |  100000  |  1000000  | Vector su Class.O2  | 100000   | 1000000    | Vector su Class.O3  | 100000   | 1000000   |
|:----------------------------:|:--------:|:---------:|:-------------------:|----------|------------|:-------------------:|----------|-----------|
| Failo generavimas            | 1156 ms  | 6912 ms   | -                   | 1156 ms  | 6912 ms    | -                   | 1156 ms  | 6912 ms   |
| Failo skaitymas              | 441.4 ms | 4254.2 ms | -                   | 420.4 ms | 4191.8 ms  | -                   | 419.2 ms | 4190.6 ms |
| Rušiavimas į dvi kategorijas | 12.8 ms  | 140.8 ms  | -                   | 11.6 ms  | 137.6 ms   | -                   | 11.8 ms  | 132.6 ms  |
| Sort vargšiukų rušiavimas    | 116.4 ms | 1474.8 ms | -                   | 113.2 ms | 1453.8 ms  | -                   | 109.4 ms | 1433.6 ms |
| Sort kietiakų rušiavimas     | 168.8 ms | 2170.8 ms | -                   | 162.2 ms | 2140.2 ms  | -                   | 159.8 ms | 2098.6 ms |
| Rašymas į vargšiukų failą    | 211.4 ms | 2008.2 ms | -                   | 198.8 ms | 2018.4 ms  | -                   | 199.4 ms | 1972.4 ms |
| Rašymas į kietiakų failą     | 281 ms   | 3034 ms   | -                   | 277.2 ms | 2816.4 ms  | -                   | 275.2 ms | 2842 ms   |

![Screenshot_1](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/7016a6e0-6669-4dfb-b67c-aaa010836404) (Struct su 100000 eilučių su O1 flag'u)
![Screenshot_3](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/0ae55f36-5613-4c43-8677-c43aebcdb1ca) (Struct su 1000000 eilučių su O1 flag'u)
![Screenshot_4](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/8f8d1b3c-638d-46e7-9f5f-17a67f925a17) (Struct su 100000 eilučių su O2 flag'u)
![Screenshot_6](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/4a184f18-553c-4484-811a-d129dd8ad307) (Struct su 1000000 eilučių su O2 flag'u)
![Screenshot_7](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/c908cfc4-87b9-4395-8255-5e3c84d4e1e8) (Struct su 100000 eilučių su O3 flag'u)
![Screenshot_9](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/4cb30201-e933-40c3-8cdf-fd3ac4dc4609) (Struct su 1000000 eilučių su O3 flag'u)
![Screenshot_10](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/acb9341e-19e8-42ee-82eb-fa860883da17) (Class su 100000 eilučių su O1 flag'u)
![Screenshot_12](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/b0429623-82a6-4031-8a43-dccf1991fc62) (Class su 1000000 eilučių su O1 flag'u)
![Screenshot_14](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/26f3c539-5d35-463f-bf63-c4b4cae1a072) (Class su 100000 eilučių su O2 flag'u)
![Screenshot_15](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/bfb045ed-0165-47fb-9597-d7ab868ab538) (Class su 1000000 eilučių su O2 flag'u)
![Screenshot_16](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/8e3f1c34-61d9-4275-a109-eeb8af880f01) (Class su 100000 eilučių su O3 flag'u)
![Screenshot_18](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/25591a42-55c0-4847-a64f-9f96cca4e359) (Class su 1000000 eilučių su O3 flag'u)
 
![Screenshot_2](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/7db400d3-a6c8-44ae-ba34-f34b4e9e9ca3) (Struct su O1 flag'u)
![Screenshot_5](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/bce73136-97f2-4234-b973-e00074e13a2b) (Struct su O2 flag'u)
![Screenshot_8](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/e2045ae0-ed0a-4760-a8e8-61a52307d6c0) (Struct su O3 flag'u)
![Screenshot_11](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/d93d6be1-ed75-4ad8-8eff-a3746859b9a2) (Class su O1 flag'u)
![Screenshot_13](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/84f8d533-85f1-4857-988e-0181f50015e1) (Class su O2 flag'u)
![Screenshot_17](https://github.com/ArturAndiukajev/MySecondProject/assets/144611797/002a708f-7052-4956-81b5-3b5fb0a34d3d) (Class su O3 flag'u)


Išvados: Struct) flag'as O3 geriau optimizuoja failo skaitymą ir rušiavimą, negu kiti. Visi flag'ai žymiai paspartina programos veikimą, palyginus su programos veikimu be flag'ų. Visų trijų flag'ų optimizavimas beveik nesiskiria. Tačiau exe failo dydis beveik tris kartus padidėja naudojant flag'us - be flag'ų 915 KB , su O1 flag'u -2555 KB, su O2 -3046 KB, su O3 - 2938 KB. Class) Su Class flag'ai O1, O2, O3 veikia taip pat beveik vienodai, nėra kažkokių didelių skirtumų tarp jų. Tačiau jie paspartina programos veikimą, palyginus su programos veikimu be flag'ų. Exe failo dydis be flag'ų -927 KB, su O1- 2610 KB, su O2 -3147 KB, su O3 - 2953 KB.  Taip pat atminties atžvilgiu ir Class ir Struct su kiekvienų iš trijų flag'ų naudojo beveik panašų kiekį atminties.(nuo 4.4 GB iki 4.9 GB)
