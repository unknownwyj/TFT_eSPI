
// This is the command sequence that rotates the ST6201 driver coordinate frame

  rotation = m % 8; // Limit the range of values to 0-3

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
    // 000 
        if(TFT_MAD_RGB)
            writedata(0x00);
        else
            writedata(0x00| ST6201_MADCTL_BGR);
        _width  = _init_width;
        _height = _init_height;
      break;
    case 1:
    // 001 flip horizontal
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MY);
        else
            writedata(TFT_MAD_MY| ST6201_MADCTL_BGR);
        _width  = _init_height;
        _height = _init_width;
      break;
    case 2:
    //010 flip vertical
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MX);
        else
            writedata(TFT_MAD_MX| ST6201_MADCTL_BGR);
        _width  = _init_width;
        _height = _init_height;
      break;
    case 3:
    //011 flip vertical and horizontal
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MX | TFT_MAD_MY);
        else
            writedata(TFT_MAD_MX | TFT_MAD_MY| ST6201_MADCTL_BGR);
        _width  = _init_height;
        _height = _init_width;
      break;
    case 4:
    //100 portrait
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MV);
        else
            writedata(TFT_MAD_MV| ST6201_MADCTL_BGR);
        _width  = _init_width;
        _height = _init_height;
      break;
    case 5:
    //101 portrait flip horizontal
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MV | TFT_MAD_MY);
        else
            writedata(TFT_MAD_MV | TFT_MAD_MY| ST6201_MADCTL_BGR);
        _width  = _init_height;
        _height = _init_width;
      break;
    case 6:
    //110 portrait flip vertical
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MV | TFT_MAD_MX);
        else
            writedata(TFT_MAD_MV | TFT_MAD_MX| ST6201_MADCTL_BGR);
        _width  = _init_width;
        _height = _init_height;
      break;
    case 7:
    //111 portrait flip vertical and horizontal
        if(TFT_MAD_RGB)
            writedata(TFT_MAD_MV | TFT_MAD_MX | TFT_MAD_MY);
        else
            writedata(TFT_MAD_MV | TFT_MAD_MX | TFT_MAD_MY| ST6201_MADCTL_BGR);
        _width  = _init_height;
        _height = _init_width;
      break;
  }
