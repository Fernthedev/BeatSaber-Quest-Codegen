#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
CORDL_MODULE_EXPORT(AutoResetEvent)
// Forward declare root types
namespace System::Threading {
class AutoResetEvent;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::AutoResetEvent);
// Type: System.Threading::AutoResetEvent
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2660))
// CS Name: ::System.Threading::AutoResetEvent*
class CORDL_TYPE AutoResetEvent : public ::System::Threading::EventWaitHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Threading::EventWaitHandle)]{};

static inline ::System::Threading::AutoResetEvent* New_ctor(bool  initialState) ;

/// @brief Method .ctor addr 0x260fbf4 size 0x10 virtual false final false
inline void _ctor(bool  initialState) ;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoResetEvent(AutoResetEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoResetEvent(AutoResetEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AutoResetEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::AutoResetEvent, 0x30>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::AutoResetEvent);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::AutoResetEvent*, "System.Threading", "AutoResetEvent");
