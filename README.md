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

   ![image](https://github.com/qapass12/FEMU-HotStorage24/assets/164226168/8ecb349c-a558-48ec-a9f1-133e8a0da6d6)


   

   
3) Report overall PE-cycle
   
     ``nvme get-feature /dev/nvme0n1 -f 0x83``

   ![image](https://github.com/qapass12/FEMU-HotStorage24/assets/164226168/ea144816-58a0-4d31-9eb7-bff3369e1b76)
   


   
5) Reset PE-cycle
   
    ``nvme set-feature /dev/nvme0n1 -f 0x84``

   (format-nvme command does not resetting WAF)

   ![image](https://github.com/qapass12/FEMU-HotStorage24/assets/164226168/b33e20e9-bd7b-46a6-b044-17e64381ddec)
   




7) Report WAF information
   
     ``nvme get-feature /dev/nvme0n1 -f 0x85``

   ![image](https://github.com/qapass12/FEMU-HotStorage24/assets/164226168/9d433c32-4710-415a-8942-dd6a11fbc0a7)
   


   
9) Reset WAF
    
     ``nvme set-feature /dev/nvme0n1 -f 0x86``
   
   (format-nvme command resetting WAF)

   ![image](https://github.com/qapass12/FEMU-HotStorage24/assets/164226168/1d539fa0-eee1-4d7e-8f69-67e4c193ed8f)

 
