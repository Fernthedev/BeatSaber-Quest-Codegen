#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Forward declare root types
namespace Microsoft::Win32 {
class NativeMethods;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::NativeMethods);
// Type: Microsoft.Win32::NativeMethods
namespace Microsoft::Win32 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8859))
// CS Name: ::Microsoft.Win32::NativeMethods*
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method DuplicateHandle addr 0x282a858 size 0x204 virtual false final false
static inline bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef  hSourceProcessHandle, ::System::Runtime::InteropServices::SafeHandle*  hSourceHandle, ::System::Runtime::InteropServices::HandleRef  hTargetProcess, ByRef<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>  targetHandle, int32_t  dwDesiredAccess, bool  bInheritHandle, int32_t  dwOptions) ;

/// @brief Method DuplicateHandle addr 0x282aa5c size 0x150 virtual false final false
static inline bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef  hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef  hSourceHandle, ::System::Runtime::InteropServices::HandleRef  hTargetProcess, ByRef<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>  targetHandle, int32_t  dwDesiredAccess, bool  bInheritHandle, int32_t  dwOptions) ;

/// @brief Method GetCurrentProcess addr 0x282abd8 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t GetCurrentProcess() ;

/// @brief Method GetExitCodeProcess addr 0x282abdc size 0x4 virtual false final false
static inline bool GetExitCodeProcess(::cordl_internals::intptr_t  processHandle, ByRef<int32_t>  exitCode) ;

/// @brief Method GetExitCodeProcess addr 0x282abe0 size 0xe8 virtual false final false
static inline bool GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  processHandle, ByRef<int32_t>  exitCode) ;

/// @brief Method GetProcessTimes addr 0x282acc8 size 0x4 virtual false final false
static inline bool GetProcessTimes(::cordl_internals::intptr_t  handle, ByRef<int64_t>  creation, ByRef<int64_t>  exit, ByRef<int64_t>  kernel, ByRef<int64_t>  user) ;

/// @brief Method GetProcessTimes addr 0x282accc size 0x108 virtual false final false
static inline bool GetProcessTimes(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  handle, ByRef<int64_t>  creation, ByRef<int64_t>  exit, ByRef<int64_t>  kernel, ByRef<int64_t>  user) ;

/// @brief Method GetCurrentProcessId addr 0x282add4 size 0x4 virtual false final false
static inline int32_t GetCurrentProcessId() ;

/// @brief Method CloseProcess addr 0x282add8 size 0x4 virtual false final false
static inline bool CloseProcess(::cordl_internals::intptr_t  handle) ;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods(NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods(NativeMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeMethods()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::NativeMethods, 0x10>, "Size mismatch!");

} // namespace end def Microsoft::Win32
NEED_NO_BOX(::Microsoft::Win32::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
