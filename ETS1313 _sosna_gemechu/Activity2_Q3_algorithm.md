## Algorithm
Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.
## psedocode of the above code
* start
* read input of two positive integer number X and Y
* i=1, X=1 
* X*=X
* if(i<=Y), then goto line 4
* end


  ```mermaid
flowchart TD
    Start([Start])
    Input1["Read height, weight, and number"]
    Calc["Calculate BMI = weight / (height * height)"]
    Check1["BMI < 18.5?"]
    Underweight["Underweight"]
    Check2["BMI ≤ 24.9?"]
    Normal["Normal weight"]
    Check3["BMI ≤ 29.9?"]
    Overweight["Overweight"]
    Obese["Obese"]
    Output["Print weight category"]
    Continue["Read number (1 to continue, 0 to exit)"]
    Decision["number = 1?"]
    End([End])

     Start --> Input1
    Input1 --> Calc
    Calc --> Check1
    Check1 --> Underweight
    Check1 --> Check2
    Underweight --> Output
    Check2 --> Normal
    Check2 --> Check3
    Normal --> Output
    Check3 --> Overweight
    Check3 --> Obese
    Overweight --> Output
    Obese --> Output
    Output --> Continue
    Continue --> Decision
    Decision --> Input1
    Decision --> End
