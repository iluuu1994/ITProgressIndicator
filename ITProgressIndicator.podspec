Pod::Spec.new do |s|
  s.name         = "ITProgressIndicator"
  s.version      = "0.1"
  s.summary      = "A replacement class for NSProgressIndicator driven by Core Animation."
  s.homepage     = "https://github.com/iluuu1994/ITProgressIndicator"
  s.social_media_url = "https://twitter.com/ilijatovilo"

  s.license      = 'Apache'
  s.author       = { "Ilija Tovilo" => "support@ilijatovilo.ch" }

  s.platform     = :osx
  s.source       = { :git => "https://github.com/iluuu1994/ITProgressIndicator.git", :tag => "0.1" }
  s.source_files = 'ITProgressIndicator/Classes/*.{h,m}'
  s.requires_arc = true
end
