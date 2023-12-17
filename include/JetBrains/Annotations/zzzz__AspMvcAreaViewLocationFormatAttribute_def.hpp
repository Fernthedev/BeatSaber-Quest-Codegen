#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcAreaViewLocationFormatAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcAreaViewLocationFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute);
// Type: JetBrains.Annotations::AspMvcAreaViewLocationFormatAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15762))
// CS Name: ::JetBrains.Annotations::AspMvcAreaViewLocationFormatAttribute*
class CORDL_TYPE AspMvcAreaViewLocationFormatAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Format>k__BackingField offset 0x10
 __declspec(property(get=__get__Format_k__BackingField, put=__set__Format_k__BackingField)) ::StringW  _Format_k__BackingField;

 __declspec(property(get=get_Format, put=set_Format)) ::StringW  Format;

constexpr void __set__Format_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Format_k__BackingField() ;

constexpr ::StringW const& __get__Format_k__BackingField() const;

static inline ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute* New_ctor(::StringW  format) ;

/// @brief Method .ctor addr 0x2eba464 size 0x28 virtual false final false
inline void _ctor(::StringW  format) ;

/// @brief Method get_Format addr 0x2eba48c size 0x8 virtual false final false
inline ::StringW get_Format() ;

/// @brief Method set_Format addr 0x2eba494 size 0x8 virtual false final false
inline void set_Format(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaViewLocationFormatAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspMvcAreaViewLocationFormatAttribute(AspMvcAreaViewLocationFormatAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaViewLocationFormatAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspMvcAreaViewLocationFormatAttribute(AspMvcAreaViewLocationFormatAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspMvcAreaViewLocationFormatAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaViewLocationFormatAttribute");
