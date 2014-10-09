MRuby::Gem::Specification.new('mruby-simplexnoise') do |spec|
  spec.license = 'MIT'
  spec.authors = 'IceDragon200'
  spec.version = '1.0.0'
  spec.summary = 'SimplexNoise'
  spec.description = 'SimplexNoise1234 mruby bindings'
  spec.homepage = 'https://github.com/IceDragon200/mruby-simplexnoise'

  spec.cc.include_paths << ["#{build.root}/src"]
end
