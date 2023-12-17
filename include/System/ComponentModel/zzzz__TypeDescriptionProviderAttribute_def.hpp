#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeDescriptionProviderAttribute)
// Forward declare root types
namespace System::ComponentModel {
class TypeDescriptionProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptionProviderAttribute);
// Type: System.ComponentModel::TypeDescriptionProviderAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9461))
// CS Name: ::System.ComponentModel::TypeDescriptionProviderAttribute*
class CORDL_TYPE TypeDescriptionProviderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <TypeName>k__BackingField offset 0x10
 __declspec(property(get=__get__TypeName_k__BackingField, put=__set__TypeName_k__BackingField)) ::StringW  _TypeName_k__BackingField;

 __declspec(property(get=get_TypeName)) ::StringW  TypeName;

constexpr void __set__TypeName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__TypeName_k__BackingField() ;

constexpr ::StringW const& __get__TypeName_k__BackingField() const;

static inline ::System::ComponentModel::TypeDescriptionProviderAttribute* New_ctor(::StringW  typeName) ;

/// @brief Method .ctor addr 0x29192b4 size 0x78 virtual false final false
inline void _ctor(::StringW  typeName) ;

/// @brief Method get_TypeName addr 0x291932c size 0x8 virtual false final false
inline ::StringW get_TypeName() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProviderAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptionProviderAttribute(TypeDescriptionProviderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProviderAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptionProviderAttribute(TypeDescriptionProviderAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeDescriptionProviderAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionProviderAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProviderAttribute*, "System.ComponentModel", "TypeDescriptionProviderAttribute");
