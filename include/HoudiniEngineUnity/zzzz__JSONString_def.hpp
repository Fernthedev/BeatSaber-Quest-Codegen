#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONString)
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONString;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONString);
// Type: HoudiniEngineUnity::JSONString
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9875))
// CS Name: ::HoudiniEngineUnity::JSONString*
class CORDL_TYPE JSONString : public ::HoudiniEngineUnity::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::HoudiniEngineUnity::JSONNode)]{};

/// @brief Field m_Data offset 0x10
 __declspec(property(get=__get_m_Data, put=__set_m_Data)) ::StringW  m_Data;

 __declspec(property(get=get_Tag)) ::HoudiniEngineUnity::JSONNodeType  Tag;

 __declspec(property(get=get_IsString)) bool  IsString;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

constexpr void __set_m_Data(::StringW  value) ;

constexpr ::StringW& __get_m_Data() ;

constexpr ::StringW const& __get_m_Data() const;

/// @brief Method get_Tag addr 0x21da854 size 0x8 virtual true final false
inline ::HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_IsString addr 0x21da85c size 0x8 virtual true final false
inline bool get_IsString() ;

/// @brief Method GetEnumerator addr 0x21da864 size 0x14 virtual true final false
inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x21da878 size 0x8 virtual true final false
inline ::StringW get_Value() ;

/// @brief Method set_Value addr 0x21da880 size 0x8 virtual true final false
inline void set_Value(::StringW  value) ;

static inline ::HoudiniEngineUnity::JSONString* New_ctor(::StringW  aData) ;

/// @brief Method .ctor addr 0x21d4958 size 0x28 virtual false final false
inline void _ctor(::StringW  aData) ;

/// @brief Method WriteToStringBuilder addr 0x21da888 size 0x5c virtual true final false
inline void WriteToStringBuilder(::System::Text::StringBuilder*  aSB, int32_t  aIndent, int32_t  aIndentInc, ::HoudiniEngineUnity::JSONTextMode  aMode) ;

/// @brief Method Equals addr 0x21da8e4 size 0xec virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x21da9d0 size 0x20 virtual true final false
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONString, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONString);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONString*, "HoudiniEngineUnity", "JSONString");
