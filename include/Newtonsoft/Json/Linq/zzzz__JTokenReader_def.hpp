#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenReader)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JTokenReader);
// Type: Newtonsoft.Json.Linq::JTokenReader
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11994))
// CS Name: ::Newtonsoft.Json.Linq::JTokenReader*
class CORDL_TYPE JTokenReader : public ::Newtonsoft::Json::JsonReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::Newtonsoft::Json::JsonReader)]{};

/// @brief Field _root offset 0x78
 __declspec(property(get=__get__root, put=__set__root)) ::Newtonsoft::Json::Linq::JToken*  _root;

/// @brief Field _initialPath offset 0x80
 __declspec(property(get=__get__initialPath, put=__set__initialPath)) ::StringW  _initialPath;

/// @brief Field _parent offset 0x88
 __declspec(property(get=__get__parent, put=__set__parent)) ::Newtonsoft::Json::Linq::JToken*  _parent;

/// @brief Field _current offset 0x90
 __declspec(property(get=__get__current, put=__set__current)) ::Newtonsoft::Json::Linq::JToken*  _current;

 __declspec(property(get=get_CurrentToken)) ::Newtonsoft::Json::Linq::JToken*  CurrentToken;

 __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t  Newtonsoft_Json_IJsonLineInfo_LineNumber;

 __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t  Newtonsoft_Json_IJsonLineInfo_LinePosition;

 __declspec(property(get=get_Path)) ::StringW  Path;

/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr operator  ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

constexpr void __set__root(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr ::Newtonsoft::Json::Linq::JToken* __get__root() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> __get__root() const;

constexpr void __set__initialPath(::StringW  value) ;

constexpr ::StringW& __get__initialPath() ;

constexpr ::StringW const& __get__initialPath() const;

constexpr void __set__parent(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr ::Newtonsoft::Json::Linq::JToken* __get__parent() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> __get__parent() const;

constexpr void __set__current(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr ::Newtonsoft::Json::Linq::JToken* __get__current() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> __get__current() const;

/// @brief Method get_CurrentToken addr 0x269bc48 size 0x8 virtual false final false
inline ::Newtonsoft::Json::Linq::JToken* get_CurrentToken() ;

static inline ::Newtonsoft::Json::Linq::JTokenReader* New_ctor(::Newtonsoft::Json::Linq::JToken*  token) ;

/// @brief Method .ctor addr 0x269bc50 size 0x6c virtual false final false
inline void _ctor(::Newtonsoft::Json::Linq::JToken*  token) ;

static inline ::Newtonsoft::Json::Linq::JTokenReader* New_ctor(::Newtonsoft::Json::Linq::JToken*  token, ::StringW  initialPath) ;

/// @brief Method .ctor addr 0x269bcbc size 0x24 virtual false final false
inline void _ctor(::Newtonsoft::Json::Linq::JToken*  token, ::StringW  initialPath) ;

/// @brief Method Read addr 0x269bce0 size 0xc4 virtual true final false
inline bool Read() ;

/// @brief Method ReadOver addr 0x269be0c size 0xb4 virtual false final false
inline bool ReadOver(::Newtonsoft::Json::Linq::JToken*  t) ;

/// @brief Method ReadToEnd addr 0x269c3a4 size 0x20 virtual false final false
inline bool ReadToEnd() ;

/// @brief Method GetEndToken addr 0x269c448 size 0x150 virtual false final false
inline ::System::Nullable_1<::Newtonsoft::Json::JsonToken> GetEndToken(::Newtonsoft::Json::Linq::JContainer*  c) ;

/// @brief Method ReadInto addr 0x269bda4 size 0x68 virtual false final false
inline bool ReadInto(::Newtonsoft::Json::Linq::JContainer*  c) ;

/// @brief Method SetEnd addr 0x269c3c4 size 0x84 virtual false final false
inline bool SetEnd(::Newtonsoft::Json::Linq::JContainer*  c) ;

/// @brief Method SetToken addr 0x269bec0 size 0x4e4 virtual false final false
inline void SetToken(::Newtonsoft::Json::Linq::JToken*  token) ;

/// @brief Method SafeToString addr 0x269c598 size 0x20 virtual false final false
inline ::StringW SafeToString(::System::Object*  value) ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo addr 0x269c5b8 size 0xb4 virtual true final true
inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber addr 0x269c66c size 0xb8 virtual true final true
inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition addr 0x269c724 size 0xb8 virtual true final true
inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition() ;

/// @brief Method get_Path addr 0x269c7dc size 0xe4 virtual true final false
inline ::StringW get_Path() ;

// Ctor Parameters [CppParam { name: "", ty: "JTokenReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JTokenReader(JTokenReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JTokenReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JTokenReader(JTokenReader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JTokenReader()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JTokenReader, 0x98>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenReader*, "Newtonsoft.Json.Linq", "JTokenReader");
