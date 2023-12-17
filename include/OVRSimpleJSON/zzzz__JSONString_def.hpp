#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONString)
namespace OVRSimpleJSON {
struct __JSONNode__Enumerator;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace System {
class Object;
}
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONString;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONString);
// Type: OVRSimpleJSON::JSONString
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8210))
// CS Name: ::OVRSimpleJSON::JSONString*
class CORDL_TYPE JSONString : public ::OVRSimpleJSON::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::OVRSimpleJSON::JSONNode)]{};

/// @brief Field m_Data offset 0x10
 __declspec(property(get=__get_m_Data, put=__set_m_Data)) ::StringW  m_Data;

 __declspec(property(get=get_Tag)) ::OVRSimpleJSON::JSONNodeType  Tag;

 __declspec(property(get=get_IsString)) bool  IsString;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

constexpr void __set_m_Data(::StringW  value) ;

constexpr ::StringW& __get_m_Data() ;

constexpr ::StringW const& __get_m_Data() const;

/// @brief Method get_Tag addr 0x27cdb00 size 0x8 virtual true final false
inline ::OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_IsString addr 0x27cdb08 size 0x8 virtual true final false
inline bool get_IsString() ;

/// @brief Method GetEnumerator addr 0x27cdb10 size 0x14 virtual true final false
inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x27cdb24 size 0x8 virtual true final false
inline ::StringW get_Value() ;

/// @brief Method set_Value addr 0x27cdb2c size 0x8 virtual true final false
inline void set_Value(::StringW  value) ;

static inline ::OVRSimpleJSON::JSONString* New_ctor(::StringW  aData) ;

/// @brief Method .ctor addr 0x27c83e8 size 0x28 virtual false final false
inline void _ctor(::StringW  aData) ;

/// @brief Method WriteToStringBuilder addr 0x27cdb34 size 0x5c virtual true final false
inline void WriteToStringBuilder(::System::Text::StringBuilder*  aSB, int32_t  aIndent, int32_t  aIndentInc, ::OVRSimpleJSON::JSONTextMode  aMode) ;

/// @brief Method Equals addr 0x27cdb90 size 0xec virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x27cdc7c size 0x20 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "JSONString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONString(JSONString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONString(JSONString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JSONString()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONString, 0x18>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONString);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONString*, "OVRSimpleJSON", "JSONString");
