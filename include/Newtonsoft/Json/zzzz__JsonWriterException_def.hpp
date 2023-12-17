#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonWriterException)
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonWriterException;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonWriterException);
// Type: Newtonsoft.Json::JsonWriterException
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11828))
// CS Name: ::Newtonsoft.Json::JsonWriterException*
class CORDL_TYPE JsonWriterException : public ::Newtonsoft::Json::JsonException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::Newtonsoft::Json::JsonException)]{};

/// @brief Field <Path>k__BackingField offset 0x90
 __declspec(property(get=__get__Path_k__BackingField, put=__set__Path_k__BackingField)) ::StringW  _Path_k__BackingField;

 __declspec(property(get=get_Path, put=set_Path)) ::StringW  Path;

constexpr void __set__Path_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Path_k__BackingField() ;

constexpr ::StringW const& __get__Path_k__BackingField() const;

/// @brief Method get_Path addr 0x264a1a4 size 0x8 virtual false final false
inline ::StringW get_Path() ;

/// @brief Method set_Path addr 0x264a1ac size 0x8 virtual false final false
inline void set_Path(::StringW  value) ;

static inline ::Newtonsoft::Json::JsonWriterException* New_ctor() ;

/// @brief Method .ctor addr 0x264a1b4 size 0x4 virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x264a1b8 size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x264a1bc size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x264a1c0 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::StringW  message, ::System::Exception*  innerException, ::StringW  path) ;

/// @brief Method .ctor addr 0x264a1c4 size 0x24 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException, ::StringW  path) ;

/// @brief Method Create addr 0x2648884 size 0x34 virtual false final false
static inline ::Newtonsoft::Json::JsonWriterException* Create(::Newtonsoft::Json::JsonWriter*  writer, ::StringW  message, ::System::Exception*  ex) ;

/// @brief Method Create addr 0x264a1e8 size 0xb4 virtual false final false
static inline ::Newtonsoft::Json::JsonWriterException* Create(::StringW  path, ::StringW  message, ::System::Exception*  ex) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriterException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonWriterException(JsonWriterException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriterException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonWriterException(JsonWriterException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonWriterException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonWriterException, 0x98>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonWriterException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonWriterException*, "Newtonsoft.Json", "JsonWriterException");
