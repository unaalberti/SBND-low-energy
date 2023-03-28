#include <random>

void position()

{

    TFile * input=new TFile("xy_dist_B_22_11_18_08.root","READ");
    TH1F * x_enu=(TH1F *)input->Get("h501");
    TH1F * x_aenu=(TH1F *)input->Get("h502");
    TH1F * y_enu=(TH1F *)input->Get("h505");
    TH1F * y_aenu=(TH1F *)input->Get("h506");

 


    // Add together neutrinos and anti neutrinos
    x_enu->Add(x_aenu);
    y_enu->Add(y_aenu);

   x_enu->Draw();
   y_enu->Draw();





     for (int i = 1; i <= 60000; ++i) 
     {
        
        // generate uniform random value for z position
        std::random_device rd;
        std::uniform_int_distribution<int> dist(0,500);


        std::cout << x_enu->GetRandom() << " "<< y_enu->GetRandom()<< " " << dist(rd)<< " " << 0 <<std::endl;
     }
    



}