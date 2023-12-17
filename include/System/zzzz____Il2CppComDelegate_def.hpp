#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz____Il2CppComObject_def.hpp"
CORDL_MODULE_EXPORT(__Il2CppComDelegate)
// Forward declare root types
namespace System {
class __Il2CppComDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::__Il2CppComDelegate);
// Type: System::__Il2CppComDelegate
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16287))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16288))
// CS Name: ::System::__Il2CppComDelegate*
class CORDL_TYPE __Il2CppComDelegate : public ::System::__Il2CppComObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::__Il2CppComObject)]{};

/// @brief Method Finalize addr 0x2f2975c size 0xffffffffffffffff virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "__Il2CppComDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Il2CppComDelegate(__Il2CppComDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Il2CppComDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Il2CppComDelegate(__Il2CppComDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Il2CppComDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Il2CppComDelegate, 0xb0>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::__Il2CppComDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::__Il2CppComDelegate*, "System", "__Il2CppComDelegate");
