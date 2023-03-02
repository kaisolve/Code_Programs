import datetime 
class Amortization:
    
    # constructor to get inputs
    def __init__(self,Principal,Term,Annual_Rate,Day,Month,Year):
        self.P=Principal
        self.Term=Term
        self.Annual_Rate=Annual_Rate
        self.Year=Year
        self.Month=Month
        self.Day=Day
        
    # function to get mortage 
    def Output(self):
        self.I=self.Annual_Rate/12
        N=self.Term*12
        M=self.P*(self.I*pow((1+self.I),N)/(pow((1+self.I),N)-1));
        return M
    
    def Optimization(self):
        Payment=self.Output()
        Beginning_Balance=self.P
        Interest=Beginning_Balance*self.I
        Principal=Payment-Interest
        End_Balance=Beginning_Balance-Principal
        for i in range(360):
            print (i+1)," ",self.Day,".",self.Month,".",self.Year, " ", Beginning_Balance," ",Payment," ",Interest," ",Principal," ",End_Balance
            Beginning_Balance=End_Balance
            Interest=Beginning_Balance*self.I
            Principal=Payment-Interest
            End_Balance=Beginning_Balance-Principal
            self.Month+=1
            if(self.Month==13):
                self.Month=1
                self.Year+=1

A1=Amortization(240000,30,4.25/100,01,01,2023)
A1.Optimization()

