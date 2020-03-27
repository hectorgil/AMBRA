
void do_Ptheo_RSD(char *ptmodel,char *rsdmodel_ps,char *fogmodel_ps, char *type_of_analysis, char *RSD_fit, char *fit_BAO,int modeP0,int modeP2,int modeP4,double **Theory,int N_Plin,  double k_theo[],double k_theo0[], double k_theo2[],double k_theo4[], double P_theo0[], double P_theo2[], double P_theo4[], double Pnoise,int NeffP0,int NeffP2, int NeffP4,int Neff_for_mask, double *parameters1,double *pos, double *W0,double *W2,double *W4,double *W6,double *W8,int Nmask,char *spacing_mask,double *k0, double *k2, double *k4,char *path_to_mask1,fftw_plan plan1,fftw_plan plan2,double k0min, double k0max, double k2min, double k2max, double k4min, double k4max, char *spacing_data,char *spacing_theory);


double chi2_rsd_mcmc(char *type_of_analysis,double *parameters2, double **Theory,int N_Plin, double *pos, double *W0, double *W2, double *W4, double *W6, double *W8, int Nmask, char *path_to_mask1,char *spacing_maskNGC, double *posSGC, double *W0SGC, double *W2SGC, double *W4SGC,double *W6SGC,double *W8SGC, int NmaskSGC, char *path_to_mask2, char *spacing_maskSGC, double *k0, double *P0, double Pnoise, double *k2, double *P2, double *k4, double *P4, double *k0SGC, double *P0SGC, double PnoiseSGC, double *k2SGC, double *P2SGC, double *k4SGC, double *P4SGC, int NeffP0, int NeffP2, int NeffP4,int NeffP0SGC, int NeffP2SGC, int NeffP4SGC, double *cov, double *covSGC,  char *ptmodel_ps, char *rsdmodel_ps, char *fogmodel_ps, char *ptmodel_bs, char *local_b2s2, char *local_b3nl,char *RSD_fit, char *sigma8_free, char *fog_free, char *fog_bs, int Nchunks, fftw_plan plan1, fftw_plan plan2, char *fit_BAO, char *do_power_spectrum, char *do_bispectrum, int factor_sampling_mask, char *spacing_dataNGC,char *spacing_dataSGC,char *spacing_theory);

double chi2_bao_rsd(char *type_BAO_fit, char *type_of_analysis,char *fit_BAO,char *fit_RSD, double *parameters2_bao,double  *parameters2_rsd, double *k_Plin, double *Plin,int N_Plin,double *k_Olin,double *Olin,int N_Olin,double **Theory,int Ntheory, double *pos, double *W0, double *W2, double *W4, double *W6, double *W8, int Nmask, char *path_to_mask1, char *spacing_maskNGC, double *posSGC, double *W0SGC, double *W2SGC, double *W4SGC, double *W6SGC, double *W8SGC, int NmaskSGC, char *path_to_mask2, char *spacing_maskSGC, double *k0bao, double *k0rsd, double *P0bao, double *P0rsd, double Pnoise,int NeffP0bao,int NeffP0rsd, double *k2bao, double *k2rsd, double *P2bao, double *P2rsd,int NeffP2bao,int NeffP2rsd, double *k4bao, double *k4rsd, double *P4bao, double *P4rsd, int NeffP4bao, int NeffP4rsd, double *k0baoSGC, double *k0rsdSGC, double *P0baoSGC, double *P0rsdSGC,double PnoiseSGC,int NeffP0baoSGC,int NeffP0rsdSGC, double *k2baoSGC,double *k2rsdSGC, double *P2baoSGC,double *P2rsdSGC,int NeffP2baoSGC,int NeffP2rsdSGC, double *k4baoSGC, double *k4rsdSGC, double *P4baoSGC,double *P4rsdSGC, int NeffP4baoSGC, int NeffP4rsdSGC,double *cov, double *covSGC, char *Sigma_def_type, char *Sigma_independent,  double ffactor,double *Sigma_type,  double *Sigma_nl_mean,  double *Sigma_nl_stddev, int Npolynomial, char *ptmodel_ps, char *rsdmodel_ps, char *fogmodel_ps, char *ptmodel_bs, char *local_b2s2, char *local_b3nl,char *RSD_fit, char *sigma8_free, char *fog_free, char *fog_bs, int Nchunks, fftw_plan plan1bao, fftw_plan plan2bao, fftw_plan plan1rsd, fftw_plan plan2rsd,  char *do_power_spectrum, char *do_bispectrum, int Nalphas, int Nsigmas_tot,int Nsigmas_free, double Sigma_smooth,int factor_sampling_mask,char *spacing_dataNGC_bao,char *spacing_dataNGC_rsd,char *spacing_dataSGC_bao,char *spacing_dataSGC_rsd, char *spacing_theory_bao, char *spacing_theory_rsd);


