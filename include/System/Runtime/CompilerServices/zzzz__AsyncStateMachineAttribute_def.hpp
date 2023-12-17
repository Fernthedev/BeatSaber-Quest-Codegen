#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
CORDL_MODULE_EXPORT(AsyncStateMachineAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncStateMachineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncStateMachineAttribute);
// Type: System.Runtime.CompilerServices::AsyncStateMachineAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3384))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3356))
// CS Name: ::System.Runtime.CompilerServices::AsyncStateMachineAttribute*
class CORDL_TYPE AsyncStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Runtime::CompilerServices::StateMachineAttribute)]{};

static inline ::System::Runtime::CompilerServices::AsyncStateMachineAttribute* New_ctor(::System::Type*  stateMachineType) ;

/// @brief Method .ctor addr 0x24da744 size 0x28 virtual false final false
inline void _ctor(::System::Type*  stateMachineType) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStateMachineAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncStateMachineAttribute(AsyncStateMachineAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStateMachineAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncStateMachineAttribute(AsyncStateMachineAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncStateMachineAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncStateMachineAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncStateMachineAttribute*, "System.Runtime.CompilerServices", "AsyncStateMachineAttribute");
