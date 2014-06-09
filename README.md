mruby-bin-sqlite3
=================

This contains sqlite itself in mruby-bin-sqlite3.

### To build:

Prerequisites:

    * mruby
    * libc

    activate GEMs in *build_config.rb*
    * conf.gem :github => 'monami-ya-mrb/mruby-bin-sqlite3.git', :branch => 'master'
    ruby ./minirake

Suggests:

    * monami-ya-mrb/mruby-sqlite3 gem

    activate GEMs in *build_config.rb* if you want to access DB on mruby script.
    * conf.gem :github => 'monami-ya-mrb/mruby-sqlite3.git', :branch => 'master'

### To run the tests:

    ruby ./minirake test


## License

    Public Domain
