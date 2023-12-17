#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(StateMachineAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class StateMachineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::StateMachineAttribute);
// Type: System.Runtime.CompilerServices::StateMachineAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3384))
// CS Name: ::System.Runtime.CompilerServices::StateMachineAttribute*
class CORDL_TYPE StateMachineAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <StateMachineType>k__BackingField offset 0x10
 __declspec(property(get=__get__StateMachineType_k__BackingField, put=__set__StateMachineType_k__BackingField)) ::System::Type*  _StateMachineType_k__BackingField;

 __declspec(property(get=get_StateMachineType)) ::System::Type*  StateMachineType;

constexpr void __set__StateMachineType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__StateMachineType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__StateMachineType_k__BackingField() const;

static inline ::System::Runtime::CompilerServices::StateMachineAttribute* New_ctor(::System::Type*  stateMachineType) ;

/// @brief Method .ctor addr 0x24da76c size 0x28 virtual false final false
inline void _ctor(::System::Type*  stateMachineType) ;

/// @brief Method get_StateMachineType addr 0x24db500 size 0x8 virtual false final false
inline ::System::Type* get_StateMachineType() ;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachineAttribute(StateMachineAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachineAttribute(StateMachineAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StateMachineAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::StateMachineAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::StateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::StateMachineAttribute*, "System.Runtime.CompilerServices", "StateMachineAttribute");
