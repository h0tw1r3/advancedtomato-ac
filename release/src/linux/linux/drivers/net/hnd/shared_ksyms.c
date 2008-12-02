#include <linux/config.h>
#include <linux/module.h>
extern void dma_attach; EXPORT_SYMBOL(dma_attach);
extern void dma_detach; EXPORT_SYMBOL(dma_detach);
extern void dma_fifoloopbackenable; EXPORT_SYMBOL(dma_fifoloopbackenable);
extern void dma_getnextrxp; EXPORT_SYMBOL(dma_getnextrxp);
extern void dma_getnexttxp; EXPORT_SYMBOL(dma_getnexttxp);
extern void dma_getvar; EXPORT_SYMBOL(dma_getvar);
extern void dma_peeknexttxp; EXPORT_SYMBOL(dma_peeknexttxp);
extern void dma_rx; EXPORT_SYMBOL(dma_rx);
extern void dma_rxenable; EXPORT_SYMBOL(dma_rxenable);
extern void dma_rxenabled; EXPORT_SYMBOL(dma_rxenabled);
extern void dma_rxfill; EXPORT_SYMBOL(dma_rxfill);
extern void dma_rxinit; EXPORT_SYMBOL(dma_rxinit);
extern void dma_rxreclaim; EXPORT_SYMBOL(dma_rxreclaim);
extern void dma_rxreset; EXPORT_SYMBOL(dma_rxreset);
extern void dma_rxstopped; EXPORT_SYMBOL(dma_rxstopped);
extern void dma_tx; EXPORT_SYMBOL(dma_tx);
extern void dma_txactive; EXPORT_SYMBOL(dma_txactive);
extern void dma_txblock; EXPORT_SYMBOL(dma_txblock);
extern void dma_txenabled; EXPORT_SYMBOL(dma_txenabled);
extern void dma_txfast; EXPORT_SYMBOL(dma_txfast);
extern void dma_txinit; EXPORT_SYMBOL(dma_txinit);
extern void dma_txreclaim; EXPORT_SYMBOL(dma_txreclaim);
extern void dma_txreset; EXPORT_SYMBOL(dma_txreset);
extern void dma_txresume; EXPORT_SYMBOL(dma_txresume);
extern void dma_txrotate; EXPORT_SYMBOL(dma_txrotate);
extern void dma_txstopped; EXPORT_SYMBOL(dma_txstopped);
extern void dma_txsuspend; EXPORT_SYMBOL(dma_txsuspend);
extern void dma_txsuspended; EXPORT_SYMBOL(dma_txsuspended);
extern void dma_txunblock; EXPORT_SYMBOL(dma_txunblock);
extern void bcm_atoi; EXPORT_SYMBOL(bcm_atoi);
extern void bcm_ctype; EXPORT_SYMBOL(bcm_ctype);
extern void bcm_ether_atoe; EXPORT_SYMBOL(bcm_ether_atoe);
extern void bcm_ether_ntoa; EXPORT_SYMBOL(bcm_ether_ntoa);
extern void bcm_mdelay; EXPORT_SYMBOL(bcm_mdelay);
extern void bcm_next_tlv; EXPORT_SYMBOL(bcm_next_tlv);
extern void bcm_parse_ordered_tlvs; EXPORT_SYMBOL(bcm_parse_ordered_tlvs);
extern void bcm_parse_tlvs; EXPORT_SYMBOL(bcm_parse_tlvs);
extern void bcmstrcat; EXPORT_SYMBOL(bcmstrcat);
extern void bcmstrstr; EXPORT_SYMBOL(bcmstrstr);
extern void bcm_strtoul; EXPORT_SYMBOL(bcm_strtoul);
extern void bcm_toupper; EXPORT_SYMBOL(bcm_toupper);
extern void getgpiopin; EXPORT_SYMBOL(getgpiopin);
extern void getintvar; EXPORT_SYMBOL(getintvar);
extern void getvar; EXPORT_SYMBOL(getvar);
extern void hndcrc16; EXPORT_SYMBOL(hndcrc16);
extern void hndcrc32; EXPORT_SYMBOL(hndcrc32);
extern void hndcrc8; EXPORT_SYMBOL(hndcrc8);
extern void pktcopy; EXPORT_SYMBOL(pktcopy);
extern void pktdeq; EXPORT_SYMBOL(pktdeq);
extern void pktdeqtail; EXPORT_SYMBOL(pktdeqtail);
extern void pktenq; EXPORT_SYMBOL(pktenq);
extern void pktq_init; EXPORT_SYMBOL(pktq_init);
extern void pkttotlen; EXPORT_SYMBOL(pkttotlen);
extern void srom_read; EXPORT_SYMBOL(srom_read);
extern void srom_var_init; EXPORT_SYMBOL(srom_var_init);
extern void srom_write; EXPORT_SYMBOL(srom_write);
extern void sb_attach; EXPORT_SYMBOL(sb_attach);
extern void sb_base; EXPORT_SYMBOL(sb_base);
extern void sb_boardtype; EXPORT_SYMBOL(sb_boardtype);
extern void sb_boardvendor; EXPORT_SYMBOL(sb_boardvendor);
extern void sb_bus; EXPORT_SYMBOL(sb_bus);
extern void sb_chip; EXPORT_SYMBOL(sb_chip);
extern void sb_chipcrev; EXPORT_SYMBOL(sb_chipcrev);
extern void sb_chippkg; EXPORT_SYMBOL(sb_chippkg);
extern void sb_chiprev; EXPORT_SYMBOL(sb_chiprev);
extern void sb_clock; EXPORT_SYMBOL(sb_clock);
extern void sb_clock_rate; EXPORT_SYMBOL(sb_clock_rate);
extern void sb_commit; EXPORT_SYMBOL(sb_commit);
extern void sb_core_disable; EXPORT_SYMBOL(sb_core_disable);
extern void sb_coreflags; EXPORT_SYMBOL(sb_coreflags);
extern void sb_coreflagshi; EXPORT_SYMBOL(sb_coreflagshi);
extern void sb_coreid; EXPORT_SYMBOL(sb_coreid);
extern void sb_coreidx; EXPORT_SYMBOL(sb_coreidx);
extern void sb_corelist; EXPORT_SYMBOL(sb_corelist);
extern void sb_coreregs; EXPORT_SYMBOL(sb_coreregs);
extern void sb_core_reset; EXPORT_SYMBOL(sb_core_reset);
extern void sb_corerev; EXPORT_SYMBOL(sb_corerev);
extern void sb_core_tofixup; EXPORT_SYMBOL(sb_core_tofixup);
extern void sb_coreunit; EXPORT_SYMBOL(sb_coreunit);
extern void sb_corevendor; EXPORT_SYMBOL(sb_corevendor);
extern void sb_detach; EXPORT_SYMBOL(sb_detach);
extern void sb_gpiocontrol; EXPORT_SYMBOL(sb_gpiocontrol);
extern void sb_gpioin; EXPORT_SYMBOL(sb_gpioin);
extern void sb_gpiointmask; EXPORT_SYMBOL(sb_gpiointmask);
extern void sb_gpiointpolarity; EXPORT_SYMBOL(sb_gpiointpolarity);
extern void sb_gpioout; EXPORT_SYMBOL(sb_gpioout);
extern void sb_gpioouten; EXPORT_SYMBOL(sb_gpioouten);
extern void sb_gpiosetcore; EXPORT_SYMBOL(sb_gpiosetcore);
extern void sb_iscoreup; EXPORT_SYMBOL(sb_iscoreup);
extern void sb_kattach; EXPORT_SYMBOL(sb_kattach);
extern void sb_osh; EXPORT_SYMBOL(sb_osh);
extern void sb_pcirev; EXPORT_SYMBOL(sb_pcirev);
extern void sb_pci_setup; EXPORT_SYMBOL(sb_pci_setup);
extern void sb_pcmcia_init; EXPORT_SYMBOL(sb_pcmcia_init);
extern void sb_pcmciarev; EXPORT_SYMBOL(sb_pcmciarev);
extern void sb_pwrctl_clk; EXPORT_SYMBOL(sb_pwrctl_clk);
extern void sb_pwrctl_fast_pwrup_delay; EXPORT_SYMBOL(sb_pwrctl_fast_pwrup_delay);
extern void sb_pwrctl_init; EXPORT_SYMBOL(sb_pwrctl_init);
extern void sb_pwrctl_slowclk; EXPORT_SYMBOL(sb_pwrctl_slowclk);
extern void sb_pwrctl_xtal; EXPORT_SYMBOL(sb_pwrctl_xtal);
extern void sb_register_intr_callback; EXPORT_SYMBOL(sb_register_intr_callback);
extern void sb_setcore; EXPORT_SYMBOL(sb_setcore);
extern void sb_setcoreidx; EXPORT_SYMBOL(sb_setcoreidx);
extern void sb_size; EXPORT_SYMBOL(sb_size);
extern void sb_watchdog; EXPORT_SYMBOL(sb_watchdog);
extern void osl_attach; EXPORT_SYMBOL(osl_attach);
extern void osl_detach; EXPORT_SYMBOL(osl_detach);
extern void osl_dma_alloc_consistent; EXPORT_SYMBOL(osl_dma_alloc_consistent);
extern void osl_dma_free_consistent; EXPORT_SYMBOL(osl_dma_free_consistent);
extern void osl_dma_map; EXPORT_SYMBOL(osl_dma_map);
extern void osl_dma_unmap; EXPORT_SYMBOL(osl_dma_unmap);
extern void osl_malloc; EXPORT_SYMBOL(osl_malloc);
extern void osl_malloced; EXPORT_SYMBOL(osl_malloced);
extern void osl_malloc_failed; EXPORT_SYMBOL(osl_malloc_failed);
extern void osl_mfree; EXPORT_SYMBOL(osl_mfree);
extern void osl_pci_read_config; EXPORT_SYMBOL(osl_pci_read_config);
extern void osl_pci_write_config; EXPORT_SYMBOL(osl_pci_write_config);
extern void osl_pcmcia_read_attr; EXPORT_SYMBOL(osl_pcmcia_read_attr);
extern void osl_pcmcia_write_attr; EXPORT_SYMBOL(osl_pcmcia_write_attr);
extern void osl_pktfree; EXPORT_SYMBOL(osl_pktfree);
extern void osl_pktget; EXPORT_SYMBOL(osl_pktget);
