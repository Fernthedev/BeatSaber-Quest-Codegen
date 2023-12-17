#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RazorPageBaseTypeAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorPageBaseTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorPageBaseTypeAttribute);
// Type: JetBrains.Annotations::RazorPageBaseTypeAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15804))
// CS Name: ::JetBrains.Annotations::RazorPageBaseTypeAttribute*
class CORDL_TYPE RazorPageBaseTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <BaseType>k__BackingField offset 0x10
 __declspec(property(get=__get__BaseType_k__BackingField, put=__set__BaseType_k__BackingField)) ::StringW  _BaseType_k__BackingField;

/// @brief Field <PageName>k__BackingField offset 0x18
 __declspec(property(get=__get__PageName_k__BackingField, put=__set__PageName_k__BackingField)) ::StringW  _PageName_k__BackingField;

 __declspec(property(get=get_BaseType, put=set_BaseType)) ::StringW  BaseType;

 __declspec(property(get=get_PageName, put=set_PageName)) ::StringW  PageName;

constexpr void __set__BaseType_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__BaseType_k__BackingField() ;

constexpr ::StringW const& __get__BaseType_k__BackingField() const;

constexpr void __set__PageName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__PageName_k__BackingField() ;

constexpr ::StringW const& __get__PageName_k__BackingField() const;

static inline ::JetBrains::Annotations::RazorPageBaseTypeAttribute* New_ctor(::StringW  baseType) ;

/// @brief Method .ctor addr 0x2eba924 size 0x28 virtual false final false
inline void _ctor(::StringW  baseType) ;

static inline ::JetBrains::Annotations::RazorPageBaseTypeAttribute* New_ctor(::StringW  baseType, ::StringW  pageName) ;

/// @brief Method .ctor addr 0x2eba94c size 0x2c virtual false final false
inline void _ctor(::StringW  baseType, ::StringW  pageName) ;

/// @brief Method get_BaseType addr 0x2eba978 size 0x8 virtual false final false
inline ::StringW get_BaseType() ;

/// @brief Method set_BaseType addr 0x2eba980 size 0x8 virtual false final false
inline void set_BaseType(::StringW  value) ;

/// @brief Method get_PageName addr 0x2eba988 size 0x8 virtual false final false
inline ::StringW get_PageName() ;

/// @brief Method set_PageName addr 0x2eba990 size 0x8 virtual false final false
inline void set_PageName(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "RazorPageBaseTypeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RazorPageBaseTypeAttribute(RazorPageBaseTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RazorPageBaseTypeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RazorPageBaseTypeAttribute(RazorPageBaseTypeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RazorPageBaseTypeAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorPageBaseTypeAttribute, 0x20>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorPageBaseTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorPageBaseTypeAttribute*, "JetBrains.Annotations", "RazorPageBaseTypeAttribute");
