#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IsoDateTimeConverter)
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IsoDateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IsoDateTimeConverter);
// Type: Newtonsoft.Json.Converters::IsoDateTimeConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12046))
// CS Name: ::Newtonsoft.Json.Converters::IsoDateTimeConverter*
class CORDL_TYPE IsoDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Newtonsoft::Json::Converters::DateTimeConverterBase)]{};

/// @brief Field DefaultDateTimeFormat offset 0x0
static constexpr ::ConstString  DefaultDateTimeFormat{u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK"};

/// @brief Field _dateTimeStyles offset 0x10
 __declspec(property(get=__get__dateTimeStyles, put=__set__dateTimeStyles)) ::System::Globalization::DateTimeStyles  _dateTimeStyles;

/// @brief Field _dateTimeFormat offset 0x18
 __declspec(property(get=__get__dateTimeFormat, put=__set__dateTimeFormat)) ::StringW  _dateTimeFormat;

/// @brief Field _culture offset 0x20
 __declspec(property(get=__get__culture, put=__set__culture)) ::System::Globalization::CultureInfo*  _culture;

 __declspec(property(get=get_DateTimeStyles, put=set_DateTimeStyles)) ::System::Globalization::DateTimeStyles  DateTimeStyles;

 __declspec(property(get=get_DateTimeFormat, put=set_DateTimeFormat)) ::StringW  DateTimeFormat;

 __declspec(property(get=get_Culture, put=set_Culture)) ::System::Globalization::CultureInfo*  Culture;

constexpr void __set__dateTimeStyles(::System::Globalization::DateTimeStyles  value) ;

constexpr ::System::Globalization::DateTimeStyles& __get__dateTimeStyles() ;

constexpr ::System::Globalization::DateTimeStyles const& __get__dateTimeStyles() const;

constexpr void __set__dateTimeFormat(::StringW  value) ;

constexpr ::StringW& __get__dateTimeFormat() ;

constexpr ::StringW const& __get__dateTimeFormat() const;

constexpr void __set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr ::System::Globalization::CultureInfo* __get__culture() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> __get__culture() const;

/// @brief Method get_DateTimeStyles addr 0x26b89b8 size 0x8 virtual false final false
inline ::System::Globalization::DateTimeStyles get_DateTimeStyles() ;

/// @brief Method set_DateTimeStyles addr 0x26b89c0 size 0x8 virtual false final false
inline void set_DateTimeStyles(::System::Globalization::DateTimeStyles  value) ;

/// @brief Method get_DateTimeFormat addr 0x26b89c8 size 0x54 virtual false final false
inline ::StringW get_DateTimeFormat() ;

/// @brief Method set_DateTimeFormat addr 0x26b8a1c size 0x20 virtual false final false
inline void set_DateTimeFormat(::StringW  value) ;

/// @brief Method get_Culture addr 0x26b8a3c size 0x68 virtual false final false
inline ::System::Globalization::CultureInfo* get_Culture() ;

/// @brief Method set_Culture addr 0x26b8aa4 size 0x8 virtual false final false
inline void set_Culture(::System::Globalization::CultureInfo*  value) ;

/// @brief Method WriteJson addr 0x26b8aac size 0x220 virtual true final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadJson addr 0x26b8ccc size 0x4c0 virtual true final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

static inline ::Newtonsoft::Json::Converters::IsoDateTimeConverter* New_ctor() ;

/// @brief Method .ctor addr 0x26b918c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IsoDateTimeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IsoDateTimeConverter(IsoDateTimeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IsoDateTimeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IsoDateTimeConverter(IsoDateTimeConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IsoDateTimeConverter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::IsoDateTimeConverter, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IsoDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IsoDateTimeConverter*, "Newtonsoft.Json.Converters", "IsoDateTimeConverter");
