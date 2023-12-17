#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(RegexConverter)
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System {
class Type;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class RegexConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::RegexConverter);
// Type: Newtonsoft.Json.Converters::RegexConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12040))
// CS Name: ::Newtonsoft.Json.Converters::RegexConverter*
class CORDL_TYPE RegexConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::Newtonsoft::Json::JsonConverter)]{};

/// @brief Field PatternName offset 0x0
static constexpr ::ConstString  PatternName{u"Pattern"};

/// @brief Field OptionsName offset 0x0
static constexpr ::ConstString  OptionsName{u"Options"};

/// @brief Method WriteJson addr 0x26b6358 size 0xf8 virtual true final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method HasFlag addr 0x26b6744 size 0xc virtual false final false
inline bool HasFlag(::System::Text::RegularExpressions::RegexOptions  options, ::System::Text::RegularExpressions::RegexOptions  flag) ;

/// @brief Method WriteBson addr 0x26b6450 size 0x138 virtual false final false
inline void WriteBson(::Newtonsoft::Json::Bson::BsonWriter*  writer, ::System::Text::RegularExpressions::Regex*  regex) ;

/// @brief Method WriteJson addr 0x26b6588 size 0x1bc virtual false final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Text::RegularExpressions::Regex*  regex, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadJson addr 0x26b6750 size 0xa4 virtual true final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadRegexString addr 0x26b6a78 size 0x180 virtual false final false
inline ::System::Object* ReadRegexString(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method ReadRegexObject addr 0x26b67f4 size 0x284 virtual false final false
inline ::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method CanConvert addr 0x26b6bf8 size 0x84 virtual true final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::Newtonsoft::Json::Converters::RegexConverter* New_ctor() ;

/// @brief Method .ctor addr 0x26b6c7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexConverter(RegexConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexConverter(RegexConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RegexConverter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::RegexConverter, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::RegexConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::RegexConverter*, "Newtonsoft.Json.Converters", "RegexConverter");