void do_rsd_mcmc(int nthreads, char *type_of_analysis, char *fit_BAO,double **Theory,int N_Plin, double *pos, double *W0, double *W2, double *W4, double *W6, double *W8, int Nmask, char *path_to_mask1, char *spacing_maskNGC, double *posSGC, double *W0SGC, double *W2SGC, double *W4SGC, double *W6SGC, double *W8SGC, int NmaskSGC,  char *path_to_mask2, char *spacing_maskSGC, double *k0, double *P0, double *errP0, double Pnoise, int NeffP0, double *k2, double *P2, double *errP2, int NeffP2, double *k4, double *P4, double *errP4, int NeffP4, double *k11, double *k22, double *k33, double *B0, double *errB0, double *Bnoise, int NeffB0, double *k0SGC, double *P0SGC, double *errP0SGC,double PnoiseSGC,int NeffP0SGC, double *k2SGC, double *P2SGC, double *errP2SGC,int NeffP2SGC, double *k4SGC, double *P4SGC, double *errP4SGC,int NeffP4SGC, double *k11SGC, double *k22SGC, double *k33SGC, double *B0SGC,double *errB0SGC, double *BnoiseSGC,int NeffB0SGC, double *cov, double *covSGC, double alpha_min, double alpha_max, char *ptmodel_ps, char *rsdmodel_ps, char *fogmodel_ps, char *ptmodel_bs, char *local_b2s2, char *local_b3nl,char *RSD_fit, char *sigma8_free, char *fog_free,char *fog_bs ,int Nchunks, char *path_output, char *identifier, char *do_plot, char *use_prop_cov, char *path_to_cov, long int Nsteps, char *do_power_spectrum, char *do_bispectrum, char *spacing_dataNGC,char *spacing_dataSGC, char *spacing_theory,char *type_of_analysis_BAO,char *type_of_analysis_FS);

void do_rsd_bao_mcmc(int nthreads,char *type_BAO_fit,char *type_of_analysis,char *fit_BAO,char *fit_RSD,double **Theory,int Ntheory,double *k_Plin,double *Plin,int N_Plin, double *k_Olin, double *Olin, int N_Olin, double *pos, double *W0, double *W2, double *W4, double *W6, double *W8, int Nmask, char *path_to_mask1, char *spacing_maskNGC, double *posSGC, double *W0SGC, double *W2SGC, double *W4SGC, double *W6SGC, double *W8SGC, int NmaskSGC, char *path_to_mask2, char *spacing_maskSGC, double *k0bao, double *k0rsd, double *P0bao, double *P0rsd, double *errP0bao, double *errP0rsd,double Pnoise_rsd, int NeffP0bao, int NeffP0rsd, double *k2bao, double *k2rsd, double *P2bao, double *P2rsd, double *errP2bao, double *errP2rsd, int NeffP2bao, int NeffP2rsd, double *k4bao, double *k4rsd, double *P4bao, double *P4rsd, double *errP4bao, double *errP4rsd, int NeffP4bao, int NeffP4rsd, double *k11bao, double *k11rsd, double *k22bao, double *k22rsd, double *k33bao, double *k33rsd, double *B0bao, double *B0rsd, double *errB0bao, double *errB0rsd, double *Bnoise_bao, double *Bnoise_rsd, int NeffB0bao, int NeffB0rsd, double *k0baoSGC, double *k0rsdSGC, double *P0baoSGC, double *P0rsdSGC, double *errP0baoSGC, double *errP0rsdSGC,double Pnoise_rsdSGC, int NeffP0baoSGC,int NeffP0rsdSGC, double *k2baoSGC, double *k2rsdSGC, double *P2baoSGC, double *P2rsdSGC, double *errP2baoSGC, double *errP2rsdSGC, int NeffP2baoSGC, int NeffP2rsdSGC, double *k4baoSGC, double *k4rsdSGC, double *P4baoSGC, double *P4rsdSGC, double *errP4baoSGC, double *errP4rsdSGC, int NeffP4baoSGC, int NeffP4rsdSGC, double *k11baoSGC,double *k11rsdSGC, double *k22baoSGC,double *k22rsdSGC, double *k33baoSGC,double *k33rsdSGC,double *B0baoSGC,double *B0rsdSGC, double *errB0baoSGC, double *errB0rsdSGC, double *Bnoise_baoSGC, double *Bnoise_rsdSGC,int NeffB0baoSGC,int NeffB0rsdSGC, double *cov, double *covSGC, double alpha_min, double alpha_max, char *Sigma_def_type, char *Sigma_independent, double ffactor, double Sigma_type[], double Sigma_nl_mean[], double Sigma_nl_stddev[], int  Npolynomial, char *ptmodel_ps, char *rsdmodel_ps, char *fogmodel_ps, char *ptmodel_bs, char *local_b2s2, char *local_b3nl,char *RSD_fit,char *sigma8_free,char *fog_free,char *fog_bs, int  Nchunks, char *path_output, char *identifier, char *do_plot, char *use_prop_cov, char *path_to_cov, int Nsteps, char *do_power_spectrum, char *do_bispectrum, double Sigma_smooth, char *spacing_dataNGC_bao, char *spacing_dataNGC_rsd, char *spacing_dataSGC_bao, char *spacing_dataSGC_rsd, char *spacing_theory, char *spacing_theory_rsd,char *type_of_analysis_BAO, char *type_of_analysis_FS);



void make_a_rsd_plot(char *type_of_analysis,double *parameters2,double chi2_min, double **Theory,int N_Plin, double *pos, double *W0, double *W2, double *W4, double *W6, double *W8, int Nmask, char *path_to_mask1, char *spacing_maskNGC, double *posSGC, double *W0SGC, double *W2SGC, double *W4SGC,double *W6SGC,double *W8SGC, int NmaskSGC, char *path_to_mask2,char *spacing_maskSGC, double *k0, double *P0, double *errP0, double Pnoise, double *k2, double *P2, double *errP2, double *k4, double *P4, double *errP4, double *k0SGC, double *P0SGC, double *errP0SGC, double PnoiseSGC, double *k2SGC, double *P2SGC, double *errP2SGC, double *k4SGC, double *P4SGC, double *errP4SGC, int NeffP0, int NeffP2, int NeffP4,int NeffP0SGC, int NeffP2SGC, int NeffP4SGC, double *cov, double *covSGC,  char *ptmodel_ps, char *rsdmodel_ps, char *fogmodel_ps, char *ptmodel_bs, char *local_b2s2, char *local_b3nl,char *RSD_fit, char *sigma8_free, char *fog_free, char *fog_bs, int Nchunks,int Npoints, int Ndof, char *path_output, char *identifier, fftw_plan plan1, fftw_plan plan2, char *fit_BAO, char *do_power_spectrum, char *do_bispectrum, int factor_sampling_mask, char *spacing_dataNGC,char *spacing_dataSGC,char *spacing_theory);