#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProvidePropertyAttribute)
// Forward declare root types
namespace System::ComponentModel {
class ProvidePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ProvidePropertyAttribute);
// Type: System.ComponentModel::ProvidePropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9447))
// CS Name: ::System.ComponentModel::ProvidePropertyAttribute*
class CORDL_TYPE ProvidePropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <PropertyName>k__BackingField offset 0x10
 __declspec(property(get=__get__PropertyName_k__BackingField, put=__set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field <ReceiverTypeName>k__BackingField offset 0x18
 __declspec(property(get=__get__ReceiverTypeName_k__BackingField, put=__set__ReceiverTypeName_k__BackingField)) ::StringW  _ReceiverTypeName_k__BackingField;

 __declspec(property(get=get_PropertyName)) ::StringW  PropertyName;

 __declspec(property(get=get_ReceiverTypeName)) ::StringW  ReceiverTypeName;

constexpr void __set__PropertyName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__PropertyName_k__BackingField() ;

constexpr ::StringW const& __get__PropertyName_k__BackingField() const;

constexpr void __set__ReceiverTypeName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__ReceiverTypeName_k__BackingField() ;

constexpr ::StringW const& __get__ReceiverTypeName_k__BackingField() const;

/// @brief Method get_PropertyName addr 0x29155a4 size 0x8 virtual false final false
inline ::StringW get_PropertyName() ;

/// @brief Method get_ReceiverTypeName addr 0x29155ac size 0x8 virtual false final false
inline ::StringW get_ReceiverTypeName() ;

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProvidePropertyAttribute(ProvidePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProvidePropertyAttribute(ProvidePropertyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProvidePropertyAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ProvidePropertyAttribute, 0x20>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ProvidePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ProvidePropertyAttribute*, "System.ComponentModel", "ProvidePropertyAttribute");
