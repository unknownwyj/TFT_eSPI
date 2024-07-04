// well i was going to use this
// command sequence to initialises ST6201 driver
#if defined (ST6201_DRIVER)
{
    writecommand(0xff);
	writedata(0xa5);
	writecommand(0xE7); //TE_output_en
	writedata(0x10);
	writecommand(0x35); //TE_ interface_en
	writedata(0x00);//01
	writecommand(0x36);
	writedata(0xC0);//C8
	writecommand(0x3A);
	writedata(0x01);//01---565/00---666
	writecommand(0x40);
	writedata(0x01);//01:IPS/00:TN
	writecommand(0x41);
	writedata(0x03);//01--8bit//03--16bit
	writecommand(0x44); //VBP
	writedata(0x15); 
	writecommand(0x45); //VFP
	writedata(0x15);
	writecommand(0x7d);//vdds_trim[2:0]
	writedata(0x03);

	writecommand(0xc1);//avdd_clp_en avdd_clp[1:0] avcl_clp_en avcl_clp[1:0]
	writedata(0xbb);//0xbb 88 a2
	writecommand(0xc2);//vgl_clp_en vgl_clp[2:0]
	writedata(0x05);
	writecommand(0xc3);//vgl_clp_en vgl_clp[2:0]
	writedata(0x10);
	writecommand(0xc6);//avdd_ratio_sel avcl_ratio_sel vgh_ratio_sel[1:0] vgl_ratio_sel[1:0]
	writedata(0x3e);
	writecommand(0xc7);//mv_clk_sel[1:0] avdd_clk_sel[1:0] avcl_clk_sel[1:0]
	writedata(0x25);
	writecommand(0xc8);// VGL_CLK_sel
	writedata(0x21);
	writecommand(0x7a);// user_vgsp
	writedata(0x51); //58
	writecommand(0x6f);// user_gvdd
	writedata(0x49); //4F
	writecommand(0x78);// user_gvcl
	writedata(0x57); //70
	writecommand(0xc9);
	writedata(0x00);
	writecommand(0x67);
	writedata(0x11);
	//gate_ed
	writecommand(0x51);//gate_st_o[7:0]
	writedata(0x0a);
	writecommand(0x52);//gate_ed_o[7:0]
	writedata(0x7D); //7A
	writecommand(0x53);//gate_st_e[7:0]
	writedata(0x0a);
	writecommand(0x54);//gate_ed_e[7:0]
	writedata(0x7D); //7A
	//sorce
	writecommand(0x46);//fsm_hbp_o[5:0]
	writedata(0x0a); 
	writecommand(0x47);//fsm_hfp_o[5:0]
	writedata(0x2a);
	writecommand(0x48);//fsm_hbp_e[5:0]
	writedata(0x0a);
	writecommand(0x49);//fsm_hfp_e[5:0]
	writedata(0x1a);
	writecommand(0x44); //VBP
	writedata(0x15);
	writecommand(0x45); //VFP
	writedata(0x15);
	writecommand(0x73);
	writedata(0x08);
	writecommand(0x74);
	writedata(0x10); //0A
	///test mode
	//writecommand(0xf8);
	//writedata(0x16);
	//writecommand(0xf9);
	//writedata(0x20);
	writecommand(0x56);//src_ld_wd[1:0] src_ld_st[5:0]
	writedata(0x43);
	writecommand(0x57);//pn_cs_en src_cs_st[5:0]
	writedata(0x42);
	writecommand(0x58);//src_cs_p_wd[6:0]
	writedata(0x3c);
	writecommand(0x59);//src_cs_n_wd[6:0]
	writedata(0x64);
	writecommand(0x5a);//src_pchg_st_o[6:0]
	writedata(0x41);
	writecommand(0x5b);//src_pchg_wd_o[6:0]
	writedata(0x3C);
	writecommand(0x5c);//src_pchg_st_e[6:0]
	writedata(0x02);
	writecommand(0x5d);//src_pchg_wd_e[6:0]
	writedata(0x3c);
	writecommand(0x5e);//src_pol_sw[7:0]
	writedata(0x1f);
	writecommand(0x60);//src_op_st_o[7:0]
	writedata(0x80); 
	writecommand(0x61);//src_op_st_e[7:0]
	writedata(0x3f);
	writecommand(0x62);//src_op_ed_o[9:8] src_op_ed_e[9:8]
	writedata(0x21);
	writecommand(0x63);//src_op_ed_o[7:0]
	writedata(0x07);
	writecommand(0x64);//src_op_ed_e[7:0]
	writedata(0xe0);
	writecommand(0x65);//chopper
	writedata(0x02);
	writecommand(0xca); //avdd_mux_st_o[7:0]
	writedata(0x20);
	writecommand(0xcb); //avdd_mux_ed_o[7:0]
	writedata(0x52);
	writecommand(0xcc); //avdd_mux_st_e[7:0]
	writedata(0x10);
	writecommand(0xcD); //avdd_mux_ed_e[7:0]
	writedata(0x42);
	writecommand(0xD0); //avcl_mux_st_o[7:0]
	writedata(0x20);
	writecommand(0xD1); //avcl_mux_ed_o[7:0]
	writedata(0x52);
	writecommand(0xD2); //avcl_mux_st_e[7:0]
	writedata(0x10);
	writecommand(0xD3); //avcl_mux_ed_e[7:0]
	writedata(0x42);
	writecommand(0xD4); //vgh_mux_st[7:0]
	writedata(0x0a);
	writecommand(0xD5); //vgh_mux_ed[7:0]
	writedata(0x32);
	//gammma boe4.3
	writecommand(0x80); //gam_vrp0
	writedata(0x00);
	writecommand(0xA0); //gam_VRN0
	writedata(0x00);
	writecommand(0x81); //gam_vrp1
	writedata(0x06);//07
	writecommand(0xA1); //gam_VRN1
	writedata(0x08);//06 
	writecommand(0x82); //gam_vrp2
	writedata(0x03);//02
	writecommand(0xA2); //gam_VRN2
	writedata(0x03);//01
	writecommand(0x86); //gam_prp0
	writedata(0x14); //11
	writecommand(0xA6); //gam_PRN0
	writedata(0x14); //10
	writecommand(0x87); //gam_prp1
	writedata(0x2C); //27
	writecommand(0xA7); //gam_PRN1
	writedata(0x26); //27
	writecommand(0x83); //gam_vrp3
	writedata(0x37);
	writecommand(0xA3); //gam_VRN3
	writedata(0x37);
	writecommand(0x84); //gam_vrp4
	writedata(0x35);
	writecommand(0xA4); //gam_VRN4
	writedata(0x35);
	writecommand(0x85); //gam_vrp5
	writedata(0x3f);
	writecommand(0xA5); //gam_VRN5
	writedata(0x3f);
	writecommand(0x88); //gam_pkp0
	writedata(0x0A); //0b
	writecommand(0xA8); //gam_PKN0
	writedata(0x0A); //0b
	writecommand(0x89); //gam_pkp1
	writedata(0x13); //14
	writecommand(0xA9); //gam_PKN1
	writedata(0x12); //13
	writecommand(0x8a); //gam_pkp2
	writedata(0x18); //1a
	writecommand(0xAa); //gam_PKN2
	writedata(0x19); //1a
	writecommand(0x8b); //gam_PKP3
	writedata(0x0a);
	writecommand(0xAb); //gam_PKN3
	writedata(0x0a);
	writecommand(0x8c); //gam_PKP4
	writedata(0x17);//14
	writecommand(0xAc); //gam_PKN4
	writedata(0x0B);//08
	writecommand(0x8d); //gam_PKP5
	writedata(0x1A);//17
	writecommand(0xAd); //gam_PKN5
	writedata(0x09);//07
	writecommand(0x8e); //gam_PKP6
	writedata(0x1A); //16 //16
	writecommand(0xAe); //gam_PKN6
	writedata(0x08); //06 //13
	writecommand(0x8f); //gam_PKP7
	writedata(0x1F); //1B
	writecommand(0xAf); //gam_PKN7
	writedata(0x00); //07
	writecommand(0x90); //gam_PKP8
	writedata(0x08);//04
	writecommand(0xB0); //gam_PKN8
	writedata(0x00);//04
	writecommand(0x91); //gam_PKP9
	writedata(0x10);//0A
	writecommand(0xB1); //gam_PKN9
	writedata(0x06);//0A

	writecommand(0x92); //gam_PKP10
	writedata(0x19);//16
	writecommand(0xB2); //gam_PKN10
	writedata(0x15);//15
	writecommand(0xff);
	writedata(0x00);
	writecommand(0x11);
	vTaskDelay(120);

	writecommand(0x29);

	//st6201_set_orientation(CONFIG_LV_DISPLAY_ORIENTATION);
    //!use static first need to change  
    writecommand(0x36);
    writedata(0x00);// portrait mode
#if st6201_INVERT_COLORS == 1
	writecommand(0x21);
#else
	writecommand(0x20);
#endif
}
#endif