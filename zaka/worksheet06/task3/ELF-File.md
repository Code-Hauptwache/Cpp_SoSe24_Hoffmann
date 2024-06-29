# Analysis of the Generated ELF File

The generated executable file is in the ELF format. Since it is binary, we cannot simply 'read' its contents. However, Unix/Linux offers several built-in tools to handle this:

## Command `file`
This command outputs the type of a file (based on its 'Magic'). Research what 'Magic' means in this context!
- **Answer:** The magic file contains lines that describe magic numbers, which identify particular types of files. Every file has magic numbers, which are the first bits of a file that uniquely identify the type of the file.
![image](https://github.com/Code-Hauptwache/Cpp_SoSe24_Hoffman/assets/103366844/ffe5ff08-d7e5-44fb-9f6a-44d174433331)

## Command `strings`
This command outputs parts of a file that can be interpreted as ASCII characters. What do you get?
- **Answer:**
    ```sh
    zaka@zaka:~/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$ strings complx_main
    /lib64/ld-linux-x86-64.so.2
    __gmon_start__
    _ITM_deregisterTMCloneTable
    _ITM_registerTMCloneTable
    _ZNSolsEd
    _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
    _ZNSt8ios_base4InitD1Ev
    _ZNSolsEPFRSoS_E
    __gxx_personality_v0
    _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
    _ZNSt8ios_base4InitC1Ev
    _ZSt4cout
    sqrt
    _Unwind_Resume
    __cxa_finalize
    .
    .
    .
    ```
    <details>
      <summary>Full output of strings complx_main </summary>
      
      zaka@zaka:~/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$ strings complx_main
      /lib64/ld-linux-x86-64.so.2
      __gmon_start__
      _ITM_deregisterTMCloneTable
      _ITM_registerTMCloneTable
      _ZNSolsEd
      _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
      _ZNSt8ios_base4InitD1Ev
      _ZNSolsEPFRSoS_E
      __gxx_personality_v0
      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
      _ZNSt8ios_base4InitC1Ev
      _ZSt4cout
      sqrt
      _Unwind_Resume
      __cxa_finalize
      __libc_start_main
      __cxa_atexit
      __stack_chk_fail
      libstdc++.so.6
      libm.so.6
      libgcc_s.so.1
      libc.so.6
      GCC_3.0
      GLIBC_2.29
      GLIBC_2.2.5
      CXXABI_1.3
      GLIBCXX_3.4
      GLIBC_2.4
      GLIBC_2.34
      PTE1
      u+UH
      Objekt Zerstoert
      a + b: 
      a - b: 
      a * b: 
      conjugate of a: 
      magnitude of a: 
      magnitude of b: 
      :*3$"
      zPLR
      GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
      @std
      Ieof
      AJ_V2
      Udiv
      Zdiv
      )q$K
      _pow
      !__f
      l$]&
      c__s
      :! ;
      getenv
      uint_fast16_t
      __debug
      int_p_cs_precedes
      _ZNSt15__exception_ptr13exception_ptrC4EPv
      _ZNK8ToComplx6Complx7getImagEv
      __uint_least64_t
      wcsxfrm
      _ZNSt15__exception_ptr13exception_ptr10_M_releaseEv
      ~exception_ptr
      atol
      iswctype
      _shortbuf
      _IO_lock_t
      _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
      setvbuf
      gp_offset
      remove
      system
      _ZNSt11char_traitsIcE3eofEv
      tm_yday
      _IO_buf_end
      _ZNSt11char_traitsIcE11to_int_typeERKc
      __off_t
      __cust_swap
      fflush
      double_t
      __isoc99_wscanf
      __priority
      _ZN8ToComplx6ComplxD4Ev
      _ZNSt15__exception_ptr13exception_ptr4swapERS0_
      towctrans
      _IO_write_end
      __gnu_cxx
      _freeres_list
      __exception_ptr
      length
      wchar_t
      __uintmax_t
      wcsftime
      _old_offset
      __swappable_details
      _ZN8ToComplx6ComplxC4ERKS0_
      _markers
      tm_mday
      setImag
      _ZN9__gnu_cxx3divExx
      __isoc99_swscanf
      __int_least32_t
      eq_int_type
      __uint_least8_t
      nullptr_t
      __ops
      setReal
      char8_t
      ungetc
      wcscpy
      __count
      _ZNSt11char_traitsIcE7not_eofERKi
      wcscat
      lconv
      __state
      _flags
      tm_year
      copy
      __isoc99_vwscanf
      __gnu_debug
      strtoll
      mbrtowc
      mbtowc
      tm_mon
      _IO_save_end
      _ZNSt15__exception_ptr13exception_ptrC4EDn
      float
      _cur_column
      __int64_t
      fgetpos
      _IO_codecvt
      sqrt
      __isoc99_vswscanf
      __swappable_with_details
      wctype_t
      long long unsigned int
      __int_least16_t
      __intmax_t
      _ZNSt15__exception_ptr13exception_ptrC4EOS0_
      wcstoul
      int_n_sign_posn
      _ZNSt8ios_base4InitC4ERKS0_
      __uint16_t
      localeconv
      __FILE
      _IO_backup_base
      _ZN8ToComplx6ComplxD2Ev
      to_int_type
      wcrtomb
      _ZSt4cout
      _M_exception_object
      lldiv
      atoll
      vfwprintf
      ToComplx
      _Traits
      int_p_sep_by_space
      size_t
      _ZNSt8ios_base4InitC1Ev
      _IO_read_base
      __uint_least32_t
      bsearch
      argc
      __initialize_p
      int_frac_digits
      __float128
      clearerr
      char_traits<char>
      fwide
      int_n_cs_precedes
      find
      basic_ostream<char, std::char_traits<char> >
      negative_sign
      freopen
      __value
      fputwc
      __cmp_cat
      float_t
      _GLOBAL__sub_I_main
      __cust_access
      uint_fast64_t
      _mode
      5div_t
      operator<< <std::char_traits<char> >
      _ZN8ToComplx6ComplxplES0_
      ferror
      _IO_marker
      qsort
      _IO_write_base
      __cmp_alg
      __uint64_t
      GNU C++20 11.4.0 -mtune=generic -march=x86-64 -g -std=c++20 -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection
      __wch
      __os
      getImag
      _ZNSolsEPFRSoS_E
      quot
      reg_save_area
      __int128 unsigned
      mbsrtowcs
      __out
      rename
      __pos
      _ZN8ToComplx6ComplxC4Ed
      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
      wctrans_t
      getReal
      getchar
      wcstof
      wcsspn
      tmpnam
      __in_chrg
      _ZN8ToComplx6ComplxC4Ev
      long long int
      perror
      _ZNSt15__exception_ptr13exception_ptrD4Ev
      _IO_save_base
      __pf
      operator<<
      mon_grouping
      wcstoull
      _ZNSt11char_traitsIcE6assignERcRKc
      _ZNSt8ios_base4InitC4Ev
      __cxx11
      _ZNSt15__exception_ptr13exception_ptrC4Ev
      __int16_t
      fgetwc
      _ZN8ToComplx6Complx7setImagEd
      operator*
      operator+
      operator-
      fseek
      __cust_iswap
      setbuf
      fgetws
      operator=
      _M_get
      _freeres_buf
      compare
      _ZNSt8ios_base4InitD4Ev
      fsetpos
      wmemcmp
      uint_fast32_t
      assign
      __unknown__
      ftell
      __pad5
      ungetwc
      fgetc
      _ZNSolsEd
      fopen
      _vtable_offset
      numbers
      __int8_t
      fgets
      _ZN8ToComplx6ComplxmlES0_
      __fpos_t
      operator~
      argv
      __cmp_cust
      long double
      wcscoll
      this
      fputws
      _ZNSt11char_traitsIcE4moveEPcPKcm
      __static_initialization_and_destruction_0
      ios_base
      __int_least64_t
      vwprintf
      tm_isdst
      _ZN8ToComplx6ComplxmiES0_
      rethrow_exception
      _IO_read_end
      ~Complx
      mbsinit
      wmemchr
      _ZN8ToComplx6ComplxC2Edd
      _ZNSt11char_traitsIcE2eqERKcS2_
      short int
      __detail
      _CharT
      wcsrtombs
      int_curr_symbol
      mbstowcs
      __cxa_exception_type
      mon_decimal_point
      mbrlen
      _ZNSt11char_traitsIcE4findEPKcmRS1_
      wmemcpy
      fread
      type_info
      _ZNSt15__exception_ptr13exception_ptraSEOS0_
      11__mbstate_t
      atexit
      __ostream_type
      putwchar
      wcsrchr
      typedef __va_list_tag __va_list_tag
      to_char_type
      getwchar
      _IO_wide_data
      __wchb
      int_n_sep_by_space
      fclose
      6ldiv_t
      wcsncmp
      char32_t
      _ZNSt11char_traitsIcE2ltERKcS2_
      ranges
      _ZN8ToComplx6Complx7setRealEd
      7lldiv_t
      overflow_arg_area
      __int32_t
      fp_offset
      __uint8_t
      magA
      magB
      positive_sign
      wcsstr
      _M_addref
      _ZNSt11char_traitsIcE11eq_int_typeERKiS2_
      operator bool
      _ZNKSt15__exception_ptr13exception_ptr20__cxa_exception_typeEv
      at_quick_exit
      _ZNSt11char_traitsIcE6assignEPcmc
      _G_fpos_t
      wmemmove
      _ZNKSt15__exception_ptr13exception_ptrcvbEv
      __int_least8_t
      uintptr_t
      __uint_least16_t
      _lock
      strtoul
      strtod
      ~Init
      _IO_FILE
      wint_t
      srand
      not_eof
      _ZNK8ToComplx6Complx9magnitudeEv
      wcstod
      wcspbrk
      tm_min
      wcstok
      wcstol
      tm_zone
      __int128
      wmemset
      setlocale
      _ZN8ToComplx6ComplxC4Edd
      _ZNSt11char_traitsIcE6lengthEPKc
      unsigned char
      __uint32_t
      _ZNSt11char_traitsIcE12to_char_typeERKi
      tmpfile
      _ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE
      __dso_handle
      _IO_write_ptr
      _M_release
      decltype(nullptr)
      strtof
      uint_fast8_t
      feof
      wcstombs
      strtol
      mblen
      ostream
      __compar_fn_t
      wcstold
      wctob
      currency_symbol
      wcstoll
      strtoull
      tm_wday
      _ZNSt8ios_base4InitaSERKS0_
      _ZNSt15__exception_ptr13exception_ptrC4ERKS0_
      _fileno
      strtold
      __isoc99_fwscanf
      rewind
      _ZNK8ToComplx6ComplxcoEv
      tm_hour
      _ZNSt8ios_base4InitD1Ev
      mon_thousands_sep
      short unsigned int
      tm_sec
      __cust
      atof
      wcscspn
      atoi
      _ZNKSt15__exception_ptr13exception_ptr6_M_getEv
      _ZNSt15__exception_ptr13exception_ptraSERKS0_
      _IO_read_ptr
      wcsncpy
      wctomb
      _ZNSt11char_traitsIcE4copyEPcPKcm
      wcscmp
      wcsncat
      tm_gmtoff
      _chain
      wcschr
      char16_t
      magnitude
      _ZNSt15__exception_ptr13exception_ptr9_M_addrefEv
      vswprintf
      _flags2
      _ZNSt11char_traitsIcE7compareEPKcS2_m
      endl<char, std::char_traits<char> >
      int_p_sign_posn
      __cust_imove
      wcslen
      _ZN8ToComplx6ComplxC2ERKS0_
      __ioinit
      _unused2
      _IO_buf_base
      _ZNK8ToComplx6Complx7getRealEv
      __isoc99_vfwscanf
      __off64_t
      complx_main.cpp
      /home/zaka/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2
      /usr/include/c++/11
      /usr/lib/gcc/x86_64-linux-gnu/11/include
      /usr/include/x86_64-linux-gnu/bits/types
      /usr/include/x86_64-linux-gnu/c++/11/bits
      /usr/include/c++/11/bits
      /usr/include/c++/11/debug
      /usr/include
      /usr/include/x86_64-linux-gnu/bits
      complx.h
      iostream
      <built-in>
      stddef.h
      wint_t.h
      __mbstate_t.h
      __FILE.h
      struct_FILE.h
      cwchar
      c++config.h
      type_traits
      exception_ptr.h
      concepts
      iterator_concepts.h
      ranges_cmp.h
      compare
      debug.h
      char_traits.h
      cstdint
      clocale
      cstdlib
      numbers
      cstdio
      ios_base.h
      cwctype
      iosfwd
      cmath
      struct_tm.h
      predefined_ops.h
      ptr_traits.h
      types.h
      stdint-intn.h
      stdint-uintn.h
      stdint.h
      locale.h
      stdlib.h
      __fpos_t.h
      stdio.h
      wctype-wchar.h
      wctype.h
      math.h
      mathcalls.h
      algorithmfwd.h
      Scrt1.o
      __abi_tag
      crtstuff.c
      deregister_tm_clones
      __do_global_dtors_aux
      completed.0
      __do_global_dtors_aux_fini_array_entry
      frame_dummy
      __frame_dummy_init_array_entry
      complx_main.cpp
      _ZStL8__ioinit
      _Z41__static_initialization_and_destruction_0ii
      _GLOBAL__sub_I_main
      __FRAME_END__
      __GNU_EH_FRAME_HDR
      _DYNAMIC
      _GLOBAL_OFFSET_TABLE_
      _ZN8ToComplx6ComplxD1Ev
      _edata
      _ZNK8ToComplx6ComplxcoEv
      _ZN8ToComplx6ComplxmlES0_
      _IO_stdin_used
      __cxa_finalize@GLIBC_2.2.5
      _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4
      __dso_handle
      _ZNK8ToComplx6Complx9magnitudeEv
      _ZN8ToComplx6ComplxC2ERKS0_
      DW.ref.__gxx_personality_v0
      _fini
      __libc_start_main@GLIBC_2.34
      sqrt@GLIBC_2.2.5
      _ZN8ToComplx6ComplxD2Ev
      _ZNK8ToComplx6Complx7getRealEv
      _ZN8ToComplx6ComplxplES0_
      __cxa_atexit@GLIBC_2.2.5
      _ZN8ToComplx6ComplxC1ERKS0_
      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4
      _ZNK8ToComplx6Complx7getImagEv
      _ZNSolsEPFRSoS_E@GLIBCXX_3.4
      __stack_chk_fail@GLIBC_2.4
      _init
      __TMC_END__
      _ZSt4cout@GLIBCXX_3.4
      __data_start
      _ZN8ToComplx6ComplxC2Edd
      _end
      __bss_start
      _ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4
      __gxx_personality_v0@CXXABI_1.3
      _ZN8ToComplx6ComplxC1Edd
      pow@GLIBC_2.29
      _ITM_deregisterTMCloneTable
      _Unwind_Resume@GCC_3.0
      _ZN8ToComplx6ComplxmiES0_
      __gmon_start__
      _ZNSolsEd@GLIBCXX_3.4
      _ITM_registerTMCloneTable
      _ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4
      .symtab
      .strtab
      .shstrtab
      .interp
      .note.gnu.property
      .note.gnu.build-id
      .note.ABI-tag
      .gnu.hash
      .dynsym
      .dynstr
      .gnu.version
      .gnu.version_r
      .rela.dyn
      .rela.plt
      .init
      .plt.got
      .plt.sec
      .text
      .fini
      .rodata
      .eh_frame_hdr
      .eh_frame
      .gcc_except_table
      .init_array
      .fini_array
      .dynamic
      .data
      .bss
      .comment
      .debug_aranges
      .debug_info
      .debug_abbrev
      .debug_line
      .debug_str
      .debug_line_str
      .debug_rnglists
      zaka@zaka:~/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$
    </details>

