#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadStart)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class ThreadStart;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadStart);
// Type: System.Threading::ThreadStart
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2671))
// CS Name: ::System.Threading::ThreadStart*
class CORDL_TYPE ThreadStart : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Threading::ThreadStart* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x261013c size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x26101f8 size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStart", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadStart(ThreadStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStart", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadStart(ThreadStart const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadStart()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadStart, 0x80>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::ThreadStart);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadStart*, "System.Threading", "ThreadStart");
