#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AssemblyDelaySignAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyDelaySignAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyDelaySignAttribute);
// Type: System.Reflection::AssemblyDelaySignAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3449))
// CS Name: ::System.Reflection::AssemblyDelaySignAttribute*
class CORDL_TYPE AssemblyDelaySignAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <DelaySign>k__BackingField offset 0x10
 __declspec(property(get=__get__DelaySign_k__BackingField, put=__set__DelaySign_k__BackingField)) bool  _DelaySign_k__BackingField;

constexpr void __set__DelaySign_k__BackingField(bool  value) ;

constexpr bool& __get__DelaySign_k__BackingField() ;

constexpr bool const& __get__DelaySign_k__BackingField() const;

static inline ::System::Reflection::AssemblyDelaySignAttribute* New_ctor(bool  delaySign) ;

/// @brief Method .ctor addr 0x24e5f20 size 0x28 virtual false final false
inline void _ctor(bool  delaySign) ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDelaySignAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyDelaySignAttribute(AssemblyDelaySignAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDelaySignAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyDelaySignAttribute(AssemblyDelaySignAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyDelaySignAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyDelaySignAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyDelaySignAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDelaySignAttribute*, "System.Reflection", "AssemblyDelaySignAttribute");
