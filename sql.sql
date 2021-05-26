-- 1A
INSERT INTO FISE(NumeCititor, Adresa, Telefon, AI, DataI, Tip, Clasa)
VALUES ('Andrei Croitoru', 'Arad, Str. Ghioceilor nr 6', '0743043222', 'AR12334', '2021-02-22', 'Elev', '12A'),
       ('Andrei Rusan', 'Arad, Str. Ghioceilor nr 7', '0743043333', 'AR12333', '2021-02-21', 'Elev', '12B'),
       ('Andrei Croitoru-Rusan', 'Arad, Str. Ghioceilor nr 8', '0743043444', 'AR12335', '2021-03-01', 'Elev', '12A');

-- 1B
SELECT *
FROM FISE
ORDER BY NumeCititor;

-- 2A
INSERT INTO CARTI (Titlu, Autor, Categorie, Editura, Pret)
VALUES ('Poezii', 'Tudor Arghezi', 'Literatura', 'Carminus', 21),
       ('Poezii', 'Mihai Eminescu', 'Literatura', 'Delfin', 22),
       ('Poezii', 'Ana Blandiana', 'Literatura', 'Carminus', 19);

-- 2B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Autor;

-- 3A
SELECT C.Titlu, C.Autor, F.NumeCititor, C.Categorie, C.Editura, C.Pret
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE F.Tip = 'Profesor';

-- 3B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Editura;

-- 4A
INSERT INTO OPERATII (NL, CotaCarte, DataI, Durata, DataR, NrZile, Penalizari, NumeBiblio)
VALUES (1, 2, '2021-03-02', 7, NULL, NULL, NULL, 'Popescu'),
       (3, 5, '2021-03-01', 7, NULL, NULL, NULL, 'Ionescu'),
       (2, 4, '2021-03-01', 7, NULL, NULL, NULL, 'Ionescu');

-- 4B
SELECT *
FROM OPERATII
ORDER BY DataI;

-- 5A
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Categorie;

-- 5B
SELECT NumeCititor
FROM FISE
WHERE Tip = 'Elev'
ORDER BY NumeCititor;

-- 6A
SELECT F.NumeCititor
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE DataR IS NULL;

-- 6B
SELECT NumeCititor
FROM FISE
WHERE Tip = 'Elev'
ORDER BY NumeCititor;

-- 7A
SELECT C.Titlu, C.Autor, C.Categorie, C.Editura, C.Pret
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE DataR IS NULL
  AND F.NL = 2;

-- 7B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
WHERE Categorie = 'Beletristica';

-- 8A
SELECT DISTINCT Editura
FROM CARTI;

-- 8B
SELECT COUNT(*)
FROM FISE
WHERE Tip = 'Elev';

-- 9A
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Editura;

-- 9B
SELECT F.NumeCititor, C.Titlu
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataR IS NULL;

-- 10A
SELECT NumeCititor, Clasa
FROM FISE
WHERE Tip = 'Elev'
ORDER BY Clasa;

-- 10B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
WHERE Autor LIKE 'C%';

-- 11A
UPDATE OPERATII
SET Durata = Durata + 7
WHERE NL = 4
  AND CotaCarte = 2;

-- 11B
SELECT NumeCititor
FROM FISE
WHERE Telefon LIKE '0357%';

-- 12A
SELECT NumeCititor, D
FROM FISE
WHERE Tip = 'Profesor'
ORDER BY D;

-- 12B
SELECT DISTINCT Editura
FROM CARTI
WHERE Editura LIKE 'H%';

-- 13A
SELECT C.Titlu, C.Autor, F.NumeCititor
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE DataR IS NULL;

-- 13B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
WHERE Categorie <> 'Informatica';

-- 14A
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Pret DESC;

-- 14B
SELECT NumeCititor
FROM FISE
WHERE DataI > '2017-09-12';

-- 15A
SELECT CotaCarte, Titlu, Editura
FROM CARTI;

-- 15B
SELECT C.Titlu, C.Autor
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE NumeBiblio = 'Popescu';

-- 16A
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Editura;

-- 16B
SELECT C.Titlu, C.Autor
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataI IS;

