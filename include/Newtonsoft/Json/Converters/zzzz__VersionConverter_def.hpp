#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(VersionConverter)
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class VersionConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::VersionConverter);
// Type: Newtonsoft.Json.Converters::VersionConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12045))
// CS Name: ::Newtonsoft.Json.Converters::VersionConverter*
class CORDL_TYPE VersionConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::Newtonsoft::Json::JsonConverter)]{};

/// @brief Method WriteJson addr 0x26b85b4 size 0xec virtual true final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadJson addr 0x26b86a0 size 0x28c virtual true final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method CanConvert addr 0x26b892c size 0x84 virtual true final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::Newtonsoft::Json::Converters::VersionConverter* New_ctor() ;

/// @brief Method .ctor addr 0x26b89b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VersionConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionConverter(VersionConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionConverter(VersionConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VersionConverter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::VersionConverter, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::VersionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::VersionConverter*, "Newtonsoft.Json.Converters", "VersionConverter");
