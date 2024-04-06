[![FEMU Version](https://img.shields.io/badge/FEMU-v7.0-brightgreen)](https://img.shields.io/badge/FEMU-v7.0-brightgreen)
[![Build Status](https://travis-ci.com/ucare-uchicago/FEMU.svg?branch=master)](https://travis-ci.com/ucare-uchicago/FEMU)
[![License: GPL v2](https://img.shields.io/badge/License-GPL%20v2-blue.svg)](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html)
[![Platform](https://img.shields.io/badge/Platform-x86--64-brightgreen)](https://shields.io/)

```
  ______ ______ __  __ _    _ 
 |  ____|  ____|  \/  | |  | |
 | |__  | |__  | \  / | |  | |
 |  __| |  __| | |\/| | |  | |
 | |    | |____| |  | | |__| |
 |_|    |______|_|  |_|\____/  -- A QEMU-based and DRAM-backed NVMe SSD Emulator

```
                              
FEMU with PE-cycle & WAF Supported Version
--------------------------
We have used user-specific command sets for our added functions that comply the latest version of the NVMe Specification 2.0d standard.

1) Print PE-cycle for a specific #blk
   
    ``nvme get-feature /dev/nvme0n1 -f 0x82 -c #blk``

   
3) Report overall PE-cycle
   
     ``nvme get-feature /dev/nvme0n1 -f 0x83``

   
5) Reset PE-cycle
   
    ``nvme set-feature /dev/nvme0n1 -f 0x84``



7) Report WAF information
   
     ``nvme get-feature /dev/nvme0n1 -f 0x85``

   
8) Reset WAF    
     ``nvme set-feature /dev/nvme0n1 -f 0x86``


9) Set Buffered Data Group
     ``nvme set-feature /dev/nvme0n1 -f 0x88 -v #group`` (0=hot group / 1=g1 / 2=g2/ 3=g3 / 10=no buffer)
   
   (format-nvme command also resetting WAF)
 
