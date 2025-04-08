# Slutuppgifter

# Sammanfattning
Valutakonverteraren är ett textbaserat C++-program som omvandlar ett angivet belopp i svenska kronor (SEK) till en av fyra förvalda valutor: USD, EUR, GBP eller ALL. Programmet läser aktuella växlingskurser från en textfil och räknar ut det motsvarande beloppet.

# Bakgrund 💵
Problemet som det här programmet kommer lösa är svårigheten som de flesta har med att veta hur mycket exempelvis 10 SEK är i EUR (euro) eller i annan valuta. Jag valde att göra det här projektet eftersom det här är ett problem som uppstår för mig mer än vad du tror. Jag brukar varje sommar resa ner till Kosovo och Albanien och där är det två helt olika valutor, så för att veta hur mycket något hade kostat i kronor hade jag kunnat använda det här programmet till min hjälp (med avseende på inflation som ändrar värdet på valutor hela tiden). Meningen med detta är också för att det var intressant att jobba med filhantering, vilket är något jag vill ta fram.

# Nyckelaspekter (frivilligt) 📂
Det unika med det här programmet är att jämfört med andra uppgifter måste man använda en extern fil för att lyckas med uppgiften. Egentligen så skulle man kunna definiera konstanterna till valutorna i programmet, men i det här fallet skulle det skrivas i en extern fil, vilket gör uppgiften betydligt mer intressant. Detta gjorde så att jag behövde anpassa programmet till att inkludera en extern fil och for-loopar (samt andra kommandon) för att initialisera de olika raderna som innehöll konstanterna och valutakurserna.

# Hur används programmet? ▶️
Programmet börjar med att fråga användaren om vad för valuta som användaren ska omvandla SEK till. Då får användaren skriva in ett tal mellan 1-4, vilket motsvarar en valuta SEK ska bli omvandlad till. Efter att användaren har skrivit in sitt tal kommer programmet fråga efter ett belopp SEK som ska omvandlas till den angivna valutan. Sist, skriver programmet ut vad för valutakurs som användaren har valt, samt hur mycket av valutan det motsvarar i SEK. Exempel på körning är: 

![image](https://github.com/user-attachments/assets/e1972bf0-25bc-48f2-91ff-97b8bcc37fa4)

# Utmaningar 😔
Även om programmet verkar vara ganska bra har det även problem med sig. Det största problemet som programmet har är att den är inte enkel att få tillgång till i ett vardagligt sammanhang. Det hade varit ganska jobbigt ifall varje gång man vill omvandla SEK till en valuta att man måste gå in på programmet och sen starta det. Ett annat problem som är nästan lika stort som det förra är att valutan inte alltid har samma värde pga inflation. 

# Vad härnäst (What next?) 🤔
I framtiden hade programmet kunnat utvecklas genom att lösa problemen som jag skrev om precis. Man hade kunnat exempelvis försöka länka programmet till en online databas som konstant ändrar värdet på valutan till valutans nuvarande värde (motsvarande till SEK då). Sen hade programmet också kunnat på något sätt blivit överförd och anpassad till en app på datorer och mobiltelefoner, vilket hade underlättat problemet med att behöva starta ett extern program med kompilator (Visual Studio 2022 exempelvis) för att få ett svar som inte är helt noggrann till det egentliga värdet av valutan.
