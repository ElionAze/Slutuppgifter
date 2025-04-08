# Slutuppgifter

Valutakonverteraren är ett textbaserat C++-program som omvandlar ett angivet belopp i svenska kronor (SEK) till en av fyra förvalda valutor: USD, EUR, GBP eller ALL. Programmet läser aktuella växlingskurser från en textfil och räknar ut det motsvarande beloppet.

Problemet som det här programmet kommer lösa är svårigheten som de flesta har med att veta hur mycket exempelvis 10 SEK är i EUR (euro) eller annan valuta. Jag valde att göra det här projektet eftersom det här är ett problem som uppstår för mig mer än vad du tror. Jag brukar varje sommar resa ner till Kosovo och Albanien och där är det två helt olika valutor, så för att veta hur mycket något hade kostat i kronor hade jag kunna använda det här programmet till min hjälp (med avseende på inflation som ändrar värdet på valutor hela tiden). Meningen med detta är också är även för att det var intressant att jobba med filhantering, vilket är något jag vill ta fram.

Det unika med det här programmet är att jämfört med andra uppgifter måste man använda en extern fil för att lyckas med uppgiften. Egentligen så skulle man kunna definera konstanterna till valutorna i programmet, men i det här fallet skulle det skrivas i en extern fil, vilket gör uppgiften betydligt mer intressant. Detta gjorde så att jag behövde anpassa programmet till att inkludera en extern fil och mha av for-loop och andra kommandon initialisera de olika raderna som innehöll konstanterna och valutakurserna.

Programmet börjar med att fråga användaren om vad för valuta som användaren ska omvandla SEK till. Då får användaren skriva in ett tal mellan 1-4, vilket motsvarar en valuta SEK ska bli omvandlad till. Efter att användaren har skrivit in sitt tal kommer programmet fråga efter ett antal SEK som ska omvandlas till den angivna valutan. Sist, skriver programmet ut vad för valutakurs som användaren har valt, samt hur mycket av valutan det motsvarar i SEK. Exempel på körning är: 
![image](https://github.com/user-attachments/assets/e1972bf0-25bc-48f2-91ff-97b8bcc37fa4)
