void plots()

{
    //INPUT FILE

    TFile * input=new TFile("reco2_output_2000_AnaTree-20230315T101145.root","READ");
    TTree *tree = (TTree*)input->Get("opdetanalyzer/AllPhotons");


     //TH1F *histo = (TH1F*)tree->FindObject("StartPointx",300,-300,300);
    TH1F* h2=new TH1F("h2","",100,0,800);
    //TH2D* h2=new TH2D("h2","",50,-300,300,50,-300,300);

    h2->GetXaxis()->SetTitle("Wavelength of Photon");
    h2->GetYaxis()->SetTitle("Number of Photons");
    h2->SetTitle("");
    h2->SetLineWidth(2);
    h2->SetLineColor(kRed);
    gStyle->SetOptStat(0);



    TCanvas canvas("canvas");
    canvas.Print("PhotonsPerEvent.pdf[");
    canvas.Clear();

    tree->Draw("Wavelength>>h2");
    canvas.Print("PhotonsPerEvent.pdf");    
    canvas.Clear();
    

    

    canvas.Print("PhotonsPerEvent.pdf]");  
    






  

}