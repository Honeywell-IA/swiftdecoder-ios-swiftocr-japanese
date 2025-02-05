Pod::Spec.new do |spec|
  spec.name               = "OCRJapanese"
  spec.version            = "6.2.3"
  spec.platform = :ios, '13.0'
  spec.ios.deployment_target = '13.0'
  spec.summary            = "OCRJapanese"
  spec.description        = "Honeywell OCRJapanese Scanning SDK"
  spec.homepage           = "https://www.honeywell.com/us/en"
  spec.documentation_url  = "https://www.honeywell.com/us/en"
  spec.author             = { "Honeywell" => "SwiftDecoder-Team" }
  spec.source            = { 
	:git => "https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr-japanese",
      	:tag => "6.2.3" 
}
spec.vendored_frameworks = 'Lib/OCRJapanese.xcframework'
end