mruby-bin-sqlite
================

This contains sqlite itself in mruby-bin-sqlite.

### To build:

Prerequisites:

    * mruby
    * libc

    activate GEMs in *build_config.rb*
    * conf.gem :git => 'https://github.com/monami-ya.mrb/mruby-bin-sqlite.git', :branch => 'master'
    ruby ./minirake

### To run the tests:

    ruby ./minirake test


## License

    Public Domain
