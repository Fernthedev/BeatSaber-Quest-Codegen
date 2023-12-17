#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspTypePropertyAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspTypePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspTypePropertyAttribute);
// Type: JetBrains.Annotations::AspTypePropertyAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15800))
// CS Name: ::JetBrains.Annotations::AspTypePropertyAttribute*
class CORDL_TYPE AspTypePropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <CreateConstructorReferences>k__BackingField offset 0x10
 __declspec(property(get=__get__CreateConstructorReferences_k__BackingField, put=__set__CreateConstructorReferences_k__BackingField)) bool  _CreateConstructorReferences_k__BackingField;

 __declspec(property(get=get_CreateConstructorReferences, put=set_CreateConstructorReferences)) bool  CreateConstructorReferences;

constexpr void __set__CreateConstructorReferences_k__BackingField(bool  value) ;

constexpr bool& __get__CreateConstructorReferences_k__BackingField() ;

constexpr bool const& __get__CreateConstructorReferences_k__BackingField() const;

/// @brief Method get_CreateConstructorReferences addr 0x2eba828 size 0x8 virtual false final false
inline bool get_CreateConstructorReferences() ;

/// @brief Method set_CreateConstructorReferences addr 0x2eba830 size 0xc virtual false final false
inline void set_CreateConstructorReferences(bool  value) ;

static inline ::JetBrains::Annotations::AspTypePropertyAttribute* New_ctor(bool  createConstructorReferences) ;

/// @brief Method .ctor addr 0x2eba83c size 0x2c virtual false final false
inline void _ctor(bool  createConstructorReferences) ;

// Ctor Parameters [CppParam { name: "", ty: "AspTypePropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspTypePropertyAttribute(AspTypePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspTypePropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspTypePropertyAttribute(AspTypePropertyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspTypePropertyAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspTypePropertyAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspTypePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspTypePropertyAttribute*, "JetBrains.Annotations", "AspTypePropertyAttribute");
