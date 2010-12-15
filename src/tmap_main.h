#ifndef TMAP_MAIN_H_
#define TMAP_MAIN_H_

/*! 
  Main TMAP Function
  */

extern int 
tmap_index(int argc, char *argv[]);
extern int 
tmap_server_main(int argc, char *argv[]);
extern int 
tmap_map1_main(int argc, char *argv[]);
extern int
tmap_map2_main(int argc, char *argv[]);
extern int
tmap_map3_main(int argc, char *argv[]);
extern int 
tmap_map_all_main(int argc, char *argv[]);
extern int 
tmap_refseq_fasta2pac_main(int argc, char *argv[]);
extern int 
tmap_bwt_pac2bwt_main(int argc, char *argv[]);
extern int
tmap_sa_bwt2sa_main(int argc, char *argv[]);
extern int
tmap_seq_io_sff2fq_main(int argc, char *argv[]);
#ifdef HAVE_SAMTOOLS
extern int
tmap_sam2fs_main(int argc, char *argv[]);
#endif
extern int 
tmap_debug_exact(int argc, char *argv[]);
extern int
tmap_fsw_main(int argc, char *argv[]);

#endif