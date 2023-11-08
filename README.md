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
![Screenshot_5](https://github.com/ArturAndiukajev/My-first-project/assets/144611797/a96235e9-c962-4540-ab95-04822a535b30)

         

3 Strategijų tyrimas su List priklausomai nuo studentų dalijimo į dvi kategorijas.
|     List     |  1000  |  10000  |  100000  |  1000000  | 10000000 |
|:------------:|:------:|:-------:|:--------:|:---------:|:--------:|
| 1 strategija | 4.8 ms | 50.2 ms | 491.8 ms | 4993.6 ms | -        |
| 2 strategija | 0.8 ms | 18.4 ms | 240.8 ms | 2898.2 ms | -        |
| 3 strategija | 0.6 ms | 19.4 ms | 246 ms   | 2833.6 ms | -        |

Išvados: Pirma strategija yra pati neefektiviausia, nes yra apie dukart lėtesnė negu antra ir trečia strategijos, ir užima daugiausiai atminties(4.7 GB su 1 mln eilučių).
         Antra strategija yra labai panaši į trečią strategiją, jų greitis beveik nesiskiria, tačiau ji užima daugiau atminties negu trečia(4.5 GB su 1mln eilučių).
         Trečia strategija yra pati efektyviausia, ji yra panašaus greičio su antra strategija, tačiau užima mažiausiai atminties (3.9 GB su 1 mln eilučių).