## Commands `hexdump` and `od`
These commands display the contents of files in hexadecimal and octal formats, respectively. What do you get now?
- **Answer:**
    - **`hexdump`**
      ```sh
      zaka@zakaBouj:/mnt/c/Users/zb200/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$ hexdump complx_main
                0000000 457f 464c 0102 0001 0000 0000 0000 0000
                0000010 0003 003e 0001 0000 1160 0000 0000 0000
                0000020 0040 0000 0000 0000 3cd0 0000 0000 0000
                0000030 0000 0000 0040 0038 000d 0040 0020 001f
                0000040 0006 0000 0004 0000 0040 0000 0000 0000
                0000050 0040 0000 0000 0000 0040 0000 0000 0000
                0000060 02d8 0000 0000 0000 02d8 0000 0000 0000
                0000070 0008 0000 0000 0000 0003 0000 0004 0000
                0000080 0318 0000 0000 0000 0318 0000 0000 0000
                0000090 0318 0000 0000 0000 001c 0000 0000 0000
                00000a0 001c 0000 0000 0000 0001 0000 0000 0000
                00000b0 0001 0000 0004 0000 0000 0000 0000 0000
                00000c0 0000 0000 0000 0000 0000 0000 0000 0000
                00000d0 0a90 0000 0000 0000 0a90 0000 0000 0000
                00000e0 1000 0000 0000 0000 0001 0000 0005 0000
                00000f0 1000 0000 0000 0000 1000 0000 0000 0000
                0000100 1000 0000 0000 0000 0aed 0000 0000 0000
              .
              .
              .
      ```
      <details>
          <summary>Full output of hexdump comp</summary>
          
              zaka@zakaBouj:/mnt/c/Users/zb200/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$ hexdump complx_main
                0000000 457f 464c 0102 0001 0000 0000 0000 0000
                0000010 0003 003e 0001 0000 1160 0000 0000 0000
                0000020 0040 0000 0000 0000 3cd0 0000 0000 0000
                0000030 0000 0000 0040 0038 000d 0040 0020 001f
                0000040 0006 0000 0004 0000 0040 0000 0000 0000
                0000050 0040 0000 0000 0000 0040 0000 0000 0000
                0000060 02d8 0000 0000 0000 02d8 0000 0000 0000
                0000070 0008 0000 0000 0000 0003 0000 0004 0000
                0000080 0318 0000 0000 0000 0318 0000 0000 0000
                0000090 0318 0000 0000 0000 001c 0000 0000 0000
                00000a0 001c 0000 0000 0000 0001 0000 0000 0000
                00000b0 0001 0000 0004 0000 0000 0000 0000 0000
                00000c0 0000 0000 0000 0000 0000 0000 0000 0000
                00000d0 0a90 0000 0000 0000 0a90 0000 0000 0000
                00000e0 1000 0000 0000 0000 0001 0000 0005 0000
                00000f0 1000 0000 0000 0000 1000 0000 0000 0000
                0000100 1000 0000 0000 0000 0aed 0000 0000 0000
                0000110 0aed 0000 0000 0000 1000 0000 0000 0000
                0000120 0001 0000 0004 0000 2000 0000 0000 0000
                0000130 2000 0000 0000 0000 2000 0000 0000 0000
                0000140 03c1 0000 0000 0000 03c1 0000 0000 0000
                0000150 1000 0000 0000 0000 0001 0000 0006 0000
                0000160 2d30 0000 0000 0000 3d30 0000 0000 0000
                0000170 3d30 0000 0000 0000 02e8 0000 0000 0000
                0000180 0428 0000 0000 0000 1000 0000 0000 0000
                0000190 0002 0000 0006 0000 2d48 0000 0000 0000
                00001a0 3d48 0000 0000 0000 3d48 0000 0000 0000
                00001b0 0220 0000 0000 0000 0220 0000 0000 0000
                00001c0 0008 0000 0000 0000 0004 0000 0004 0000
                00001d0 0338 0000 0000 0000 0338 0000 0000 0000
                00001e0 0338 0000 0000 0000 0030 0000 0000 0000
                00001f0 0030 0000 0000 0000 0008 0000 0000 0000
                0000200 0004 0000 0004 0000 0368 0000 0000 0000
                0000210 0368 0000 0000 0000 0368 0000 0000 0000
                0000220 0044 0000 0000 0000 0044 0000 0000 0000
                0000230 0004 0000 0000 0000 e553 6474 0004 0000
                0000240 0338 0000 0000 0000 0338 0000 0000 0000
                0000250 0338 0000 0000 0000 0030 0000 0000 0000
                0000260 0030 0000 0000 0000 0008 0000 0000 0000
                0000270 e550 6474 0004 0000 20a8 0000 0000 0000
                0000280 20a8 0000 0000 0000 20a8 0000 0000 0000
                0000290 0094 0000 0000 0000 0094 0000 0000 0000
                00002a0 0004 0000 0000 0000 e551 6474 0006 0000
                00002b0 0000 0000 0000 0000 0000 0000 0000 0000
                *
                00002d0 0000 0000 0000 0000 0010 0000 0000 0000
                00002e0 e552 6474 0004 0000 2d30 0000 0000 0000
                00002f0 3d30 0000 0000 0000 3d30 0000 0000 0000
                0000300 02d0 0000 0000 0000 02d0 0000 0000 0000
                0000310 0001 0000 0000 0000 6c2f 6269 3436 6c2f
                0000320 2d64 696c 756e 2d78 3878 2d36 3436 732e
                0000330 2e6f 0032 0000 0000 0004 0000 0020 0000
                0000340 0005 0000 4e47 0055 0002 c000 0004 0000
                0000350 0003 0000 0000 0000 8002 c000 0004 0000
                0000360 0001 0000 0000 0000 0004 0000 0014 0000
                0000370 0003 0000 4e47 0055 b4f1 7415 6338 859e
                0000380 1d24 b597 b181 79cb b618 1937 0004 0000
                0000390 0010 0000 0001 0000 4e47 0055 0000 0000
                00003a0 0003 0000 0002 0000 0000 0000 0000 0000
                00003b0 0002 0000 0011 0000 0001 0000 0006 0000
                00003c0 0000 0091 0001 0000 0011 0000 0000 0000
                00003d0 65d0 6dce 9815 430c 0000 0000 0000 0000
                00003e0 0000 0000 0000 0000 0000 0000 0000 0000
                00003f0 0050 0000 0012 0000 0000 0000 0000 0000
                0000400 0000 0000 0000 0000 014a 0000 0012 0000
                0000410 0000 0000 0000 0000 0000 0000 0000 0000
                0000420 0123 0000 0012 0000 0000 0000 0000 0000
                0000430 0000 0000 0000 0000 015c 0000 0012 0000
                0000440 0000 0000 0000 0000 0000 0000 0000 0000
                0000450 00c9 0000 0012 0000 0000 0000 0000 0000
                0000460 0000 0000 0000 0000 00a3 0000 0012 0000
                0000470 0000 0000 0000 0000 0000 0000 0000 0000
                0000480 0169 0000 0012 0000 0000 0000 0000 0000
                0000490 0000 0000 0000 0000 0101 0000 0012 0000
                00004a0 0000 0000 0000 0000 0000 0000 0000 0000
                00004b0 00b4 0000 0012 0000 0000 0000 0000 0000
                00004c0 0000 0000 0000 0000 0128 0000 0012 0000
                00004d0 0000 0000 0000 0000 0000 0000 0000 0000
                00004e0 0010 0000 0020 0000 0000 0000 0000 0000
                00004f0 0000 0000 0000 0000 012c 0000 0012 0000
                0000500 0000 0000 0000 0000 0000 0000 0000 0000
                0000510 0001 0000 0020 0000 0000 0000 0000 0000
                0000520 0000 0000 0000 0000 0046 0000 0012 0000
                0000530 0000 0000 0000 0000 0000 0000 0000 0000
                0000540 002c 0000 0020 0000 0000 0000 0000 0000
                0000550 0000 0000 0000 0000 008b 0000 0012 0000
                0000560 0000 0000 0000 0000 0000 0000 0000 0000
                0000570 013b 0000 0022 0000 0000 0000 0000 0000
                0000580 0000 0000 0000 0000 0119 0000 0011 001b
                0000590 4040 0000 0000 0000 0110 0000 0000 0000
                00005a0 5f00 675f 6f6d 5f6e 7473 7261 5f74 005f
                00005b0 495f 4d54 645f 7265 6765 7369 6574 5472
                00005c0 434d 6f6c 656e 6154 6c62 0065 495f 4d54
                00005d0 725f 6765 7369 6574 5472 434d 6f6c 656e
                00005e0 6154 6c62 0065 5a5f 534e 6c6f 4573 0064
                00005f0 5a5f 7453 6534 646e 496c 5363 3174 6331
                0000600 6168 5f72 7274 6961 7374 6349 4545 5352
                0000610 3174 6233 7361 6369 6f5f 7473 6572 6d61
                0000620 5449 545f 5f30 5345 5f36 5f00 4e5a 7453
                0000630 6938 736f 625f 7361 3465 6e49 7469 3144
                0000640 7645 5f00 4e5a 6f53 736c 5045 5246 6f53
                0000650 5f53 0045 5f5f 7867 5f78 6570 7372 6e6f
                0000660 6c61 7469 5f79 3076 5f00 535a 6c74 4973
                0000670 7453 3131 6863 7261 745f 6172 7469 4973
                0000680 4563 5245 7453 3331 6162 6973 5f63 736f
                0000690 7274 6165 496d 5463 455f 3553 505f 634b
                00006a0 5f00 4e5a 7453 6938 736f 625f 7361 3465
                00006b0 6e49 7469 3143 7645 5f00 535a 3474 6f63
                00006c0 7475 7300 7271 0074 6f70 0077 555f 776e
                00006d0 6e69 5f64 6552 7573 656d 5f00 635f 6178
                00006e0 665f 6e69 6c61 7a69 0065 5f5f 696c 6362
                00006f0 735f 6174 7472 6d5f 6961 006e 5f5f 7863
                0000700 5f61 7461 7865 7469 5f00 735f 6174 6b63
                0000710 635f 6b68 665f 6961 006c 696c 7362 6474
                0000720 2b63 2e2b 6f73 362e 6c00 6269 2e6d 6f73
                0000730 362e 6c00 6269 6367 5f63 2e73 6f73 312e
                0000740 6c00 6269 2e63 6f73 362e 4700 4343 335f
                0000750 302e 4700 494c 4342 325f 322e 0039 4c47
                0000760 4249 5f43 2e32 2e32 0035 5843 4158 4942
                0000770 315f 332e 4700 494c 4342 5858 335f 342e
                0000780 4700 494c 4342 325f 342e 4700 494c 4342
                0000790 325f 332e 0034 0000 0003 0004 0005 0002
                00007a0 0003 0003 0006 0003 0007 0008 0001 0009
                00007b0 0001 0003 0001 0003 0002 0003 0000 0000
                00007c0 0001 0001 0193 0000 0010 0000 0020 0000
                00007d0 2650 0b79 0000 0009 01ab 0000 0000 0000
                00007e0 0001 0002 0189 0000 0010 0000 0030 0000
                00007f0 9189 0696 0000 0008 01b3 0000 0010 0000
                0000800 1a75 0969 0000 0005 01be 0000 0000 0000
                0000810 0001 0002 017a 0000 0010 0000 0030 0000
                0000820 afd3 056b 0000 0007 01ca 0000 0010 0000
                0000830 2974 0892 0000 0003 01d5 0000 0000 0000
                0000840 0001 0003 01a1 0000 0010 0000 0000 0000
                0000850 6914 0d69 0000 0006 01e1 0000 0010 0000
                0000860 91b4 0696 0000 0004 01eb 0000 0010 0000
                0000870 1a75 0969 0000 0002 01be 0000 0000 0000
                0000880 3d30 0000 0000 0000 0008 0000 0000 0000
                0000890 1240 0000 0000 0000 3d38 0000 0000 0000
                00008a0 0008 0000 0000 0000 17b8 0000 0000 0000
                00008b0 3d40 0000 0000 0000 0008 0000 0000 0000
                00008c0 1200 0000 0000 0000 4008 0000 0000 0000
                00008d0 0008 0000 0000 0000 4008 0000 0000 0000
                00008e0 3fc8 0000 0000 0000 0006 0000 0011 0000
                00008f0 0000 0000 0000 0000 3fd0 0000 0000 0000
                0000900 0006 0000 0001 0000 0000 0000 0000 0000
                0000910 3fd8 0000 0000 0000 0006 0000 0002 0000
                0000920 0000 0000 0000 0000 3fe0 0000 0000 0000
                0000930 0006 0000 000b 0000 0000 0000 0000 0000
                0000940 3fe8 0000 0000 0000 0006 0000 000d 0000
                0000950 0000 0000 0000 0000 3ff0 0000 0000 0000
                0000960 0006 0000 000f 0000 0000 0000 0000 0000
                0000970 3ff8 0000 0000 0000 0006 0000 0010 0000
                0000980 0000 0000 0000 0000 4010 0000 0000 0000
                0000990 0001 0000 0009 0000 0000 0000 0000 0000
                00009a0 4040 0000 0000 0000 0005 0000 0012 0000
                00009b0 0000 0000 0000 0000 3f80 0000 0000 0000
                00009c0 0007 0000 0003 0000 0000 0000 0000 0000
                00009d0 3f88 0000 0000 0000 0007 0000 0004 0000
                00009e0 0000 0000 0000 0000 3f90 0000 0000 0000
                00009f0 0007 0000 0005 0000 0000 0000 0000 0000
                0000a00 3f98 0000 0000 0000 0007 0000 0006 0000
                0000a10 0000 0000 0000 0000 3fa0 0000 0000 0000
                0000a20 0007 0000 0007 0000 0000 0000 0000 0000
                0000a30 3fa8 0000 0000 0000 0007 0000 0008 0000
                0000a40 0000 0000 0000 0000 3fb0 0000 0000 0000
                0000a50 0007 0000 000a 0000 0000 0000 0000 0000
                0000a60 3fb8 0000 0000 0000 0007 0000 000c 0000
                0000a70 0000 0000 0000 0000 3fc0 0000 0000 0000
                0000a80 0007 0000 000e 0000 0000 0000 0000 0000
                0000a90 0000 0000 0000 0000 0000 0000 0000 0000
                *
                0001000 0ff3 fa1e 8348 08ec 8b48 d905 002f 4800
                0001010 c085 0274 d0ff 8348 08c4 00c3 0000 0000
                0001020 35ff 2f4a 0000 fff2 4b25 002f 0f00 001f
                0001030 0ff3 fa1e 0068 0000 f200 e1e9 ffff 90ff
                0001040 0ff3 fa1e 0168 0000 f200 d1e9 ffff 90ff
                0001050 0ff3 fa1e 0268 0000 f200 c1e9 ffff 90ff
                0001060 0ff3 fa1e 0368 0000 f200 b1e9 ffff 90ff
                0001070 0ff3 fa1e 0468 0000 f200 a1e9 ffff 90ff
                0001080 0ff3 fa1e 0568 0000 f200 91e9 ffff 90ff
                0001090 0ff3 fa1e 0668 0000 f200 81e9 ffff 90ff
                00010a0 0ff3 fa1e 0768 0000 f200 71e9 ffff 90ff
                00010b0 0ff3 fa1e 0868 0000 f200 61e9 ffff 90ff
                00010c0 0ff3 fa1e fff2 fd25 002e 0f00 441f 0000
                00010d0 0ff3 fa1e fff2 a525 002e 0f00 441f 0000
                00010e0 0ff3 fa1e fff2 9d25 002e 0f00 441f 0000
                00010f0 0ff3 fa1e fff2 9525 002e 0f00 441f 0000
                0001100 0ff3 fa1e fff2 8d25 002e 0f00 441f 0000
                0001110 0ff3 fa1e fff2 8525 002e 0f00 441f 0000
                0001120 0ff3 fa1e fff2 7d25 002e 0f00 441f 0000
                0001130 0ff3 fa1e fff2 7525 002e 0f00 441f 0000
                0001140 0ff3 fa1e fff2 6d25 002e 0f00 441f 0000
                0001150 0ff3 fa1e fff2 6525 002e 0f00 441f 0000
                0001160 0ff3 fa1e ed31 8949 5ed1 8948 48e2 e483
                0001170 50f0 4554 c031 c931 8d48 ca3d 0000 ff00
                0001180 5315 002e f400 2e66 1f0f 0084 0000 0000
                0001190 8d48 813d 002e 4800 058d 2e7a 0000 3948
                00011a0 74f8 4815 058b 2e36 0000 8548 74c0 ff09
                00011b0 0fe0 801f 0000 0000 0fc3 801f 0000 0000
                00011c0 8d48 513d 002e 4800 358d 2e4a 0000 2948
                00011d0 48fe f089 c148 3fee c148 03f8 0148 48c6
                00011e0 fed1 1474 8b48 0505 002e 4800 c085 0874
                00011f0 e0ff 0f66 441f 0000 0fc3 801f 0000 0000
                0001200 0ff3 fa1e 3d80 2f45 0000 7500 552b 8348
                0001210 b23d 002d 0000 8948 74e5 480c 3d8b 2de6
                0001220 0000 99e8 fffe e8ff ff64 ffff 05c6 2f1d
                0001230 0000 5d01 0fc3 001f 0fc3 801f 0000 0000
                0001240 0ff3 fa1e 77e9 ffff f3ff 1e0f 55fa 8948
                0001250 53e5 8148 98ec 0000 8900 6cbd ffff 48ff
                0001260 b589 ff60 ffff 4864 048b 2825 0000 4800
                0001270 4589 31e8 f2c0 100f 1b05 000e 4800 158b
                0001280 0e14 0000 8d48 8045 0f66 c828 4866 6e0f
                0001290 48c2 c789 39e8 0005 f200 100f ff05 000d
                00012a0 4800 158b 0de8 0000 8d48 9045 0f66 c828
                00012b0 4866 6e0f 48c2 c789 15e8 0005 4800 558d
                00012c0 4890 458d 48d0 d689 8948 e8c7 0574 0000
                00012d0 8d48 a045 8d48 d055 8d48 804d 8948 48ce
                00012e0 c789 d5e8 0005 4800 458d 48d0 c789 13e8
                00012f0 0005 4800 058d 0d27 0000 8948 48c6 058d
                0001300 2d3c 0000 8948 e8c7 fde4 ffff 8948 48c3
                0001310 458d 48a0 c789 5fe8 0005 6600 0f48 c07e
                0001320 4866 6e0f 48c0 df89 23e8 fffe 48ff c289
                0001330 8d48 f205 000c 4800 c689 8948 e8d7 fdae
                0001340 ffff 8948 48c3 458d 48a0 c789 49e8 0005
                0001350 6600 0f48 c07e 4866 6e0f 48c0 df89 ede8
                0001360 fffd 48ff c289 8d48 c005 000c 4800 c689
                0001370 8948 e8d7 fd78 ffff 8b48 5115 002c 4800
                0001380 d689 8948 e8c7 fd76 ffff 8d48 9055 8d48
                0001390 d045 8948 48d6 c789 a7e8 0004 4800 458d
                00013a0 48b0 558d 48d0 4d8d 4880 ce89 8948 e8c7
                00013b0 056e 0000 8d48 d045 8948 e8c7 0446 0000
                00013c0 8d48 6805 000c 4800 c689 8d48 6f05 002c
                00013d0 4800 c789 17e8 fffd 48ff c389 8d48 b045
                00013e0 8948 e8c7 0492 0000 4866 7e0f 66c0 0f48
                00013f0 c06e 8948 e8df fd56 ffff 8948 48c2 058d
                0001400 0c25 0000 8948 48c6 d789 e1e8 fffc 48ff
                0001410 c389 8d48 b045 8948 e8c7 047c 0000 4866
                0001420 7e0f 66c0 0f48 c06e 8948 e8df fd20 ffff
                0001430 8948 48c2 058d 0bf3 0000 8948 48c6 d789
                0001440 abe8 fffc 48ff 158b 2b84 0000 8948 48d6
                0001450 c789 a9e8 fffc 48ff 558d 4890 458d 48d0
                0001460 d689 8948 e8c7 03da 0000 8d48 c045 8d48
                0001470 d055 8d48 804d 8948 48ce c789 07e8 0005
                0001480 4800 458d 48d0 c789 79e8 0003 4800 058d
                0001490 0ba3 0000 8948 48c6 058d 2ba2 0000 8948
                00014a0 e8c7 fc4a ffff 8948 48c3 458d 48c0 c789
                00014b0 c5e8 0003 6600 0f48 c07e 4866 6e0f 48c0
                00014c0 df89 89e8 fffc 48ff c289 8d48 5805 000b
                00014d0 4800 c689 8948 e8d7 fc14 ffff 8948 48c3
                00014e0 458d 48c0 c789 afe8 0003 6600 0f48 c07e
                00014f0 4866 6e0f 48c0 df89 53e8 fffc 48ff c289
                0001500 8d48 2605 000b 4800 c689 8948 e8d7 fbde
                0001510 ffff 8b48 b715 002a 4800 d689 8948 e8c7
                0001520 fbdc ffff 8d48 d045 8d48 8055 8948 48d6
                0001530 c789 e9e8 0004 4800 058d 0b01 0000 8948
                0001540 48c6 058d 2af8 0000 8948 e8c7 fba0 ffff
                0001550 8948 48c3 458d 48d0 c789 1be8 0003 6600
                0001560 0f48 c07e 4866 6e0f 48c0 df89 dfe8 fffb
                0001570 48ff c289 8d48 ae05 000a 4800 c689 8948
                0001580 e8d7 fb6a ffff 8948 48c3 458d 48d0 c789
                0001590 05e8 0003 6600 0f48 c07e 4866 6e0f 48c0
                00015a0 df89 a9e8 fffb 48ff c289 8d48 7c05 000a
                00015b0 4800 c689 8948 e8d7 fb34 ffff 8b48 0d15
                00015c0 002a 4800 d689 8948 e8c7 fb32 ffff 8d48
                00015d0 8045 8948 e8c7 0492 0000 4866 7e0f 48c0
                00015e0 8589 ff70 ffff 8d48 6305 000a 4800 c689
                00015f0 8d48 4905 002a 4800 c789 f1e8 fffa 48ff
                0001600 c289 8b48 7085 ffff 66ff 0f48 c06e 8948
                0001610 e8d7 fb3a ffff 8b48 b315 0029 4800 d689
                0001620 8948 e8c7 fad8 ffff 8d48 9045 8948 e8c7
                0001630 0438 0000 4866 7e0f 48c0 8589 ff78 ffff
                0001640 8d48 1a05 000a 4800 c689 8d48 ef05 0029
                0001650 4800 c789 97e8 fffa 48ff c289 8b48 7885
                0001660 ffff 66ff 0f48 c06e 8948 e8d7 fae0 ffff
                0001670 8b48 5915 0029 4800 d689 8948 e8c7 fa7e
                0001680 ffff 00bb 0000 4800 458d 48d0 c789 73e8
                0001690 0001 4800 458d 48c0 c789 67e8 0001 4800
                00016a0 458d 48b0 c789 5be8 0001 4800 458d 48a0
                00016b0 c789 4fe8 0001 4800 458d 4890 c789 43e8
                00016c0 0001 4800 458d 4880 c789 37e8 0001 8900
                00016d0 48d8 558b 64e8 2b48 2514 0028 0000 7c74
                00016e0 75eb 0ff3 fa1e 8948 48c3 458d 48d0 c789
                00016f0 11e8 0001 eb00 f307 1e0f 48fa c389 8d48
                0001700 c045 8948 e8c7 00fc 0000 07eb 0ff3 fa1e
                0001710 8948 48c3 458d 48b0 c789 e7e8 0000 eb00
                0001720 f307 1e0f 48fa c389 8d48 a045 8948 e8c7
                0001730 00d2 0000 8d48 9045 8948 e8c7 00c6 0000
                0001740 8d48 8045 8948 e8c7 00ba 0000 8948 48d8
                0001750 c789 e9e8 fff9 e8ff f9b4 ffff 8b48 f85d
                0001760 c3c9 0ff3 fa1e 4855 e589 8348 10ec 7d89
                0001770 89fc f875 7d83 01fc 3b75 7d81 fff8 00ff
                0001780 7500 4832 058d 29c7 0000 8948 e8c7 f98e
                0001790 ffff 8d48 6f05 0028 4800 c289 8d48 ae05
                00017a0 0029 4800 c689 8b48 4b05 0028 4800 c789
                00017b0 2be8 fff9 90ff c3c9 0ff3 fa1e 4855 e589
                00017c0 ffbe 00ff bf00 0001 0000 93e8 ffff 5dff
                00017d0 90c3 0ff3 fa1e 4855 e589 8948 f87d 0ff2
                00017e0 4511 f2f0 110f e84d 8b48 f845 0ff2 4510
                00017f0 f2f0 110f 4800 458b f2f8 100f e845 0ff2
                0001800 4011 9008 c35d 0ff3 fa1e 4855 e589 8348
                0001810 10ec 8948 f87d 8d48 f305 0007 4800 c689
                0001820 8d48 1905 0028 4800 c789 c1e8 fff8 48ff
                0001830 158b 279a 0000 8948 48d6 c789 bfe8 fff8
                0001840 90ff c3c9 0ff3 fa1e 4855 e589 8948 f87d
                0001850 8948 f075 8b48 f045 0ff2 0010 8b48 f845
                0001860 0ff2 0011 8b48 f045 0ff2 4010 4808 458b
                0001870 f2f8 110f 0840 5d90 90c3 0ff3 fa1e 4855
                0001880 e589 8948 f87d 8b48 f845 0ff2 0010 4866
                0001890 7e0f 66c0 0f48 c06e c35d 0ff3 fa1e 4855
                00018a0 e589 8948 f87d 8b48 f845 0ff2 4010 6608
                00018b0 0f48 c07e 4866 6e0f 5dc0 90c3 0ff3 fa1e
                00018c0 4855 e589 8348 20ec 8948 f87d 8948 f075
                00018d0 8948 e855 8b48 f045 0ff2 4810 4808 458b
                00018e0 f2e8 100f 0840 0f66 d128 0ff2 d058 8b48
                00018f0 f045 0ff2 0810 8b48 e845 0ff2 0010 0ff2
                0001900 c858 4866 7e0f 48ca 458b 66f8 280f 66ca
                0001910 0f48 c26e 8948 e8c7 feb6 ffff 8b48 f845
                0001920 c3c9 0ff3 fa1e 4855 e589 8348 20ec 8948
                0001930 f87d 8948 f075 8948 e855 8b48 f045 0ff2
                0001940 4010 4808 458b f2e8 100f 0848 0f66 d028
                0001950 0ff2 d15c 8b48 f045 0ff2 0010 8b48 e845
                0001960 0ff2 0810 0ff2 c15c 4866 7e0f 48c2 458b
                0001970 66f8 280f 66ca 0f48 c26e 8948 e8c7 fe50
                0001980 ffff 8b48 f845 c3c9 0ff3 fa1e 4855 e589
                0001990 8348 20ec 8948 f87d 8948 f075 8948 e855
                00019a0 8b48 f045 0ff2 0810 8b48 e845 0ff2 4010
                00019b0 f208 590f 48c8 458b f2f0 100f 0850 8b48
                00019c0 e845 0ff2 0010 0ff2 c259 0f66 d928 0ff2
                00019d0 d858 8b48 f045 0ff2 0810 8b48 e845 0ff2
                00019e0 0010 0ff2 c159 8b48 f045 0ff2 5010 4808
                00019f0 458b f2e8 100f 0848 0ff2 ca59 0ff2 c15c
                0001a00 4866 7e0f 48c2 458b 66f8 280f 66cb 0f48
                0001a10 c26e 8948 e8c7 fdb8 ffff 8b48 f845 c3c9
                0001a20 0ff3 fa1e 4855 e589 8348 10ec 8948 f87d
                0001a30 8948 f075 8b48 f045 0ff2 4010 f308 7e0f
                0001a40 3b0d 0006 6600 570f 48c1 458b 48f0 108b
                0001a50 8b48 f845 0f66 c828 4866 6e0f 48c2 c789
                0001a60 6de8 fffd 48ff 458b c9f8 90c3 0ff3 fa1e
                0001a70 4855 e589 8348 10ec 8948 f87d 8b48 f845
                0001a80 8b48 f200 100f 0505 0006 6600 280f 66c8
                0001a90 0f48 c06e 97e8 fff6 f2ff 110f f045 8b48
                0001aa0 f845 8b48 0840 0ff2 0510 05e2 0000 0f66
                0001ab0 c828 4866 6e0f e8c0 f674 ffff 0f66 d028
                0001ac0 0ff2 5558 66f0 0f48 d07e 4866 6e0f e8c0
                0001ad0 f5fc ffff 4866 7e0f 66c0 0f48 c06e c3c9
                0001ae0 0ff3 fa1e 8348 08ec 8348 08c4 00c3 0000
                0001af0 0000 0000 0000 0000 0000 0000 0000 0000
                *
                0002000 0001 0002 0000 0000 0000 0000 0000 0000
                0002010 624f 656a 746b 5a20 7265 7473 656f 7472
                0002020 6100 2b20 6220 203a 2000 202b 6900 6100
                0002030 2d20 6220 203a 6100 2a20 6220 203a 6300
                0002040 6e6f 756a 6167 6574 6f20 2066 3a61 0020
                0002050 616d 6e67 7469 6475 2065 666f 6120 203a
                0002060 6d00 6761 696e 7574 6564 6f20 2066 3a62
                0002070 0020 0000 0000 0000 0000 0000 0000 0000
                0002080 0000 0000 0000 8000 0000 0000 0000 0000
                0002090 0000 0000 0000 4000 0000 0000 0000 3ff0
                00020a0 0000 0000 0000 4008 1b01 3b03 0094 0000
                00020b0 0011 0000 ef78 ffff 00c8 0000 f018 ffff
                00020c0 00f0 0000 f028 ffff 0108 0000 f0b8 ffff
                00020d0 00b0 0000 f1a1 ffff 0284 0000 f6ba ffff
                00020e0 02ac 0000 f710 ffff 02cc 0000 f72a ffff
                00020f0 0120 0000 f75e ffff 0160 0000 f79c ffff
                0002100 0184 0000 f7d2 ffff 01a4 0000 f7f2 ffff
                0002110 01c4 0000 f814 ffff 01e4 0000 f87a ffff
                0002120 0204 0000 f8e0 ffff 0224 0000 f978 ffff
                0002130 0244 0000 f9c4 ffff 0264 0000 0000 0000
                0002140 0014 0000 0000 0000 7a01 0052 7801 0110
                0002150 0c1b 0807 0190 0000 0014 0000 001c 0000
                0002160 f000 ffff 0026 0000 4400 1007 0000 0000
                0002170 0024 0000 0034 0000 eea8 ffff 00a0 0000
                0002180 0e00 4610 180e 0f4a 770b 8008 3f00 3a1a
                0002190 332a 2224 0000 0000 0014 0000 005c 0000
                00021a0 ef20 ffff 0010 0000 0000 0000 0000 0000
                00021b0 0014 0000 0074 0000 ef18 ffff 0090 0000
                00021c0 0000 0000 0000 0000 001c 0000 008c 0000
                00021d0 f602 ffff 0034 0000 4500 100e 0286 0d43
                00021e0 6b06 070c 0008 0000 001c 0000 0000 0000
                00021f0 7a01 4c50 0052 7801 0710 159b 001e 1b00
                0002200 0c1b 0807 0190 0000 0020 0000 0024 0000
                0002210 f5f6 ffff 003e 0000 7f04 0001 4500 100e
                0002220 0286 0d43 7506 070c 0008 0000 001c 0000
                0002230 00f0 0000 f610 ffff 0035 0000 4500 100e
                0002240 0286 0d43 6c06 070c 0008 0000 001c 0000
                0002250 0110 0000 f626 ffff 0020 0000 4500 100e
                0002260 0286 0d43 5706 070c 0008 0000 001c 0000
                0002270 0130 0000 f626 ffff 0021 0000 4500 100e
                0002280 0286 0d43 5806 070c 0008 0000 001c 0000
                0002290 0150 0000 f628 ffff 0066 0000 4500 100e
                00022a0 0286 0d43 0206 0c5d 0807 0000 001c 0000
                00022b0 0170 0000 f66e ffff 0066 0000 4500 100e
                00022c0 0286 0d43 0206 0c5d 0807 0000 001c 0000
                00022d0 0190 0000 f6b4 ffff 0098 0000 4500 100e
                00022e0 0286 0d43 0206 0c8f 0807 0000 001c 0000
                00022f0 01b0 0000 f72c ffff 004b 0000 4500 100e
                0002300 0286 0d43 0206 0c42 0807 0000 001c 0000
                0002310 01d0 0000 f758 ffff 0074 0000 4500 100e
                0002320 0286 0d43 0206 0c6b 0807 0000 0024 0000
                0002330 0148 0000 ef15 ffff 0519 0000 5f04 0000
                0002340 4500 100e 0286 0d43 4806 0383 0803 0c05
                0002350 0807 0000 001c 0000 0218 0000 f406 ffff
                0002360 0056 0000 4500 100e 0286 0d43 0206 0c4d
                0002370 0807 0000 001c 0000 0238 0000 f43c ffff
                0002380 0019 0000 4500 100e 0286 0d43 5006 070c
                0002390 0008 0000 0000 0000 ffff 0001 ffff 2101
                00023a0 01be 0183 09d8 8b00 8303 c301 0009 04d8
                00023b0 0183 09ae 8200 b706 9902 0009 0a89 0005
                00023c0 0000 0000 0000 0000 0000 0000 0000 0000
                *
                0002d30 1240 0000 0000 0000 17b8 0000 0000 0000
                0002d40 1200 0000 0000 0000 0001 0000 0000 0000
                0002d50 017a 0000 0000 0000 0001 0000 0000 0000
                0002d60 0189 0000 0000 0000 0001 0000 0000 0000
                0002d70 0193 0000 0000 0000 0001 0000 0000 0000
                0002d80 01a1 0000 0000 0000 000c 0000 0000 0000
                0002d90 1000 0000 0000 0000 000d 0000 0000 0000
                0002da0 1ae0 0000 0000 0000 0019 0000 0000 0000
                0002db0 3d30 0000 0000 0000 001b 0000 0000 0000
                0002dc0 0010 0000 0000 0000 001a 0000 0000 0000
                0002dd0 3d40 0000 0000 0000 001c 0000 0000 0000
                0002de0 0008 0000 0000 0000 fef5 6fff 0000 0000
                0002df0 03b0 0000 0000 0000 0005 0000 0000 0000
                0002e00 05a0 0000 0000 0000 0006 0000 0000 0000
                0002e10 03d8 0000 0000 0000 000a 0000 0000 0000
                0002e20 01f6 0000 0000 0000 000b 0000 0000 0000
                0002e30 0018 0000 0000 0000 0015 0000 0000 0000
                0002e40 0000 0000 0000 0000 0003 0000 0000 0000
                0002e50 3f68 0000 0000 0000 0002 0000 0000 0000
                0002e60 00d8 0000 0000 0000 0014 0000 0000 0000
                0002e70 0007 0000 0000 0000 0017 0000 0000 0000
                0002e80 09b8 0000 0000 0000 0007 0000 0000 0000
                0002e90 0880 0000 0000 0000 0008 0000 0000 0000
                0002ea0 0138 0000 0000 0000 0009 0000 0000 0000
                0002eb0 0018 0000 0000 0000 001e 0000 0000 0000
                0002ec0 0008 0000 0000 0000 fffb 6fff 0000 0000
                0002ed0 0001 0800 0000 0000 fffe 6fff 0000 0000
                0002ee0 07c0 0000 0000 0000 ffff 6fff 0000 0000
                0002ef0 0004 0000 0000 0000 fff0 6fff 0000 0000
                0002f00 0796 0000 0000 0000 fff9 6fff 0000 0000
                0002f10 0004 0000 0000 0000 0000 0000 0000 0000
                0002f20 0000 0000 0000 0000 0000 0000 0000 0000
                *
                0002f60 0000 0000 0000 0000 3d48 0000 0000 0000
                0002f70 0000 0000 0000 0000 0000 0000 0000 0000
                0002f80 1030 0000 0000 0000 1040 0000 0000 0000
                0002f90 1050 0000 0000 0000 1060 0000 0000 0000
                0002fa0 1070 0000 0000 0000 1080 0000 0000 0000
                0002fb0 1090 0000 0000 0000 10a0 0000 0000 0000
                0002fc0 10b0 0000 0000 0000 0000 0000 0000 0000
                0002fd0 0000 0000 0000 0000 0000 0000 0000 0000
                *
                0003000 0000 0000 0000 0000 4008 0000 0000 0000
                0003010 0000 0000 0000 0000 4347 3a43 2820 6255
                0003020 6e75 7574 3120 2e31 2e34 2d30 7531 7562
                0003030 746e 3175 327e 2e32 3430 2029 3131 342e
                0003040 302e 0000 0000 0000 0000 0000 0000 0000
                0003050 0000 0000 0000 0000 0000 0000 0000 0000
                0003060 0001 0000 0004 fff1 0000 0000 0000 0000
                0003070 0000 0000 0000 0000 0009 0000 0001 0004
                0003080 038c 0000 0000 0000 0020 0000 0000 0000
                0003090 0013 0000 0004 fff1 0000 0000 0000 0000
                00030a0 0000 0000 0000 0000 001e 0000 0002 0010
                00030b0 1190 0000 0000 0000 0000 0000 0000 0000
                00030c0 0020 0000 0002 0010 11c0 0000 0000 0000
                00030d0 0000 0000 0000 0000 0033 0000 0002 0010
                00030e0 1200 0000 0000 0000 0000 0000 0000 0000
                00030f0 0049 0000 0001 001b 4150 0000 0000 0000
                0003100 0001 0000 0000 0000 0055 0000 0001 0017
                0003110 3d40 0000 0000 0000 0000 0000 0000 0000
                0003120 007c 0000 0002 0010 1240 0000 0000 0000
                0003130 0000 0000 0000 0000 0088 0000 0001 0016
                0003140 3d30 0000 0000 0000 0000 0000 0000 0000
                0003150 00a7 0000 0004 fff1 0000 0000 0000 0000
                0003160 0000 0000 0000 0000 00b7 0000 0001 001b
                0003170 4151 0000 0000 0000 0001 0000 0000 0000
                0003180 00c6 0000 0002 0010 1762 0000 0000 0000
                0003190 0056 0000 0000 0000 00f6 0000 0002 0010
                00031a0 17b8 0000 0000 0000 0019 0000 0000 0000
                00031b0 0013 0000 0004 fff1 0000 0000 0000 0000
                00031c0 0000 0000 0000 0000 010a 0000 0001 0014
                00031d0 2394 0000 0000 0000 0000 0000 0000 0000
                00031e0 0000 0000 0004 fff1 0000 0000 0000 0000
                00031f0 0000 0000 0000 0000 0118 0000 0000 0013
                0003200 20a8 0000 0000 0000 0000 0000 0000 0000
                0003210 012b 0000 0001 0018 3d48 0000 0000 0000
                0003220 0000 0000 0000 0000 0134 0000 0001 0019
                0003230 3f68 0000 0000 0000 0000 0000 0000 0000
                0003240 014a 0000 0022 0010 1806 0000 0000 0000
                0003250 003e 0000 0000 0000 0162 0000 0010 001a
                0003260 4018 0000 0000 0000 0000 0000 0000 0000
                0003270 0169 0000 0022 0010 1a20 0000 0000 0000
                0003280 004b 0000 0000 0000 03f2 0000 0020 001a
                0003290 4000 0000 0000 0000 0000 0000 0000 0000
                00032a0 0182 0000 0022 0010 1988 0000 0000 0000
                00032b0 0098 0000 0000 0000 019c 0000 0011 0012
                00032c0 2000 0000 0000 0000 0004 0000 0000 0000
                00032d0 01ab 0000 0022 0000 0000 0000 0000 0000
                00032e0 0000 0000 0000 0000 0105 0000 0012 0010
                00032f0 1249 0000 0000 0000 0519 0000 0000 0000
                0003300 01c6 0000 0012 0000 0000 0000 0000 0000
                0003310 0000 0000 0000 0000 020d 0000 0211 001a
                0003320 4008 0000 0000 0000 0000 0000 0000 0000
                0003330 021a 0000 0022 0010 1a6c 0000 0000 0000
                0003340 0074 0000 0000 0000 023b 0000 0022 0010
                0003350 1844 0000 0000 0000 0035 0000 0000 0000
                0003360 0257 0000 0221 001a 4010 0000 0000 0000
                0003370 0008 0000 0000 0000 0273 0000 0212 0011
                0003380 1ae0 0000 0000 0000 0000 0000 0000 0000
                0003390 0279 0000 0012 0000 0000 0000 0000 0000
                00033a0 0000 0000 0000 0000 0296 0000 0012 0000
                00033b0 0000 0000 0000 0000 0000 0000 0000 0000
                00033c0 02a7 0000 0022 0010 1806 0000 0000 0000
                00033d0 003e 0000 0000 0000 02bf 0000 0022 0010
                00033e0 187a 0000 0000 0000 0020 0000 0000 0000
                00033f0 02de 0000 0022 0010 18bc 0000 0000 0000
                0003400 0066 0000 0000 0000 02f8 0000 0012 0000
                0003410 0000 0000 0000 0000 0000 0000 0000 0000
                0003420 0311 0000 0022 0010 1844 0000 0000 0000
                0003430 0035 0000 0000 0000 03f6 0000 0012 0010
                0003440 1160 0000 0000 0000 0026 0000 0000 0000
                0003450 032d 0000 0012 0000 0000 0000 0000 0000
                0003460 0000 0000 0000 0000 0371 0000 0022 0010
                0003470 189a 0000 0000 0000 0021 0000 0000 0000
                0003480 0390 0000 0012 0000 0000 0000 0000 0000
                0003490 0000 0000 0000 0000 03ad 0000 0012 0000
                00034a0 0000 0000 0000 0000 0000 0000 0000 0000
                00034b0 03c8 0000 0212 000c 1000 0000 0000 0000
                00034c0 0000 0000 0000 0000 03ce 0000 0211 001a
                00034d0 4018 0000 0000 0000 0000 0000 0000 0000
                00034e0 03da 0000 0011 001b 4040 0000 0000 0000
                00034f0 0110 0000 0000 0000 03f0 0000 0010 001a
                0003500 4000 0000 0000 0000 0000 0000 0000 0000
                0003510 03fd 0000 0022 0010 17d2 0000 0000 0000
                0003520 0034 0000 0000 0000 0416 0000 0010 001b
                0003530 4158 0000 0000 0000 0000 0000 0000 0000
                0003540 041b 0000 0010 001b 4018 0000 0000 0000
                0003550 0000 0000 0000 0000 0427 0000 0012 0000
                0003560 0000 0000 0000 0000 0000 0000 0000 0000
                0003570 044b 0000 0012 0000 0000 0000 0000 0000
                0003580 0000 0000 0000 0000 046b 0000 0022 0010
                0003590 17d2 0000 0000 0000 0034 0000 0000 0000
                00035a0 0484 0000 0012 0000 0000 0000 0000 0000
                00035b0 0000 0000 0000 0000 0493 0000 0020 0000
                00035c0 0000 0000 0000 0000 0000 0000 0000 0000
                00035d0 04af 0000 0012 0000 0000 0000 0000 0000
                00035e0 0000 0000 0000 0000 04c6 0000 0022 0010
                00035f0 1922 0000 0000 0000 0066 0000 0000 0000
                0003600 04e0 0000 0020 0000 0000 0000 0000 0000
                0003610 0000 0000 0000 0000 04ef 0000 0012 0000
                0003620 0000 0000 0000 0000 0000 0000 0000 0000
                0003630 0505 0000 0020 0000 0000 0000 0000 0000
                0003640 0000 0000 0000 0000 051f 0000 0012 0000
                0003650 0000 0000 0000 0000 0000 0000 0000 0000
                0003660 5300 7263 3174 6f2e 5f00 615f 6962 745f
                0003670 6761 6300 7472 7473 6675 2e66 0063 6564
                0003680 6572 6967 7473 7265 745f 5f6d 6c63 6e6f
                0003690 7365 5f00 645f 5f6f 6c67 626f 6c61 645f
                00036a0 6f74 7372 615f 7875 6300 6d6f 6c70 7465
                00036b0 6465 302e 5f00 645f 5f6f 6c67 626f 6c61
                00036c0 645f 6f74 7372 615f 7875 665f 6e69 5f69
                00036d0 7261 6172 5f79 6e65 7274 0079 7266 6d61
                00036e0 5f65 7564 6d6d 0079 5f5f 7266 6d61 5f65
                00036f0 7564 6d6d 5f79 6e69 7469 615f 7272 7961
                0003700 655f 746e 7972 6300 6d6f 6c70 5f78 616d
                0003710 6e69 632e 7070 5f00 535a 4c74 5f38 695f
                0003720 696f 696e 0074 5a5f 3134 5f5f 7473 7461
                0003730 6369 695f 696e 6974 6c61 7a69 7461 6f69
                0003740 5f6e 6e61 5f64 6564 7473 7572 7463 6f69
                0003750 5f6e 6930 0069 475f 4f4c 4142 5f4c 735f
                0003760 6275 495f 6d5f 6961 006e 5f5f 5246 4d41
                0003770 5f45 4e45 5f44 005f 5f5f 4e47 5f55 4845
                0003780 465f 4152 454d 485f 5244 5f00 5944 414e
                0003790 494d 0043 475f 4f4c 4142 5f4c 464f 5346
                00037a0 5445 545f 4241 454c 005f 5a5f 384e 6f54
                00037b0 6f43 706d 786c 4336 6d6f 6c70 4478 4531
                00037c0 0076 655f 6164 6174 5f00 4e5a 384b 6f54
                00037d0 6f43 706d 786c 4336 6d6f 6c70 6378 456f
                00037e0 0076 5a5f 384e 6f54 6f43 706d 786c 4336
                00037f0 6d6f 6c70 6d78 456c 3053 005f 495f 5f4f
                0003800 7473 6964 5f6e 7375 6465 5f00 635f 6178
                0003810 665f 6e69 6c61 7a69 4065 4c47 4249 5f43
                0003820 2e32 2e32 0035 5a5f 7453 6534 646e 496c
                0003830 5363 3174 6331 6168 5f72 7274 6961 7374
                0003840 6349 4545 5352 3174 6233 7361 6369 6f5f
                0003850 7473 6572 6d61 5449 545f 5f30 5345 5f36
                0003860 4740 494c 4342 5858 335f 342e 5f00 645f
                0003870 6f73 685f 6e61 6c64 0065 5a5f 4b4e 5438
                0003880 436f 6d6f 6c70 3678 6f43 706d 786c 6d39
                0003890 6761 696e 7574 6564 7645 5f00 4e5a 5438
                00038a0 436f 6d6f 6c70 3678 6f43 706d 786c 3243
                00038b0 5245 534b 5f30 4400 2e57 6572 2e66 5f5f
                00038c0 7867 5f78 6570 7372 6e6f 6c61 7469 5f79
                00038d0 3076 5f00 6966 696e 5f00 6c5f 6269 5f63
                00038e0 7473 7261 5f74 616d 6e69 4740 494c 4342
                00038f0 325f 332e 0034 7173 7472 4740 494c 4342
                0003900 325f 322e 352e 5f00 4e5a 5438 436f 6d6f
                0003910 6c70 3678 6f43 706d 786c 3244 7645 5f00
                0003920 4e5a 384b 6f54 6f43 706d 786c 4336 6d6f
                0003930 6c70 3778 6567 5274 6165 456c 0076 5a5f
                0003940 384e 6f54 6f43 706d 786c 4336 6d6f 6c70
                0003950 7078 456c 3053 005f 5f5f 7863 5f61 7461
                0003960 7865 7469 4740 494c 4342 325f 322e 352e
                0003970 5f00 4e5a 5438 436f 6d6f 6c70 3678 6f43
                0003980 706d 786c 3143 5245 534b 5f30 5f00 535a
                0003990 6c74 4973 7453 3131 6863 7261 745f 6172
                00039a0 7469 4973 4563 5245 7453 3331 6162 6973
                00039b0 5f63 736f 7274 6165 496d 5463 455f 3553
                00039c0 505f 634b 4740 494c 4342 5858 335f 342e
                00039d0 5f00 4e5a 384b 6f54 6f43 706d 786c 4336
                00039e0 6d6f 6c70 3778 6567 4974 616d 4567 0076
                00039f0 5a5f 534e 6c6f 4573 4650 5352 536f 455f
                0003a00 4740 494c 4342 5858 335f 342e 5f00 735f
                0003a10 6174 6b63 635f 6b68 665f 6961 406c 4c47
                0003a20 4249 5f43 2e32 0034 695f 696e 0074 5f5f
                0003a30 4d54 5f43 4e45 5f44 005f 5a5f 7453 6334
                0003a40 756f 4074 4c47 4249 5843 5f58 2e33 0034
                0003a50 5f5f 6164 6174 735f 6174 7472 5f00 4e5a
                0003a60 5438 436f 6d6f 6c70 3678 6f43 706d 786c
                0003a70 3243 6445 0064 655f 646e 5f00 625f 7373
                0003a80 735f 6174 7472 5f00 4e5a 7453 6938 736f
                0003a90 625f 7361 3465 6e49 7469 3143 7645 4740
                0003aa0 494c 4342 5858 335f 342e 5f00 675f 7878
                0003ab0 705f 7265 6f73 616e 696c 7974 765f 4030
                0003ac0 5843 4158 4942 315f 332e 5f00 4e5a 5438
                0003ad0 436f 6d6f 6c70 3678 6f43 706d 786c 3143
                0003ae0 6445 0064 6f70 4077 4c47 4249 5f43 2e32
                0003af0 3932 5f00 5449 5f4d 6564 6572 6967 7473
                0003b00 7265 4d54 6c43 6e6f 5465 6261 656c 5f00
                0003b10 6e55 6977 646e 525f 7365 6d75 4065 4347
                0003b20 5f43 2e33 0030 5a5f 384e 6f54 6f43 706d
                0003b30 786c 4336 6d6f 6c70 6d78 4569 3053 005f
                0003b40 5f5f 6d67 6e6f 735f 6174 7472 5f5f 5f00
                0003b50 4e5a 6f53 736c 6445 4740 494c 4342 5858
                0003b60 335f 342e 5f00 5449 5f4d 6572 6967 7473
                0003b70 7265 4d54 6c43 6e6f 5465 6261 656c 5f00
                0003b80 4e5a 7453 6938 736f 625f 7361 3465 6e49
                0003b90 7469 3144 7645 4740 494c 4342 5858 335f
                0003ba0 342e 0000 732e 6d79 6174 0062 732e 7274
                0003bb0 6174 0062 732e 7368 7274 6174 0062 692e
                0003bc0 746e 7265 0070 6e2e 746f 2e65 6e67 2e75
                0003bd0 7270 706f 7265 7974 2e00 6f6e 6574 672e
                0003be0 756e 622e 6975 646c 692d 0064 6e2e 746f
                0003bf0 2e65 4241 2d49 6174 0067 672e 756e 682e
                0003c00 7361 0068 642e 6e79 7973 006d 642e 6e79
                0003c10 7473 0072 672e 756e 762e 7265 6973 6e6f
                0003c20 2e00 6e67 2e75 6576 7372 6f69 5f6e 0072
                0003c30 722e 6c65 2e61 7964 006e 722e 6c65 2e61
                0003c40 6c70 0074 692e 696e 0074 702e 746c 672e
                0003c50 746f 2e00 6c70 2e74 6573 0063 742e 7865
                0003c60 0074 662e 6e69 0069 722e 646f 7461 0061
                0003c70 652e 5f68 7266 6d61 5f65 6468 0072 652e
                0003c80 5f68 7266 6d61 0065 672e 6363 655f 6378
                0003c90 7065 5f74 6174 6c62 0065 692e 696e 5f74
                0003ca0 7261 6172 0079 662e 6e69 5f69 7261 6172
                0003cb0 0079 642e 6e79 6d61 6369 2e00 6164 6174
                0003cc0 2e00 7362 0073 632e 6d6f 656d 746e 0000
                0003cd0 0000 0000 0000 0000 0000 0000 0000 0000
                *
                0003d10 001b 0000 0001 0000 0002 0000 0000 0000
                0003d20 0318 0000 0000 0000 0318 0000 0000 0000
                0003d30 001c 0000 0000 0000 0000 0000 0000 0000
                0003d40 0001 0000 0000 0000 0000 0000 0000 0000
                0003d50 0023 0000 0007 0000 0002 0000 0000 0000
                0003d60 0338 0000 0000 0000 0338 0000 0000 0000
                0003d70 0030 0000 0000 0000 0000 0000 0000 0000
                0003d80 0008 0000 0000 0000 0000 0000 0000 0000
                0003d90 0036 0000 0007 0000 0002 0000 0000 0000
                0003da0 0368 0000 0000 0000 0368 0000 0000 0000
                0003db0 0024 0000 0000 0000 0000 0000 0000 0000
                0003dc0 0004 0000 0000 0000 0000 0000 0000 0000
                0003dd0 0049 0000 0007 0000 0002 0000 0000 0000
                0003de0 038c 0000 0000 0000 038c 0000 0000 0000
                0003df0 0020 0000 0000 0000 0000 0000 0000 0000
                0003e00 0004 0000 0000 0000 0000 0000 0000 0000
                0003e10 0057 0000 fff6 6fff 0002 0000 0000 0000
                0003e20 03b0 0000 0000 0000 03b0 0000 0000 0000
                0003e30 0028 0000 0000 0000 0006 0000 0000 0000
                0003e40 0008 0000 0000 0000 0000 0000 0000 0000
                0003e50 0061 0000 000b 0000 0002 0000 0000 0000
                0003e60 03d8 0000 0000 0000 03d8 0000 0000 0000
                0003e70 01c8 0000 0000 0000 0007 0000 0001 0000
                0003e80 0008 0000 0000 0000 0018 0000 0000 0000
                0003e90 0069 0000 0003 0000 0002 0000 0000 0000
                0003ea0 05a0 0000 0000 0000 05a0 0000 0000 0000
                0003eb0 01f6 0000 0000 0000 0000 0000 0000 0000
                0003ec0 0001 0000 0000 0000 0000 0000 0000 0000
                0003ed0 0071 0000 ffff 6fff 0002 0000 0000 0000
                0003ee0 0796 0000 0000 0000 0796 0000 0000 0000
                0003ef0 0026 0000 0000 0000 0006 0000 0000 0000
                0003f00 0002 0000 0000 0000 0002 0000 0000 0000
                0003f10 007e 0000 fffe 6fff 0002 0000 0000 0000
                0003f20 07c0 0000 0000 0000 07c0 0000 0000 0000
                0003f30 00c0 0000 0000 0000 0007 0000 0004 0000
                0003f40 0008 0000 0000 0000 0000 0000 0000 0000
                0003f50 008d 0000 0004 0000 0002 0000 0000 0000
                0003f60 0880 0000 0000 0000 0880 0000 0000 0000
                0003f70 0138 0000 0000 0000 0006 0000 0000 0000
                0003f80 0008 0000 0000 0000 0018 0000 0000 0000
                0003f90 0097 0000 0004 0000 0042 0000 0000 0000
                0003fa0 09b8 0000 0000 0000 09b8 0000 0000 0000
                0003fb0 00d8 0000 0000 0000 0006 0000 0019 0000
                0003fc0 0008 0000 0000 0000 0018 0000 0000 0000
                0003fd0 00a1 0000 0001 0000 0006 0000 0000 0000
                0003fe0 1000 0000 0000 0000 1000 0000 0000 0000
                0003ff0 001b 0000 0000 0000 0000 0000 0000 0000
                0004000 0004 0000 0000 0000 0000 0000 0000 0000
                0004010 009c 0000 0001 0000 0006 0000 0000 0000
                0004020 1020 0000 0000 0000 1020 0000 0000 0000
                0004030 00a0 0000 0000 0000 0000 0000 0000 0000
                0004040 0010 0000 0000 0000 0010 0000 0000 0000
                0004050 00a7 0000 0001 0000 0006 0000 0000 0000
                0004060 10c0 0000 0000 0000 10c0 0000 0000 0000
                0004070 0010 0000 0000 0000 0000 0000 0000 0000
                0004080 0010 0000 0000 0000 0010 0000 0000 0000
                0004090 00b0 0000 0001 0000 0006 0000 0000 0000
                00040a0 10d0 0000 0000 0000 10d0 0000 0000 0000
                00040b0 0090 0000 0000 0000 0000 0000 0000 0000
                00040c0 0010 0000 0000 0000 0010 0000 0000 0000
                00040d0 00b9 0000 0001 0000 0006 0000 0000 0000
                00040e0 1160 0000 0000 0000 1160 0000 0000 0000
                00040f0 0980 0000 0000 0000 0000 0000 0000 0000
                0004100 0010 0000 0000 0000 0000 0000 0000 0000
                0004110 00bf 0000 0001 0000 0006 0000 0000 0000
                0004120 1ae0 0000 0000 0000 1ae0 0000 0000 0000
                0004130 000d 0000 0000 0000 0000 0000 0000 0000
                0004140 0004 0000 0000 0000 0000 0000 0000 0000
                0004150 00c5 0000 0001 0000 0002 0000 0000 0000
                0004160 2000 0000 0000 0000 2000 0000 0000 0000
                0004170 00a8 0000 0000 0000 0000 0000 0000 0000
                0004180 0010 0000 0000 0000 0000 0000 0000 0000
                0004190 00cd 0000 0001 0000 0002 0000 0000 0000
                00041a0 20a8 0000 0000 0000 20a8 0000 0000 0000
                00041b0 0094 0000 0000 0000 0000 0000 0000 0000
                00041c0 0004 0000 0000 0000 0000 0000 0000 0000
                00041d0 00db 0000 0001 0000 0002 0000 0000 0000
                00041e0 2140 0000 0000 0000 2140 0000 0000 0000
                00041f0 0258 0000 0000 0000 0000 0000 0000 0000
                0004200 0008 0000 0000 0000 0000 0000 0000 0000
                0004210 00e5 0000 0001 0000 0002 0000 0000 0000
                0004220 2398 0000 0000 0000 2398 0000 0000 0000
                0004230 0029 0000 0000 0000 0000 0000 0000 0000
                0004240 0001 0000 0000 0000 0000 0000 0000 0000
                0004250 00f7 0000 000e 0000 0003 0000 0000 0000
                0004260 3d30 0000 0000 0000 2d30 0000 0000 0000
                0004270 0010 0000 0000 0000 0000 0000 0000 0000
                0004280 0008 0000 0000 0000 0008 0000 0000 0000
                0004290 0103 0000 000f 0000 0003 0000 0000 0000
                00042a0 3d40 0000 0000 0000 2d40 0000 0000 0000
                00042b0 0008 0000 0000 0000 0000 0000 0000 0000
                00042c0 0008 0000 0000 0000 0008 0000 0000 0000
                00042d0 010f 0000 0006 0000 0003 0000 0000 0000
                00042e0 3d48 0000 0000 0000 2d48 0000 0000 0000
                00042f0 0220 0000 0000 0000 0007 0000 0000 0000
                0004300 0008 0000 0000 0000 0010 0000 0000 0000
                0004310 00ab 0000 0001 0000 0003 0000 0000 0000
                0004320 3f68 0000 0000 0000 2f68 0000 0000 0000
                0004330 0098 0000 0000 0000 0000 0000 0000 0000
                0004340 0008 0000 0000 0000 0008 0000 0000 0000
                0004350 0118 0000 0001 0000 0003 0000 0000 0000
                0004360 4000 0000 0000 0000 3000 0000 0000 0000
                0004370 0018 0000 0000 0000 0000 0000 0000 0000
                0004380 0008 0000 0000 0000 0000 0000 0000 0000
                0004390 011e 0000 0008 0000 0003 0000 0000 0000
                00043a0 4040 0000 0000 0000 3018 0000 0000 0000
                00043b0 0118 0000 0000 0000 0000 0000 0000 0000
                00043c0 0040 0000 0000 0000 0000 0000 0000 0000
                00043d0 0123 0000 0001 0000 0030 0000 0000 0000
                00043e0 0000 0000 0000 0000 3018 0000 0000 0000
                00043f0 002b 0000 0000 0000 0000 0000 0000 0000
                0004400 0001 0000 0000 0000 0001 0000 0000 0000
                0004410 0001 0000 0002 0000 0000 0000 0000 0000
                0004420 0000 0000 0000 0000 3048 0000 0000 0000
                0004430 0618 0000 0000 0000 001e 0000 0015 0000
                0004440 0008 0000 0000 0000 0018 0000 0000 0000
                0004450 0009 0000 0003 0000 0000 0000 0000 0000
                0004460 0000 0000 0000 0000 3660 0000 0000 0000
                0004470 0543 0000 0000 0000 0000 0000 0000 0000
                0004480 0001 0000 0000 0000 0000 0000 0000 0000
                0004490 0011 0000 0003 0000 0000 0000 0000 0000
                00044a0 0000 0000 0000 0000 3ba3 0000 0000 0000
                00044b0 012c 0000 0000 0000 0000 0000 0000 0000
                00044c0 0001 0000 0000 0000 0000 0000 0000 0000
                00044d0
                zaka@zakaBouj:/mnt/c/Users/zb200/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$
      </details>
    - **`od`**
      ```sh
      zaka@zakaBouj:/mnt/c/Users/zb200/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$ od complx_main
                0000000 042577 043114 000402 000001 000000 000000 000000 000000
                0000020 000003 000076 000001 000000 010540 000000 000000 000000
                0000040 000100 000000 000000 000000 036320 000000 000000 000000
                0000060 000000 000000 000100 000070 000015 000100 000040 000037
                0000100 000006 000000 000004 000000 000100 000000 000000 000000
                0000120 000100 000000 000000 000000 000100 000000 000000 000000
                0000140 001330 000000 000000 000000 001330 000000 000000 000000
                0000160 000010 000000 000000 000000 000003 000000 000004 000000
                0000200 001430 000000 000000 000000 001430 000000 000000 000000
                0000220 001430 000000 000000 000000 000034 000000 000000 000000
                0000240 000034 000000 000000 000000 000001 000000 000000 000000
                0000260 000001 000000 000004 000000 000000 000000 000000 000000
                0000300 000000 000000 000000 000000 000000 000000 000000 000000
                0000320 005220 000000 000000 000000 005220 000000 000000 000000
                0000340 010000 000000 000000 000000 000001 000000 000005 000000
              .
              .
              .
      ```
      <details>
          <summary>Full output of od comp</summary>
          
            zaka@zakaBouj:/mnt/c/Users/zb200/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$ od complx_main
                0000000 042577 043114 000402 000001 000000 000000 000000 000000
                0000020 000003 000076 000001 000000 010540 000000 000000 000000
                0000040 000100 000000 000000 000000 036320 000000 000000 000000
                0000060 000000 000000 000100 000070 000015 000100 000040 000037
                0000100 000006 000000 000004 000000 000100 000000 000000 000000
                0000120 000100 000000 000000 000000 000100 000000 000000 000000
                0000140 001330 000000 000000 000000 001330 000000 000000 000000
                0000160 000010 000000 000000 000000 000003 000000 000004 000000
                0000200 001430 000000 000000 000000 001430 000000 000000 000000
                0000220 001430 000000 000000 000000 000034 000000 000000 000000
                0000240 000034 000000 000000 000000 000001 000000 000000 000000
                0000260 000001 000000 000004 000000 000000 000000 000000 000000
                0000300 000000 000000 000000 000000 000000 000000 000000 000000
                0000320 005220 000000 000000 000000 005220 000000 000000 000000
                0000340 010000 000000 000000 000000 000001 000000 000005 000000
                0000360 010000 000000 000000 000000 010000 000000 000000 000000
                0000400 010000 000000 000000 000000 005355 000000 000000 000000
                0000420 005355 000000 000000 000000 010000 000000 000000 000000
                0000440 000001 000000 000004 000000 020000 000000 000000 000000
                0000460 020000 000000 000000 000000 020000 000000 000000 000000
                0000500 001701 000000 000000 000000 001701 000000 000000 000000
                0000520 010000 000000 000000 000000 000001 000000 000006 000000
                0000540 026460 000000 000000 000000 036460 000000 000000 000000
                0000560 036460 000000 000000 000000 001350 000000 000000 000000
                0000600 002050 000000 000000 000000 010000 000000 000000 000000
                0000620 000002 000000 000006 000000 026510 000000 000000 000000
                0000640 036510 000000 000000 000000 036510 000000 000000 000000
                0000660 001040 000000 000000 000000 001040 000000 000000 000000
                0000700 000010 000000 000000 000000 000004 000000 000004 000000
                0000720 001470 000000 000000 000000 001470 000000 000000 000000
                0000740 001470 000000 000000 000000 000060 000000 000000 000000
                0000760 000060 000000 000000 000000 000010 000000 000000 000000
                0001000 000004 000000 000004 000000 001550 000000 000000 000000
                0001020 001550 000000 000000 000000 001550 000000 000000 000000
                0001040 000104 000000 000000 000000 000104 000000 000000 000000
                0001060 000004 000000 000000 000000 162523 062164 000004 000000
                0001100 001470 000000 000000 000000 001470 000000 000000 000000
                0001120 001470 000000 000000 000000 000060 000000 000000 000000
                0001140 000060 000000 000000 000000 000010 000000 000000 000000
                0001160 162520 062164 000004 000000 020250 000000 000000 000000
                0001200 020250 000000 000000 000000 020250 000000 000000 000000
                0001220 000224 000000 000000 000000 000224 000000 000000 000000
                0001240 000004 000000 000000 000000 162521 062164 000006 000000
                0001260 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0001320 000000 000000 000000 000000 000020 000000 000000 000000
                0001340 162522 062164 000004 000000 026460 000000 000000 000000
                0001360 036460 000000 000000 000000 036460 000000 000000 000000
                0001400 001320 000000 000000 000000 001320 000000 000000 000000
                0001420 000001 000000 000000 000000 066057 061151 032066 066057
                0001440 026544 064554 072556 026570 034170 026466 032066 071456
                0001460 027157 000062 000000 000000 000004 000000 000040 000000
                0001500 000005 000000 047107 000125 000002 140000 000004 000000
                0001520 000003 000000 000000 000000 100002 140000 000004 000000
                0001540 000001 000000 000000 000000 000004 000000 000024 000000
                0001560 000003 000000 047107 000125 132361 072025 061470 102636
                0001600 016444 132627 130601 074713 133030 014467 000004 000000
                0001620 000020 000000 000001 000000 047107 000125 000000 000000
                0001640 000003 000000 000002 000000 000000 000000 000000 000000
                0001660 000002 000000 000021 000000 000001 000000 000006 000000
                0001700 000000 000221 000001 000000 000021 000000 000000 000000
                0001720 062720 066716 114025 041414 000000 000000 000000 000000
                0001740 000000 000000 000000 000000 000000 000000 000000 000000
                0001760 000120 000000 000022 000000 000000 000000 000000 000000
                0002000 000000 000000 000000 000000 000512 000000 000022 000000
                0002020 000000 000000 000000 000000 000000 000000 000000 000000
                0002040 000443 000000 000022 000000 000000 000000 000000 000000
                0002060 000000 000000 000000 000000 000534 000000 000022 000000
                0002100 000000 000000 000000 000000 000000 000000 000000 000000
                0002120 000311 000000 000022 000000 000000 000000 000000 000000
                0002140 000000 000000 000000 000000 000243 000000 000022 000000
                0002160 000000 000000 000000 000000 000000 000000 000000 000000
                0002200 000551 000000 000022 000000 000000 000000 000000 000000
                0002220 000000 000000 000000 000000 000401 000000 000022 000000
                0002240 000000 000000 000000 000000 000000 000000 000000 000000
                0002260 000264 000000 000022 000000 000000 000000 000000 000000
                0002300 000000 000000 000000 000000 000450 000000 000022 000000
                0002320 000000 000000 000000 000000 000000 000000 000000 000000
                0002340 000020 000000 000040 000000 000000 000000 000000 000000
                0002360 000000 000000 000000 000000 000454 000000 000022 000000
                0002400 000000 000000 000000 000000 000000 000000 000000 000000
                0002420 000001 000000 000040 000000 000000 000000 000000 000000
                0002440 000000 000000 000000 000000 000106 000000 000022 000000
                0002460 000000 000000 000000 000000 000000 000000 000000 000000
                0002500 000054 000000 000040 000000 000000 000000 000000 000000
                0002520 000000 000000 000000 000000 000213 000000 000022 000000
                0002540 000000 000000 000000 000000 000000 000000 000000 000000
                0002560 000473 000000 000042 000000 000000 000000 000000 000000
                0002600 000000 000000 000000 000000 000431 000000 000021 000033
                0002620 040100 000000 000000 000000 000420 000000 000000 000000
                0002640 057400 063537 067555 057556 072163 071141 057564 000137
                0002660 044537 046524 062137 071145 063545 071551 062564 052162
                0002700 041515 067554 062556 060524 066142 000145 044537 046524
                0002720 071137 063545 071551 062564 052162 041515 067554 062556
                0002740 060524 066142 000145 055137 051516 066157 042563 000144
                0002760 055137 072123 062464 062156 044554 051543 030564 061461
                0003000 060550 057562 071164 064541 071564 061511 042505 051522
                0003020 030564 061063 071541 061551 067537 072163 062562 066541
                0003040 052111 052137 057460 051505 057466 057400 047132 072123
                0003060 064470 071557 061137 071541 032145 067111 072151 030504
                0003100 073105 057400 047132 067523 071554 050105 051106 067523
                0003120 057523 000105 057537 074147 057570 062560 071562 067157
                0003140 066141 072151 057571 030166 057400 051532 066164 044563
                0003160 072123 030461 064143 071141 072137 060562 072151 044563
                0003200 042543 051105 072123 031461 060542 064563 057543 071557
                0003220 071164 060545 044555 052143 042537 032523 050137 061513
                0003240 057400 047132 072123 064470 071557 061137 071541 032145
                0003260 067111 072151 030503 073105 057400 051532 032164 067543
                0003300 072165 071400 071161 000164 067560 000167 052537 073556
                0003320 067151 057544 062522 072563 062555 057400 061537 060570
                0003340 063137 067151 066141 075151 000145 057537 064554 061542
                0003360 071537 060564 072162 066537 064541 000156 057537 074143
                0003400 057541 072141 074145 072151 057400 071537 060564 065543
                0003420 061537 065550 063137 064541 000154 064554 071542 062164
                0003440 025543 027053 067563 033056 066000 061151 027155 067563
                0003460 033056 066000 061151 061547 057543 027163 067563 030456
                0003500 066000 061151 027143 067563 033056 043400 041503 031537
                0003520 030056 043400 044514 041502 031137 031056 000071 046107
                0003540 041111 057503 027062 027062 000065 054103 040530 044502
                0003560 030537 031456 043400 044514 041502 054130 031537 032056
                0003600 043400 044514 041502 031137 032056 043400 044514 041502
                0003620 031137 031456 000064 000000 000003 000004 000005 000002
                0003640 000003 000003 000006 000003 000007 000010 000001 000011
                0003660 000001 000003 000001 000003 000002 000003 000000 000000
                0003700 000001 000001 000623 000000 000020 000000 000040 000000
                0003720 023120 005571 000000 000011 000653 000000 000000 000000
                0003740 000001 000002 000611 000000 000020 000000 000060 000000
                0003760 110611 003226 000000 000010 000663 000000 000020 000000
                0004000 015165 004551 000000 000005 000676 000000 000000 000000
                0004020 000001 000002 000572 000000 000020 000000 000060 000000
                0004040 127723 002553 000000 000007 000712 000000 000020 000000
                0004060 024564 004222 000000 000003 000725 000000 000000 000000
                0004100 000001 000003 000641 000000 000020 000000 000000 000000
                0004120 064424 006551 000000 000006 000741 000000 000020 000000
                0004140 110664 003226 000000 000004 000753 000000 000020 000000
                0004160 015165 004551 000000 000002 000676 000000 000000 000000
                0004200 036460 000000 000000 000000 000010 000000 000000 000000
                0004220 011100 000000 000000 000000 036470 000000 000000 000000
                0004240 000010 000000 000000 000000 013670 000000 000000 000000
                0004260 036500 000000 000000 000000 000010 000000 000000 000000
                0004300 011000 000000 000000 000000 040010 000000 000000 000000
                0004320 000010 000000 000000 000000 040010 000000 000000 000000
                0004340 037710 000000 000000 000000 000006 000000 000021 000000
                0004360 000000 000000 000000 000000 037720 000000 000000 000000
                0004400 000006 000000 000001 000000 000000 000000 000000 000000
                0004420 037730 000000 000000 000000 000006 000000 000002 000000
                0004440 000000 000000 000000 000000 037740 000000 000000 000000
                0004460 000006 000000 000013 000000 000000 000000 000000 000000
                0004500 037750 000000 000000 000000 000006 000000 000015 000000
                0004520 000000 000000 000000 000000 037760 000000 000000 000000
                0004540 000006 000000 000017 000000 000000 000000 000000 000000
                0004560 037770 000000 000000 000000 000006 000000 000020 000000
                0004600 000000 000000 000000 000000 040020 000000 000000 000000
                0004620 000001 000000 000011 000000 000000 000000 000000 000000
                0004640 040100 000000 000000 000000 000005 000000 000022 000000
                0004660 000000 000000 000000 000000 037600 000000 000000 000000
                0004700 000007 000000 000003 000000 000000 000000 000000 000000
                0004720 037610 000000 000000 000000 000007 000000 000004 000000
                0004740 000000 000000 000000 000000 037620 000000 000000 000000
                0004760 000007 000000 000005 000000 000000 000000 000000 000000
                0005000 037630 000000 000000 000000 000007 000000 000006 000000
                0005020 000000 000000 000000 000000 037640 000000 000000 000000
                0005040 000007 000000 000007 000000 000000 000000 000000 000000
                0005060 037650 000000 000000 000000 000007 000000 000010 000000
                0005100 000000 000000 000000 000000 037660 000000 000000 000000
                0005120 000007 000000 000012 000000 000000 000000 000000 000000
                0005140 037670 000000 000000 000000 000007 000000 000014 000000
                0005160 000000 000000 000000 000000 037700 000000 000000 000000
                0005200 000007 000000 000016 000000 000000 000000 000000 000000
                0005220 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0010000 007763 175036 101510 004354 105510 154405 000057 044000
                0010020 140205 001164 150377 101510 004304 000303 000000 000000
                0010040 032777 027512 000000 177762 045445 000057 007400 000037
                0010060 007763 175036 000150 000000 171000 160751 177777 110377
                0010100 007763 175036 000550 000000 171000 150751 177777 110377
                0010120 007763 175036 001150 000000 171000 140751 177777 110377
                0010140 007763 175036 001550 000000 171000 130751 177777 110377
                0010160 007763 175036 002150 000000 171000 120751 177777 110377
                0010200 007763 175036 002550 000000 171000 110751 177777 110377
                0010220 007763 175036 003150 000000 171000 100751 177777 110377
                0010240 007763 175036 003550 000000 171000 070751 177777 110377
                0010260 007763 175036 004150 000000 171000 060751 177777 110377
                0010300 007763 175036 177762 176445 000056 007400 042037 000000
                0010320 007763 175036 177762 122445 000056 007400 042037 000000
                0010340 007763 175036 177762 116445 000056 007400 042037 000000
                0010360 007763 175036 177762 112445 000056 007400 042037 000000
                0010400 007763 175036 177762 106445 000056 007400 042037 000000
                0010420 007763 175036 177762 102445 000056 007400 042037 000000
                0010440 007763 175036 177762 076445 000056 007400 042037 000000
                0010460 007763 175036 177762 072445 000056 007400 042037 000000
                0010500 007763 175036 177762 066445 000056 007400 042037 000000
                0010520 007763 175036 177762 062445 000056 007400 042037 000000
                0010540 007763 175036 166461 104511 057321 104510 044342 162203
                0010560 050360 042524 140061 144461 106510 145075 000000 177400
                0010600 051425 000056 172000 027146 017417 000204 000000 000000
                0010620 106510 100475 000056 044000 002615 027172 000000 034510
                0010640 072370 044025 002613 027066 000000 102510 072300 177411
                0010660 007740 100037 000000 000000 007703 100037 000000 000000
                0010700 106510 050475 000056 044000 032615 027112 000000 024510
                0010720 044376 170211 140510 037756 140510 001770 000510 044306
                0010740 177321 012164 105510 002405 000056 044000 140205 004164
                0010760 160377 007546 042037 000000 007703 100037 000000 000000
                0011000 007763 175036 036600 027505 000000 072400 052453 101510
                0011020 131075 000055 000000 104510 072345 044014 036613 026746
                0011040 000000 114750 177776 164377 177544 177777 002706 027435
                0011060 000000 056401 007703 000037 007703 100037 000000 000000
                0011100 007763 175036 073751 177777 171777 017017 052772 104510
                0011120 051745 100510 114354 000000 104400 066275 177777 044377
                0011140 132611 177540 177777 044144 002213 024045 000000 044000
                0011160 042611 030750 171300 010017 015405 000016 044000 012613
                0011200 007024 000000 106510 100105 007546 144050 044146 067017
                0011220 044302 143611 034750 000005 171000 010017 177405 000015
                0011240 044000 012613 006750 000000 106510 110105 007546 144050
                0011260 044146 067017 044302 143611 012750 000005 044000 052615
                0011300 044220 042615 044320 153211 104510 164307 002564 000000
                0011320 106510 120105 106510 150125 106510 100115 104510 044316
                0011340 143611 152750 000005 044000 042615 044320 143611 011750
                0011360 000005 044000 002615 006447 000000 104510 044306 002615
                0011400 026474 000000 104510 164307 176744 177777 104510 044303
                0011420 042615 044240 143611 057750 000005 063000 007510 140176
                0011440 044146 067017 044300 157611 021750 177776 044377 141211
                0011460 106510 171005 000014 044000 143211 104510 164327 176656
                0011500 177777 104510 044303 042615 044240 143611 044750 000005
                0011520 063000 007510 140176 044146 067017 044300 157611 166750
                0011540 177775 044377 141211 106510 140005 000014 044000 143211
                0011560 104510 164327 176570 177777 105510 050425 000054 044000
                0011600 153211 104510 164307 176566 177777 106510 110125 106510
                0011620 150105 104510 044326 143611 123750 000004 044000 042615
                0011640 044260 052615 044320 046615 044200 147211 104510 164307
                0011660 002556 000000 106510 150105 104510 164307 002106 000000
                0011700 106510 064005 000014 044000 143211 106510 067405 000054
                0011720 044000 143611 013750 177775 044377 141611 106510 130105
                0011740 104510 164307 002222 000000 044146 077017 063300 007510
                0011760 140156 104510 164337 176526 177777 104510 044302 002615
                0012000 006045 000000 104510 044306 153611 160750 177774 044377
                0012020 141611 106510 130105 104510 164307 002174 000000 044146
                0012040 077017 063300 007510 140156 104510 164337 176440 177777
                0012060 104510 044302 002615 005763 000000 104510 044306 153611
                0012100 125750 177774 044377 012613 025604 000000 104510 044326
                0012120 143611 124750 177774 044377 052615 044220 042615 044320
                0012140 153211 104510 164307 001732 000000 106510 140105 106510
                0012160 150125 106510 100115 104510 044316 143611 003750 000005
                0012200 044000 042615 044320 143611 074750 000003 044000 002615
                0012220 005643 000000 104510 044306 002615 025642 000000 104510
                0012240 164307 176112 177777 104510 044303 042615 044300 143611
                0012260 142750 000003 063000 007510 140176 044146 067017 044300
                0012300 157611 104750 177774 044377 141211 106510 054005 000013
                0012320 044000 143211 104510 164327 176024 177777 104510 044303
                0012340 042615 044300 143611 127750 000003 063000 007510 140176
                0012360 044146 067017 044300 157611 051750 177774 044377 141211
                0012400 106510 023005 000013 044000 143211 104510 164327 175736
                0012420 177777 105510 133425 000052 044000 153211 104510 164307
                0012440 175734 177777 106510 150105 106510 100125 104510 044326
                0012460 143611 164750 000004 044000 002615 005401 000000 104510
                0012500 044306 002615 025370 000000 104510 164307 175640 177777
                0012520 104510 044303 042615 044320 143611 015750 000003 063000
                0012540 007510 140176 044146 067017 044300 157611 157750 177773
                0012560 044377 141211 106510 127005 000012 044000 143211 104510
                0012600 164327 175552 177777 104510 044303 042615 044320 143611
                0012620 002750 000003 063000 007510 140176 044146 067017 044300
                0012640 157611 124750 177773 044377 141211 106510 076005 000012
                0012660 044000 143211 104510 164327 175464 177777 105510 006425
                0012700 000052 044000 153211 104510 164307 175462 177777 106510
                0012720 100105 104510 164307 002222 000000 044146 077017 044300
                0012740 102611 177560 177777 106510 061405 000012 044000 143211
                0012760 106510 044405 000052 044000 143611 170750 177772 044377
                0013000 141211 105510 070205 177777 063377 007510 140156 104510
                0013020 164327 175472 177777 105510 131425 000051 044000 153211
                0013040 104510 164307 175330 177777 106510 110105 104510 164307
                0013060 002070 000000 044146 077017 044300 102611 177570 177777
                0013100 106510 015005 000012 044000 143211 106510 167405 000051
                0013120 044000 143611 113750 177772 044377 141211 105510 074205
                0013140 177777 063377 007510 140156 104510 164327 175340 177777
                0013160 105510 054425 000051 044000 153211 104510 164307 175176
                0013200 177777 000273 000000 044000 042615 044320 143611 071750
                0013220 000001 044000 042615 044300 143611 063750 000001 044000
                0013240 042615 044260 143611 055750 000001 044000 042615 044240
                0013260 143611 047750 000001 044000 042615 044220 143611 041750
                0013300 000001 044000 042615 044200 143611 033750 000001 104400
                0013320 044330 052613 062350 025510 022424 000050 000000 076164
                0013340 072753 007763 175036 104510 044303 042615 044320 143611
                0013360 010750 000001 165400 171407 017017 044372 141611 106510
                0013400 140105 104510 164307 000374 000000 003753 007763 175036
                0013420 104510 044303 042615 044260 143611 163750 000000 165400
                0013440 171407 017017 044372 141611 106510 120105 104510 164307
                0013460 000322 000000 106510 110105 104510 164307 000306 000000
                0013500 106510 100105 104510 164307 000272 000000 104510 044330
                0013520 143611 164750 177771 164377 174664 177777 105510 174135
                0013540 141711 007763 175036 044125 162611 101510 010354 076611
                0013560 104774 174165 076603 000774 035565 076601 177770 000377
                0013600 072400 044062 002615 024707 000000 104510 164307 174616
                0013620 177777 106510 067405 000050 044000 141211 106510 127005
                0013640 000051 044000 143211 105510 045405 000050 044000 143611
                0013660 025750 177771 110377 141711 007763 175036 044125 162611
                0013700 177676 000377 137400 000001 000000 111750 177777 056777
                0013720 110303 007763 175036 044125 162611 104510 174175 007762
                0013740 042421 171360 010417 164115 105510 174105 007762 042420
                0013760 171360 010417 044000 042613 171370 010017 164105 007762
                0014000 040021 110010 141535 007763 175036 044125 162611 101510
                0014020 010354 104510 174175 106510 171405 000007 044000 143211
                0014040 106510 014405 000050 044000 143611 140750 177770 044377
                0014060 012613 023632 000000 104510 044326 143611 137750 177770
                0014100 110377 141711 007763 175036 044125 162611 104510 174175
                0014120 104510 170165 105510 170105 007762 000020 105510 174105
                0014140 007762 000021 105510 170105 007762 040020 044010 042613
                0014160 171370 010417 004100 056620 110303 007763 175036 044125
                0014200 162611 104510 174175 105510 174105 007762 000020 044146
                0014220 077017 063300 007510 140156 141535 007763 175036 044125
                0014240 162611 104510 174175 105510 174105 007762 040020 063010
                0014260 007510 140176 044146 067017 056700 110303 007763 175036
                0014300 044125 162611 101510 020354 104510 174175 104510 170165
                0014320 104510 164125 105510 170105 007762 044020 044010 042613
                0014340 171350 010017 004100 007546 150450 007762 150130 105510
                0014360 170105 007762 004020 105510 164105 007762 000020 007762
                0014400 144130 044146 077017 044312 042613 063370 024017 063312
                0014420 007510 141156 104510 164307 177266 177777 105510 174105
                0014440 141711 007763 175036 044125 162611 101510 020354 104510
                0014460 174175 104510 170165 104510 164125 105510 170105 007762
                0014500 040020 044010 042613 171350 010017 004110 007546 150050
                0014520 007762 150534 105510 170105 007762 000020 105510 164105
                0014540 007762 004020 007762 140534 044146 077017 044302 042613
                0014560 063370 024017 063312 007510 141156 104510 164307 177120
                0014600 177777 105510 174105 141711 007763 175036 044125 162611
                0014620 101510 020354 104510 174175 104510 170165 104510 164125
                0014640 105510 170105 007762 004020 105510 164105 007762 040020
                0014660 171010 054417 044310 042613 171360 010017 004120 105510
                0014700 164105 007762 000020 007762 141131 007546 154450 007762
                0014720 154130 105510 170105 007762 004020 105510 164105 007762
                0014740 000020 007762 140531 105510 170105 007762 050020 044010
                0014760 042613 171350 010017 004110 007762 145131 007762 140534
                0015000 044146 077017 044302 042613 063370 024017 063313 007510
                0015020 141156 104510 164307 176670 177777 105510 174105 141711
                0015040 007763 175036 044125 162611 101510 010354 104510 174175
                0015060 104510 170165 105510 170105 007762 040020 171410 077017
                0015100 035415 000006 063000 053417 044301 042613 044360 010213
                0015120 105510 174105 007546 144050 044146 067017 044302 143611
                0015140 066750 177775 044377 042613 144770 110303 007763 175036
                0015160 044125 162611 101510 010354 104510 174175 105510 174105
                0015200 105510 171000 010017 002405 000006 063000 024017 063310
                0015220 007510 140156 113750 177766 171377 010417 170105 105510
                0015240 174105 105510 004100 007762 002420 002742 000000 007546
                0015260 144050 044146 067017 164300 173164 177777 007546 150050
                0015300 007762 052530 063360 007510 150176 044146 067017 164300
                0015320 172774 177777 044146 077017 063300 007510 140156 141711
                0015340 007763 175036 101510 004354 101510 004304 000303 000000
                0015360 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0020000 000001 000002 000000 000000 000000 000000 000000 000000
                0020020 061117 062552 072153 055040 071145 072163 062557 072162
                0020040 060400 025440 061040 020072 020000 020053 064400 060400
                0020060 026440 061040 020072 060400 025040 061040 020072 061400
                0020100 067157 072552 060547 062564 067440 020146 035141 000040
                0020120 060555 067147 072151 062165 020145 063157 060440 020072
                0020140 066400 063541 064556 072564 062544 067440 020146 035142
                0020160 000040 000000 000000 000000 000000 000000 000000 000000
                0020200 000000 000000 000000 100000 000000 000000 000000 000000
                0020220 000000 000000 000000 040000 000000 000000 000000 037760
                0020240 000000 000000 000000 040010 015401 035403 000224 000000
                0020260 000021 000000 167570 177777 000310 000000 170030 177777
                0020300 000360 000000 170050 177777 000410 000000 170270 177777
                0020320 000260 000000 170641 177777 001204 000000 173272 177777
                0020340 001254 000000 173420 177777 001314 000000 173452 177777
                0020360 000440 000000 173536 177777 000540 000000 173634 177777
                0020400 000604 000000 173722 177777 000644 000000 173762 177777
                0020420 000704 000000 174024 177777 000744 000000 174172 177777
                0020440 001004 000000 174340 177777 001044 000000 174570 177777
                0020460 001104 000000 174704 177777 001144 000000 000000 000000
                0020500 000024 000000 000000 000000 075001 000122 074001 000420
                0020520 006033 004007 000620 000000 000024 000000 000034 000000
                0020540 170000 177777 000046 000000 042000 010007 000000 000000
                0020560 000044 000000 000064 000000 167250 177777 000240 000000
                0020600 007000 043020 014016 007512 073413 100010 037400 035032
                0020620 031452 021044 000000 000000 000024 000000 000134 000000
                0020640 167440 177777 000020 000000 000000 000000 000000 000000
                0020660 000024 000000 000164 000000 167430 177777 000220 000000
                0020700 000000 000000 000000 000000 000034 000000 000214 000000
                0020720 173002 177777 000064 000000 042400 010016 001206 006503
                0020740 065406 003414 000010 000000 000034 000000 000000 000000
                0020760 075001 046120 000122 074001 003420 012633 000036 015400
                0021000 006033 004007 000620 000000 000040 000000 000044 000000
                0021020 172766 177777 000076 000000 077404 000001 042400 010016
                0021040 001206 006503 072406 003414 000010 000000 000034 000000
                0021060 000360 000000 173020 177777 000065 000000 042400 010016
                0021100 001206 006503 066006 003414 000010 000000 000034 000000
                0021120 000420 000000 173046 177777 000040 000000 042400 010016
                0021140 001206 006503 053406 003414 000010 000000 000034 000000
                0021160 000460 000000 173046 177777 000041 000000 042400 010016
                0021200 001206 006503 054006 003414 000010 000000 000034 000000
                0021220 000520 000000 173050 177777 000146 000000 042400 010016
                0021240 001206 006503 001006 006135 004007 000000 000034 000000
                0021260 000560 000000 173156 177777 000146 000000 042400 010016
                0021300 001206 006503 001006 006135 004007 000000 000034 000000
                0021320 000620 000000 173264 177777 000230 000000 042400 010016
                0021340 001206 006503 001006 006217 004007 000000 000034 000000
                0021360 000660 000000 173454 177777 000113 000000 042400 010016
                0021400 001206 006503 001006 006102 004007 000000 000034 000000
                0021420 000720 000000 173530 177777 000164 000000 042400 010016
                0021440 001206 006503 001006 006153 004007 000000 000044 000000
                0021460 000510 000000 167425 177777 002431 000000 057404 000000
                0021500 042400 010016 001206 006503 044006 001603 004003 006005
                0021520 004007 000000 000034 000000 001030 000000 172006 177777
                0021540 000126 000000 042400 010016 001206 006503 001006 006115
                0021560 004007 000000 000034 000000 001070 000000 172074 177777
                0021600 000031 000000 042400 010016 001206 006503 050006 003414
                0021620 000010 000000 000000 000000 177777 000001 177777 020401
                0021640 000676 000603 004730 105400 101403 141401 000011 002330
                0021660 000603 004656 101000 133406 114402 000011 005211 000005
                0021700 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0026460 011100 000000 000000 000000 013670 000000 000000 000000
                0026500 011000 000000 000000 000000 000001 000000 000000 000000
                0026520 000572 000000 000000 000000 000001 000000 000000 000000
                0026540 000611 000000 000000 000000 000001 000000 000000 000000
                0026560 000623 000000 000000 000000 000001 000000 000000 000000
                0026600 000641 000000 000000 000000 000014 000000 000000 000000
                0026620 010000 000000 000000 000000 000015 000000 000000 000000
                0026640 015340 000000 000000 000000 000031 000000 000000 000000
                0026660 036460 000000 000000 000000 000033 000000 000000 000000
                0026700 000020 000000 000000 000000 000032 000000 000000 000000
                0026720 036500 000000 000000 000000 000034 000000 000000 000000
                0026740 000010 000000 000000 000000 177365 067777 000000 000000
                0026760 001660 000000 000000 000000 000005 000000 000000 000000
                0027000 002640 000000 000000 000000 000006 000000 000000 000000
                0027020 001730 000000 000000 000000 000012 000000 000000 000000
                0027040 000766 000000 000000 000000 000013 000000 000000 000000
                0027060 000030 000000 000000 000000 000025 000000 000000 000000
                0027100 000000 000000 000000 000000 000003 000000 000000 000000
                0027120 037550 000000 000000 000000 000002 000000 000000 000000
                0027140 000330 000000 000000 000000 000024 000000 000000 000000
                0027160 000007 000000 000000 000000 000027 000000 000000 000000
                0027200 004670 000000 000000 000000 000007 000000 000000 000000
                0027220 004200 000000 000000 000000 000010 000000 000000 000000
                0027240 000470 000000 000000 000000 000011 000000 000000 000000
                0027260 000030 000000 000000 000000 000036 000000 000000 000000
                0027300 000010 000000 000000 000000 177773 067777 000000 000000
                0027320 000001 004000 000000 000000 177776 067777 000000 000000
                0027340 003700 000000 000000 000000 177777 067777 000000 000000
                0027360 000004 000000 000000 000000 177760 067777 000000 000000
                0027400 003626 000000 000000 000000 177771 067777 000000 000000
                0027420 000004 000000 000000 000000 000000 000000 000000 000000
                0027440 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0027540 000000 000000 000000 000000 036510 000000 000000 000000
                0027560 000000 000000 000000 000000 000000 000000 000000 000000
                0027600 010060 000000 000000 000000 010100 000000 000000 000000
                0027620 010120 000000 000000 000000 010140 000000 000000 000000
                0027640 010160 000000 000000 000000 010200 000000 000000 000000
                0027660 010220 000000 000000 000000 010240 000000 000000 000000
                0027700 010260 000000 000000 000000 000000 000000 000000 000000
                0027720 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0030000 000000 000000 000000 000000 040010 000000 000000 000000
                0030020 000000 000000 000000 000000 041507 035103 024040 061125
                0030040 067165 072564 030440 027061 027064 026460 072461 072542
                0030060 072156 030565 031176 027062 032060 020051 030461 032056
                0030100 030056 000000 000000 000000 000000 000000 000000 000000
                0030120 000000 000000 000000 000000 000000 000000 000000 000000
                0030140 000001 000000 000004 177761 000000 000000 000000 000000
                0030160 000000 000000 000000 000000 000011 000000 000001 000004
                0030200 001614 000000 000000 000000 000040 000000 000000 000000
                0030220 000023 000000 000004 177761 000000 000000 000000 000000
                0030240 000000 000000 000000 000000 000036 000000 000002 000020
                0030260 010620 000000 000000 000000 000000 000000 000000 000000
                0030300 000040 000000 000002 000020 010700 000000 000000 000000
                0030320 000000 000000 000000 000000 000063 000000 000002 000020
                0030340 011000 000000 000000 000000 000000 000000 000000 000000
                0030360 000111 000000 000001 000033 040520 000000 000000 000000
                0030400 000001 000000 000000 000000 000125 000000 000001 000027
                0030420 036500 000000 000000 000000 000000 000000 000000 000000
                0030440 000174 000000 000002 000020 011100 000000 000000 000000
                0030460 000000 000000 000000 000000 000210 000000 000001 000026
                0030500 036460 000000 000000 000000 000000 000000 000000 000000
                0030520 000247 000000 000004 177761 000000 000000 000000 000000
                0030540 000000 000000 000000 000000 000267 000000 000001 000033
                0030560 040521 000000 000000 000000 000001 000000 000000 000000
                0030600 000306 000000 000002 000020 013542 000000 000000 000000
                0030620 000126 000000 000000 000000 000366 000000 000002 000020
                0030640 013670 000000 000000 000000 000031 000000 000000 000000
                0030660 000023 000000 000004 177761 000000 000000 000000 000000
                0030700 000000 000000 000000 000000 000412 000000 000001 000024
                0030720 021624 000000 000000 000000 000000 000000 000000 000000
                0030740 000000 000000 000004 177761 000000 000000 000000 000000
                0030760 000000 000000 000000 000000 000430 000000 000000 000023
                0031000 020250 000000 000000 000000 000000 000000 000000 000000
                0031020 000453 000000 000001 000030 036510 000000 000000 000000
                0031040 000000 000000 000000 000000 000464 000000 000001 000031
                0031060 037550 000000 000000 000000 000000 000000 000000 000000
                0031100 000512 000000 000042 000020 014006 000000 000000 000000
                0031120 000076 000000 000000 000000 000542 000000 000020 000032
                0031140 040030 000000 000000 000000 000000 000000 000000 000000
                0031160 000551 000000 000042 000020 015040 000000 000000 000000
                0031200 000113 000000 000000 000000 001762 000000 000040 000032
                0031220 040000 000000 000000 000000 000000 000000 000000 000000
                0031240 000602 000000 000042 000020 014610 000000 000000 000000
                0031260 000230 000000 000000 000000 000634 000000 000021 000022
                0031300 020000 000000 000000 000000 000004 000000 000000 000000
                0031320 000653 000000 000042 000000 000000 000000 000000 000000
                0031340 000000 000000 000000 000000 000405 000000 000022 000020
                0031360 011111 000000 000000 000000 002431 000000 000000 000000
                0031400 000706 000000 000022 000000 000000 000000 000000 000000
                0031420 000000 000000 000000 000000 001015 000000 001021 000032
                0031440 040010 000000 000000 000000 000000 000000 000000 000000
                0031460 001032 000000 000042 000020 015154 000000 000000 000000
                0031500 000164 000000 000000 000000 001073 000000 000042 000020
                0031520 014104 000000 000000 000000 000065 000000 000000 000000
                0031540 001127 000000 001041 000032 040020 000000 000000 000000
                0031560 000010 000000 000000 000000 001163 000000 001022 000021
                0031600 015340 000000 000000 000000 000000 000000 000000 000000
                0031620 001171 000000 000022 000000 000000 000000 000000 000000
                0031640 000000 000000 000000 000000 001226 000000 000022 000000
                0031660 000000 000000 000000 000000 000000 000000 000000 000000
                0031700 001247 000000 000042 000020 014006 000000 000000 000000
                0031720 000076 000000 000000 000000 001277 000000 000042 000020
                0031740 014172 000000 000000 000000 000040 000000 000000 000000
                0031760 001336 000000 000042 000020 014274 000000 000000 000000
                0032000 000146 000000 000000 000000 001370 000000 000022 000000
                0032020 000000 000000 000000 000000 000000 000000 000000 000000
                0032040 001421 000000 000042 000020 014104 000000 000000 000000
                0032060 000065 000000 000000 000000 001766 000000 000022 000020
                0032100 010540 000000 000000 000000 000046 000000 000000 000000
                0032120 001455 000000 000022 000000 000000 000000 000000 000000
                0032140 000000 000000 000000 000000 001561 000000 000042 000020
                0032160 014232 000000 000000 000000 000041 000000 000000 000000
                0032200 001620 000000 000022 000000 000000 000000 000000 000000
                0032220 000000 000000 000000 000000 001655 000000 000022 000000
                0032240 000000 000000 000000 000000 000000 000000 000000 000000
                0032260 001710 000000 001022 000014 010000 000000 000000 000000
                0032300 000000 000000 000000 000000 001716 000000 001021 000032
                0032320 040030 000000 000000 000000 000000 000000 000000 000000
                0032340 001732 000000 000021 000033 040100 000000 000000 000000
                0032360 000420 000000 000000 000000 001760 000000 000020 000032
                0032400 040000 000000 000000 000000 000000 000000 000000 000000
                0032420 001775 000000 000042 000020 013722 000000 000000 000000
                0032440 000064 000000 000000 000000 002026 000000 000020 000033
                0032460 040530 000000 000000 000000 000000 000000 000000 000000
                0032500 002033 000000 000020 000033 040030 000000 000000 000000
                0032520 000000 000000 000000 000000 002047 000000 000022 000000
                0032540 000000 000000 000000 000000 000000 000000 000000 000000
                0032560 002113 000000 000022 000000 000000 000000 000000 000000
                0032600 000000 000000 000000 000000 002153 000000 000042 000020
                0032620 013722 000000 000000 000000 000064 000000 000000 000000
                0032640 002204 000000 000022 000000 000000 000000 000000 000000
                0032660 000000 000000 000000 000000 002223 000000 000040 000000
                0032700 000000 000000 000000 000000 000000 000000 000000 000000
                0032720 002257 000000 000022 000000 000000 000000 000000 000000
                0032740 000000 000000 000000 000000 002306 000000 000042 000020
                0032760 014442 000000 000000 000000 000146 000000 000000 000000
                0033000 002340 000000 000040 000000 000000 000000 000000 000000
                0033020 000000 000000 000000 000000 002357 000000 000022 000000
                0033040 000000 000000 000000 000000 000000 000000 000000 000000
                0033060 002405 000000 000040 000000 000000 000000 000000 000000
                0033100 000000 000000 000000 000000 002437 000000 000022 000000
                0033120 000000 000000 000000 000000 000000 000000 000000 000000
                0033140 051400 071143 030564 067456 057400 060537 064542 072137
                0033160 063541 061400 072162 072163 063165 027146 000143 062544
                0033200 062562 064547 072163 071145 072137 057555 066143 067157
                0033220 071545 057400 062137 057557 066147 061157 066141 062137
                0033240 067564 071562 060537 074165 061400 066557 066160 072145
                0033260 062145 030056 057400 062137 057557 066147 061157 066141
                0033300 062137 067564 071562 060537 074165 063137 067151 057551
                0033320 071141 060562 057571 067145 071164 000171 071146 066541
                0033340 057545 072544 066555 000171 057537 071146 066541 057545
                0033360 072544 066555 057571 067151 072151 060537 071162 074541
                0033400 062537 072156 074562 061400 066557 066160 057570 060555
                0033420 067151 061456 070160 057400 051532 046164 057470 064537
                0033440 064557 064556 000164 055137 030464 057537 072163 072141
                0033460 061551 064537 064556 064564 066141 075151 072141 067551
                0033500 057556 067141 057544 062544 072163 072562 072143 067551
                0033520 057556 064460 000151 043537 047514 040502 057514 071537
                0033540 061165 044537 066537 064541 000156 057537 051106 046501
                0033560 057505 047105 057504 000137 057537 047107 057525 044105
                0033600 043137 040522 042515 044137 051104 057400 054504 040516
                0033620 044515 000103 043537 047514 040502 057514 043117 051506
                0033640 052105 052137 041101 042514 000137 055137 034116 067524
                0033660 067503 070155 074154 041466 066557 066160 042170 042461
                0033700 000166 062537 060544 060564 057400 047132 034113 067524
                0033720 067503 070155 074154 041466 066557 066160 061570 042557
                0033740 000166 055137 034116 067524 067503 070155 074154 041466
                0033760 066557 066160 066570 042554 030123 000137 044537 057517
                0034000 072163 064544 057556 071565 062145 057400 061537 060570
                0034020 063137 067151 066141 075151 040145 046107 041111 057503
                0034040 027062 027062 000065 055137 072123 062464 062156 044554
                0034060 051543 030564 061461 060550 057562 071164 064541 071564
                0034100 061511 042505 051522 030564 061063 071541 061551 067537
                0034120 072163 062562 066541 052111 052137 057460 051505 057466
                0034140 043500 044514 041502 054130 031537 032056 057400 062137
                0034160 067563 064137 067141 066144 000145 055137 045516 052070
                0034200 041557 066557 066160 033170 067503 070155 074154 066471
                0034220 063541 064556 072564 062544 073105 057400 047132 052070
                0034240 041557 066557 066160 033170 067503 070155 074154 031103
                0034260 051105 051513 057460 042000 027127 062562 027146 057537
                0034300 074147 057570 062560 071562 067157 066141 072151 057571
                0034320 030166 057400 064546 064556 057400 066137 061151 057543
                0034340 072163 071141 057564 060555 067151 043500 044514 041502
                0034360 031137 031456 000064 070563 072162 043500 044514 041502
                0034400 031137 031056 032456 057400 047132 052070 041557 066557
                0034420 066160 033170 067503 070155 074154 031104 073105 057400
                0034440 047132 034113 067524 067503 070155 074154 041466 066557
                0034460 066160 033570 062547 051164 060545 042554 000166 055137
                0034500 034116 067524 067503 070155 074154 041466 066557 066160
                0034520 070170 042554 030123 000137 057537 074143 057541 072141
                0034540 074145 072151 043500 044514 041502 031137 031056 032456
                0034560 057400 047132 052070 041557 066557 066160 033170 067503
                0034600 070155 074154 030503 051105 051513 057460 057400 051532
                0034620 066164 044563 072123 030461 064143 071141 072137 060562
                0034640 072151 044563 042543 051105 072123 031461 060542 064563
                0034660 057543 071557 071164 060545 044555 052143 042537 032523
                0034700 050137 061513 043500 044514 041502 054130 031537 032056
                0034720 057400 047132 034113 067524 067503 070155 074154 041466
                0034740 066557 066160 033570 062547 044564 060555 042547 000166
                0034760 055137 051516 066157 042563 043120 051522 051557 042537
                0035000 043500 044514 041502 054130 031537 032056 057400 071537
                0035020 060564 065543 061537 065550 063137 064541 040154 046107
                0035040 041111 057503 027062 000064 064537 064556 000164 057537
                0035060 046524 057503 047105 057504 000137 055137 072123 061464
                0035100 072557 040164 046107 041111 054103 057530 027063 000064
                0035120 057537 060544 060564 071537 060564 072162 057400 047132
                0035140 052070 041557 066557 066160 033170 067503 070155 074154
                0035160 031103 062105 000144 062537 062156 057400 061137 071563
                0035200 071537 060564 072162 057400 047132 072123 064470 071557
                0035220 061137 071541 032145 067111 072151 030503 073105 043500
                0035240 044514 041502 054130 031537 032056 057400 063537 074170
                0035260 070137 071145 067563 060556 064554 074564 073137 040060
                0035300 054103 040530 044502 030537 031456 057400 047132 052070
                0035320 041557 066557 066160 033170 067503 070155 074154 030503
                0035340 062105 000144 067560 040167 046107 041111 057503 027062
                0035360 034462 057400 052111 057515 062544 062562 064547 072163
                0035400 071145 046524 066103 067157 052145 061141 062554 057400
                0035420 067125 064567 062156 051137 071545 066565 040145 041507
                0035440 057503 027063 000060 055137 034116 067524 067503 070155
                0035460 074154 041466 066557 066160 066570 042551 030123 000137
                0035500 057537 066547 067157 071537 060564 072162 057537 057400
                0035520 047132 067523 071554 062105 043500 044514 041502 054130
                0035540 031537 032056 057400 052111 057515 062562 064547 072163
                0035560 071145 046524 066103 067157 052145 061141 062554 057400
                0035600 047132 072123 064470 071557 061137 071541 032145 067111
                0035620 072151 030504 073105 043500 044514 041502 054130 031537
                0035640 032056 000000 071456 066571 060564 000142 071456 071164
                0035660 060564 000142 071456 071550 071164 060564 000142 064456
                0035700 072156 071145 000160 067056 072157 027145 067147 027165
                0035720 071160 070157 071145 074564 027000 067556 062564 063456
                0035740 072556 061056 064565 062154 064455 000144 067056 072157
                0035760 027145 041101 026511 060564 000147 063456 072556 064056
                0036000 071541 000150 062056 067171 074563 000155 062056 067171
                0036020 072163 000162 063456 072556 073056 071145 064563 067157
                0036040 027000 067147 027165 062566 071562 067551 057556 000162
                0036060 071056 066145 027141 074544 000156 071056 066145 027141
                0036100 066160 000164 064456 064556 000164 070056 072154 063456
                0036120 072157 027000 066160 027164 062563 000143 072056 074145
                0036140 000164 063056 067151 000151 071056 062157 072141 000141
                0036160 062456 057550 071146 066541 057545 062150 000162 062456
                0036200 057550 071146 066541 000145 063456 061543 062537 061570
                0036220 070145 057564 060564 066142 000145 064456 064556 057564
                0036240 071141 060562 000171 063056 067151 057551 071141 060562
                0036260 000171 062056 067171 066541 061551 027000 060544 060564
                0036300 027000 071542 000163 061456 066557 062555 072156 000000
                0036320 000000 000000 000000 000000 000000 000000 000000 000000
                *
                0036420 000033 000000 000001 000000 000002 000000 000000 000000
                0036440 001430 000000 000000 000000 001430 000000 000000 000000
                0036460 000034 000000 000000 000000 000000 000000 000000 000000
                0036500 000001 000000 000000 000000 000000 000000 000000 000000
                0036520 000043 000000 000007 000000 000002 000000 000000 000000
                0036540 001470 000000 000000 000000 001470 000000 000000 000000
                0036560 000060 000000 000000 000000 000000 000000 000000 000000
                0036600 000010 000000 000000 000000 000000 000000 000000 000000
                0036620 000066 000000 000007 000000 000002 000000 000000 000000
                0036640 001550 000000 000000 000000 001550 000000 000000 000000
                0036660 000044 000000 000000 000000 000000 000000 000000 000000
                0036700 000004 000000 000000 000000 000000 000000 000000 000000
                0036720 000111 000000 000007 000000 000002 000000 000000 000000
                0036740 001614 000000 000000 000000 001614 000000 000000 000000
                0036760 000040 000000 000000 000000 000000 000000 000000 000000
                0037000 000004 000000 000000 000000 000000 000000 000000 000000
                0037020 000127 000000 177766 067777 000002 000000 000000 000000
                0037040 001660 000000 000000 000000 001660 000000 000000 000000
                0037060 000050 000000 000000 000000 000006 000000 000000 000000
                0037100 000010 000000 000000 000000 000000 000000 000000 000000
                0037120 000141 000000 000013 000000 000002 000000 000000 000000
                0037140 001730 000000 000000 000000 001730 000000 000000 000000
                0037160 000710 000000 000000 000000 000007 000000 000001 000000
                0037200 000010 000000 000000 000000 000030 000000 000000 000000
                0037220 000151 000000 000003 000000 000002 000000 000000 000000
                0037240 002640 000000 000000 000000 002640 000000 000000 000000
                0037260 000766 000000 000000 000000 000000 000000 000000 000000
                0037300 000001 000000 000000 000000 000000 000000 000000 000000
                0037320 000161 000000 177777 067777 000002 000000 000000 000000
                0037340 003626 000000 000000 000000 003626 000000 000000 000000
                0037360 000046 000000 000000 000000 000006 000000 000000 000000
                0037400 000002 000000 000000 000000 000002 000000 000000 000000
                0037420 000176 000000 177776 067777 000002 000000 000000 000000
                0037440 003700 000000 000000 000000 003700 000000 000000 000000
                0037460 000300 000000 000000 000000 000007 000000 000004 000000
                0037500 000010 000000 000000 000000 000000 000000 000000 000000
                0037520 000215 000000 000004 000000 000002 000000 000000 000000
                0037540 004200 000000 000000 000000 004200 000000 000000 000000
                0037560 000470 000000 000000 000000 000006 000000 000000 000000
                0037600 000010 000000 000000 000000 000030 000000 000000 000000
                0037620 000227 000000 000004 000000 000102 000000 000000 000000
                0037640 004670 000000 000000 000000 004670 000000 000000 000000
                0037660 000330 000000 000000 000000 000006 000000 000031 000000
                0037700 000010 000000 000000 000000 000030 000000 000000 000000
                0037720 000241 000000 000001 000000 000006 000000 000000 000000
                0037740 010000 000000 000000 000000 010000 000000 000000 000000
                0037760 000033 000000 000000 000000 000000 000000 000000 000000
                0040000 000004 000000 000000 000000 000000 000000 000000 000000
                0040020 000234 000000 000001 000000 000006 000000 000000 000000
                0040040 010040 000000 000000 000000 010040 000000 000000 000000
                0040060 000240 000000 000000 000000 000000 000000 000000 000000
                0040100 000020 000000 000000 000000 000020 000000 000000 000000
                0040120 000247 000000 000001 000000 000006 000000 000000 000000
                0040140 010300 000000 000000 000000 010300 000000 000000 000000
                0040160 000020 000000 000000 000000 000000 000000 000000 000000
                0040200 000020 000000 000000 000000 000020 000000 000000 000000
                0040220 000260 000000 000001 000000 000006 000000 000000 000000
                0040240 010320 000000 000000 000000 010320 000000 000000 000000
                0040260 000220 000000 000000 000000 000000 000000 000000 000000
                0040300 000020 000000 000000 000000 000020 000000 000000 000000
                0040320 000271 000000 000001 000000 000006 000000 000000 000000
                0040340 010540 000000 000000 000000 010540 000000 000000 000000
                0040360 004600 000000 000000 000000 000000 000000 000000 000000
                0040400 000020 000000 000000 000000 000000 000000 000000 000000
                0040420 000277 000000 000001 000000 000006 000000 000000 000000
                0040440 015340 000000 000000 000000 015340 000000 000000 000000
                0040460 000015 000000 000000 000000 000000 000000 000000 000000
                0040500 000004 000000 000000 000000 000000 000000 000000 000000
                0040520 000305 000000 000001 000000 000002 000000 000000 000000
                0040540 020000 000000 000000 000000 020000 000000 000000 000000
                0040560 000250 000000 000000 000000 000000 000000 000000 000000
                0040600 000020 000000 000000 000000 000000 000000 000000 000000
                0040620 000315 000000 000001 000000 000002 000000 000000 000000
                0040640 020250 000000 000000 000000 020250 000000 000000 000000
                0040660 000224 000000 000000 000000 000000 000000 000000 000000
                0040700 000004 000000 000000 000000 000000 000000 000000 000000
                0040720 000333 000000 000001 000000 000002 000000 000000 000000
                0040740 020500 000000 000000 000000 020500 000000 000000 000000
                0040760 001130 000000 000000 000000 000000 000000 000000 000000
                0041000 000010 000000 000000 000000 000000 000000 000000 000000
                0041020 000345 000000 000001 000000 000002 000000 000000 000000
                0041040 021630 000000 000000 000000 021630 000000 000000 000000
                0041060 000051 000000 000000 000000 000000 000000 000000 000000
                0041100 000001 000000 000000 000000 000000 000000 000000 000000
                0041120 000367 000000 000016 000000 000003 000000 000000 000000
                0041140 036460 000000 000000 000000 026460 000000 000000 000000
                0041160 000020 000000 000000 000000 000000 000000 000000 000000
                0041200 000010 000000 000000 000000 000010 000000 000000 000000
                0041220 000403 000000 000017 000000 000003 000000 000000 000000
                0041240 036500 000000 000000 000000 026500 000000 000000 000000
                0041260 000010 000000 000000 000000 000000 000000 000000 000000
                0041300 000010 000000 000000 000000 000010 000000 000000 000000
                0041320 000417 000000 000006 000000 000003 000000 000000 000000
                0041340 036510 000000 000000 000000 026510 000000 000000 000000
                0041360 001040 000000 000000 000000 000007 000000 000000 000000
                0041400 000010 000000 000000 000000 000020 000000 000000 000000
                0041420 000253 000000 000001 000000 000003 000000 000000 000000
                0041440 037550 000000 000000 000000 027550 000000 000000 000000
                0041460 000230 000000 000000 000000 000000 000000 000000 000000
                0041500 000010 000000 000000 000000 000010 000000 000000 000000
                0041520 000430 000000 000001 000000 000003 000000 000000 000000
                0041540 040000 000000 000000 000000 030000 000000 000000 000000
                0041560 000030 000000 000000 000000 000000 000000 000000 000000
                0041600 000010 000000 000000 000000 000000 000000 000000 000000
                0041620 000436 000000 000010 000000 000003 000000 000000 000000
                0041640 040100 000000 000000 000000 030030 000000 000000 000000
                0041660 000430 000000 000000 000000 000000 000000 000000 000000
                0041700 000100 000000 000000 000000 000000 000000 000000 000000
                0041720 000443 000000 000001 000000 000060 000000 000000 000000
                0041740 000000 000000 000000 000000 030030 000000 000000 000000
                0041760 000053 000000 000000 000000 000000 000000 000000 000000
                0042000 000001 000000 000000 000000 000001 000000 000000 000000
                0042020 000001 000000 000002 000000 000000 000000 000000 000000
                0042040 000000 000000 000000 000000 030110 000000 000000 000000
                0042060 003030 000000 000000 000000 000036 000000 000025 000000
                0042100 000010 000000 000000 000000 000030 000000 000000 000000
                0042120 000011 000000 000003 000000 000000 000000 000000 000000
                0042140 000000 000000 000000 000000 033140 000000 000000 000000
                0042160 002503 000000 000000 000000 000000 000000 000000 000000
                0042200 000001 000000 000000 000000 000000 000000 000000 000000
                0042220 000021 000000 000003 000000 000000 000000 000000 000000
                0042240 000000 000000 000000 000000 035643 000000 000000 000000
                0042260 000454 000000 000000 000000 000000 000000 000000 000000
                0042300 000001 000000 000000 000000 000000 000000 000000 000000
                0042320
                zaka@zakaBouj:/mnt/c/Users/zb200/Documents/GitHub/Cpp_SoSe24_Hoffman/zaka/worksheet06/task2$
      </details>

## Command `nm`
This command reads the symbol table from the ELF file. Compare the results in the generated data without and with the `-s` option in the compiler.
- **Answer:**

## Command `ldd`
This command shows which library functions the executable file uses or intends to use.
- **Answer:**
