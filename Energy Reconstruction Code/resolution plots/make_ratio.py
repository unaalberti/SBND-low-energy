import numpy as np 
import matplotlib.pyplot as plt 
import math
with open('depeng_cut_pandn.txt', 'r') as file1, open('eng_cut_pandn.txt', 'r') as file2:

    array = []
    for line1, line2 in zip(file1, file2):
        dep_eng = float(line1)*1
        #ratio = ((float(line2)*1000) - (float(line1)*1))/(float(line2)*1000)
        #ratio = ((float(line2)*1000) - (float(line1)*1))/(float(line2)*1000)
        #ratio = (float(line1)-(float(line2)*1000))/((float(line2)*1000))
        ratio = (float(line2)*1000)/float(line1)
        #if ratio>=1 and ratio<=1.05:
        array.append(ratio)
        #print(float(line2)*1000)
        #print((float(line1)*1))
        #print(ratio)
file1.close()
file2.close()

#plot difference score in log histogram
#plt.hist(array, bins=1000, color = "royalblue")
#plt.title("(eng)/dep_eng")
#plt.xlabel('$\\frac{{{Energy}}}{{{Deposited Energy}}}$')
#plt.ylabel("Number of counts")
#plt.savefig("ratio_hist.pdf")
#plt.grid('on')
#plt.xlim(xmin = 0, xmax = 6)
#plt.savefig("ratio_hist_all.pdf")


with open('depeng_cut_pandn.txt', 'r') as file1, open('eng_cut_pandn.txt', 'r') as file2:

    calibration_cont = np.mean(array)
    array_1 = []
    for line1, line2 in zip(file1, file2):
        ratio1 = ( (float(line1)*1*calibration_cont)-(float(line2)*1000))/(float(line2)*1000)
        print(ratio1)
        #ratio1 = ((float(line1)*calibration_cont)-(float(line2)*1000))/((float(line2)*1000))
        array_1.append(ratio1)


    #print(array_1)
file1.close()
file2.close()



#plt.hist(array_1, bins=40)
#plt.title("(Corrected-True)/(True)")
#plt.xlabel("Energy MeV")
#plt.ylabel("Number of counts")
#plt.savefig("calibrated_energy_no_protons_10cmcut.pdf") 

print("calc const" , calibration_cont)
print("mean", np.mean(array_1))
print("std", np.std(array_1))

#import useful packages
import numpy as np
import math
import sys
import random
import scipy.integrate as integrate
import numpy as np
from matplotlib.pyplot import figure
import scipy.integrate as integrate
import scipy.special as special
from scipy.special import erfinv
import random
import math
from scipy.stats import norm
from iminuit import Minuit
from scipy import stats
from math import log10, floor
from iminuit.cost import UnbinnedNLL



#Now I am going to fit array_1 to a gaussian centred around 0 to get its standard deviation


#create normalised composite function to the h1 hypothesis
def composite_pdf(x,mu,sigma):

    norm_gauss = (1/(sigma*np.sqrt(2*np.pi)))*np.exp(-0.5*(((x-mu)/sigma)**2))
    
    return (norm_gauss)

#create a function for the NLL
def nll_2(mu,sigma):
    array = [] 
    for i in range(len(array_1)):
        nll_2 = np.log(composite_pdf(array_1,mu,sigma))
        array.append(nll_2)
    nll = -np.sum(array)
    
    return nll

#Define start values for the minimizer
startvals = {"mu":0., "sigma":0.2}

#Create a minimiser for the NLL 
theMinuit = Minuit(nll_2, **startvals)

#Set the errors on the initial start values of the minimizer
theMinuit.errors=[0.1,0.1]

#Set the increase for the 1-SD error calculation
theMinuit.errordef=0.5

#Run the minimisation
result = theMinuit.migrad()


#Print lifetime, mean and fraction which is predicted from the minimiser
tau_cor = theMinuit.values["mu"]
tau_cor_error = theMinuit.errors["mu"]
print("mean is : ",tau_cor,"+-",tau_cor_error)
f_cor = theMinuit.values["sigma"]
f_cor_error = theMinuit.errors["sigma"]
print("sigma is : ",f_cor,"+-",f_cor_error)


# Plot the fit over the data

x = np.linspace(-1, 1, 1000)
y = composite_pdf(x,mu = theMinuit.values["mu"],sigma = theMinuit.values["sigma"])

plt.hist(array_1, bins=100, color = "royalblue",density=True)
#plt.plot(x, y)
plt.title("")
plt.xlabel('$\\frac{{{corrected - True}}}{{{True}}}$')
plt.ylabel("Number of Events")
plt.grid('on')
plt.xlim(xmin=-1, xmax = 2)
plt.savefig("cut_pandn.pdf") 

