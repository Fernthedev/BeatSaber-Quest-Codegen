#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AmbientValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AmbientValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AmbientValueAttribute);
// Type: System.ComponentModel::AmbientValueAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9401))
// CS Name: ::System.ComponentModel::AmbientValueAttribute*
class CORDL_TYPE AmbientValueAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Value>k__BackingField offset 0x10
 __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField)) ::System::Object*  _Value_k__BackingField;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

constexpr void __set__Value_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__Value_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__Value_k__BackingField() const;

/// @brief Method get_Value addr 0x2905164 size 0x8 virtual false final false
inline ::System::Object* get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbientValueAttribute(AmbientValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbientValueAttribute(AmbientValueAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AmbientValueAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AmbientValueAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AmbientValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AmbientValueAttribute*, "System.ComponentModel", "AmbientValueAttribute");
