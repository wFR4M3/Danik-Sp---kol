# Výpočet koule

Jednoduchý program v C pro výpočet povrchu a objemu koule na základě poloměru zadaného uživatelem.

## Funkce
- Vypočítá povrch koule pomocí vzorce: `4 * π * r²`
- Vypočítá objem koule pomocí vzorce: `(4/3) * π * r³`
- Uživatelsky přívětivé zadávání poloměru koule
- Výstup výsledků formátovaný na dvě desetinná místa
- Obsahuje základní kontrolu chyb pro spuštění programu

## Předpoklady
- Kompilátor C (např. GCC, Clang nebo MSVC)
- Standardní knihovny C (`stdio.h`, `math.h`)

## Instalace
1. Naklonujte repozitář:
   ```bash
   git clone https://github.com/wFR4M3/Danik-Sps-ukol.git
   ```
2. Přejděte do adresáře projektu:
   ```bash
   cd Danik-Sps-ukol
   ```
3. Zkompilujte program:
   ```bash
   gcc calculator.c -o calculator -lm
   ```

## Použití
1. Spusťte zkompilovaný program:
   ```bash
   ./calculator
   ```
2. Zadejte poloměr koule po výzvě.
3. Zobrazte vypočítaný povrch a objem, zobrazené ve vámi zvolených jednotkách (druhá a třetí mocnina).

## Příklad výstupu
```
Zadejte poloměr koule: 5
Plocha koule je: 314.16 (vaší jednotky²)
Objem koule je: 523.60 (vaší jednotky³)
```

## Kód
Hlavní program (`calculator.c`) je čistá implementace výpočtů koule. Program:
- Definuje konstantu pro π (3.141)
- Vyzve uživatele k zadání poloměru
- Vypočítá povrch a objem
- Formátuje a zobrazí výsledky

## Přispívání
Tento projekt je jednoduchý, ale můžete si jej forkout a vylepšit. Návrhy na zlepšení jsou vítány prostřednictvím pull requestů nebo issues.

## Licence
Tento projekt je licencován pod MIT licencí. Podrobnosti naleznete v souboru [LICENSE](LICENSE).
