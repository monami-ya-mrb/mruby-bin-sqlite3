MRuby::Gem::Specification.new('mruby-bin-sqlite3') do |spec|
  spec.license = 'Public Domain'
  spec.authors = 'www.sqlite.org'
  spec.summary = 'sqlite3 library and binary'
  spec.bins = %w(sqlite3)
end