-- 17A
SELECT NumeCititor, Clasa
FROM FISE
WHERE Tip = 'Elev';

-- 17B
SELECT NumeCititor, Telefon
FROM FISE
WHERE Telefon LIKE '%344%';

-- 18A
SELECT NumeCititor, Clasa
FROM FISE
WHERE Tip = 'Elev'
ORDER BY Clasa;

-- 18B

-- 19A
SELECT NumeCititor, D
FROM FISE
WHERE Tip = 'Profesor'
ORDER BY D;

-- 20A
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Categorie;

-- 21 A
SELECT F.NumeCititor, C.Titlu
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataR IS NULL
ORDER BY F.NumeCititor;

-- 21 B
SELECT NL, NumeCititor, Clasa
FROM FISE
WHERE Tip = 'Elev'
  AND Clasa <> '12A'
ORDER BY NL;

-- 22 A
INSERT INTO OPERATII (NL, CotaCarte, DataI, Durata, NumeBiblio)
VALUES (1, 1, '2021-03-03', 7, 'Ionescu');

-- 23 A
INSERT INTO CARTI (Titlu, Autor, Categorie, Editura, Pret)
VALUES ('Croi este destept', 'Andrei Croitoru', 'Programare', 'Delfin', 420);

-- 29 A
SELECT C.Titlu, C.Autor, C.Categorie, C.Editura, C.Pret
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataR IS NULL
  AND C.Editura = 'Delfin'
ORDER BY C.Titlu;

-- 31 A
SELECT NumeCititor,
       (SELECT COUNT(DataR) /* COUNT IGNORA NULL */
        FROM OPERATII
        WHERE OPERATII.NL = FISE.NL) AS 'Numar carti restituite'
FROM FISE;

-- 31 B
SELECT F.NumeCititor, F.AI
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE F.AI LIKE 'AR%';

-- 32 A
SELECT F.NumeCititor, C.Titlu
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE OPERATII.CotaCarte = 7;

-- 32 B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
WHERE Autor LIKE '%escu%';

-- 33 A
SELECT C.Titlu, C.Autor
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataR IS NOT NULL
ORDER BY C.Autor;

-- 33 B
SELECT C.Titlu, C.Autor
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataR IS NULL;

-- 34 A
SELECT NL, NumeCititor
FROM FISE;

-- 34 B
SELECT C.Titlu, C.Autor
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataR IS NOT NULL;

-- 35 A
SELECT F.NL, F.NumeCititor, F.Telefon, OPERATII.CotaCarte, OPERATII.DataI
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL;

-- 36 A
SELECT Autor
FROM CARTI
ORDER BY Autor;

-- 36 B
SELECT NumeCititor, Clasa
FROM FISE
WHERE Clasa = '12A'
ORDER BY NumeCititor DESC;

-- 37 A
SELECT F.NumeCititor
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE F.Tip = 'Elev'
  AND DataR IS NULL;

-- 37 B
SELECT NumeCititor
FROM FISE
WHERE D = 'TIC';

-- 38 A
SELECT F.NumeCititor, C.Titlu, C.Autor
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE F.Tip = 'Profesor'
  AND DataR IS NULL;

-- 38 B
SELECT F.NumeCititor
FROM OPERATII
         LEFT JOIN FISE F on F.NL = OPERATII.NL
WHERE NumeBiblio = 'Popescu'
ORDER BY F.NL;

-- 39 A
SELECT C.Titlu, C.Autor, DataI, DataR
FROM OPERATII
         LEFT JOIN CARTI C on C.CotaCarte = OPERATII.CotaCarte
WHERE DataI IS NOT NULL
  AND DataR IS NULL;

-- 39 B
SELECT Titlu, Autor, Categorie
FROM CARTI
WHERE Categorie = 'Informatica'
ORDER BY Titlu;

-- 40 A
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
ORDER BY Categorie;

-- 40 B
SELECT Titlu, Autor, Categorie, Editura, Pret
FROM CARTI
WHERE Autor = 'Mihai Eminescu'
ORDER BY CotaCarte;
