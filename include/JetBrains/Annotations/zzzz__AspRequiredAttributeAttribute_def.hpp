#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspRequiredAttributeAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspRequiredAttributeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspRequiredAttributeAttribute);
// Type: JetBrains.Annotations::AspRequiredAttributeAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15799))
// CS Name: ::JetBrains.Annotations::AspRequiredAttributeAttribute*
class CORDL_TYPE AspRequiredAttributeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Attribute>k__BackingField offset 0x10
 __declspec(property(get=__get__Attribute_k__BackingField, put=__set__Attribute_k__BackingField)) ::StringW  _Attribute_k__BackingField;

 __declspec(property(get=get_Attribute, put=set_Attribute)) ::StringW  Attribute;

constexpr void __set__Attribute_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Attribute_k__BackingField() ;

constexpr ::StringW const& __get__Attribute_k__BackingField() const;

static inline ::JetBrains::Annotations::AspRequiredAttributeAttribute* New_ctor(::StringW  attribute) ;

/// @brief Method .ctor addr 0x2eba7f0 size 0x28 virtual false final false
inline void _ctor(::StringW  attribute) ;

/// @brief Method get_Attribute addr 0x2eba818 size 0x8 virtual false final false
inline ::StringW get_Attribute() ;

/// @brief Method set_Attribute addr 0x2eba820 size 0x8 virtual false final false
inline void set_Attribute(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "AspRequiredAttributeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspRequiredAttributeAttribute(AspRequiredAttributeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspRequiredAttributeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspRequiredAttributeAttribute(AspRequiredAttributeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspRequiredAttributeAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspRequiredAttributeAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspRequiredAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspRequiredAttributeAttribute*, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
