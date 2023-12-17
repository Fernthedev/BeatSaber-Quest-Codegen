#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrossContextDelegate)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::CrossContextDelegate);
// Type: System.Runtime.Remoting.Contexts::CrossContextDelegate
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3104))
// CS Name: ::System.Runtime.Remoting.Contexts::CrossContextDelegate*
class CORDL_TYPE CrossContextDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Runtime::Remoting::Contexts::CrossContextDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x249fa80 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x249fb3c size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossContextDelegate(CrossContextDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossContextDelegate(CrossContextDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrossContextDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::CrossContextDelegate, 0x80>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::CrossContextDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::CrossContextDelegate*, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
