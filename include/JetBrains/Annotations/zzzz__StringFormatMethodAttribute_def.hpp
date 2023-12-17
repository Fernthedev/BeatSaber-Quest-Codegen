#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringFormatMethodAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class StringFormatMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::StringFormatMethodAttribute);
// Type: JetBrains.Annotations::StringFormatMethodAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15740))
// CS Name: ::JetBrains.Annotations::StringFormatMethodAttribute*
class CORDL_TYPE StringFormatMethodAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <FormatParameterName>k__BackingField offset 0x10
 __declspec(property(get=__get__FormatParameterName_k__BackingField, put=__set__FormatParameterName_k__BackingField)) ::StringW  _FormatParameterName_k__BackingField;

 __declspec(property(get=get_FormatParameterName, put=set_FormatParameterName)) ::StringW  FormatParameterName;

constexpr void __set__FormatParameterName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__FormatParameterName_k__BackingField() ;

constexpr ::StringW const& __get__FormatParameterName_k__BackingField() const;

static inline ::JetBrains::Annotations::StringFormatMethodAttribute* New_ctor(::StringW  formatParameterName) ;

/// @brief Method .ctor addr 0x2eb9f70 size 0x28 virtual false final false
inline void _ctor(::StringW  formatParameterName) ;

/// @brief Method get_FormatParameterName addr 0x2eb9f98 size 0x8 virtual false final false
inline ::StringW get_FormatParameterName() ;

/// @brief Method set_FormatParameterName addr 0x2eb9fa0 size 0x8 virtual false final false
inline void set_FormatParameterName(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "StringFormatMethodAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringFormatMethodAttribute(StringFormatMethodAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringFormatMethodAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringFormatMethodAttribute(StringFormatMethodAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StringFormatMethodAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::StringFormatMethodAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::StringFormatMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::StringFormatMethodAttribute*, "JetBrains.Annotations", "StringFormatMethodAttribute");
