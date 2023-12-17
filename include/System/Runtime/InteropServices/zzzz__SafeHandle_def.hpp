#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeHandle)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::SafeHandle);
// Type: System.Runtime.InteropServices::SafeHandle
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3354))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3334))
// CS Name: ::System.Runtime.InteropServices::SafeHandle*
class CORDL_TYPE SafeHandle : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Runtime::ConstrainedExecution::CriticalFinalizerObject)]{};

/// @brief Field RefCount_Mask offset 0x0
static constexpr int32_t  RefCount_Mask{static_cast<int32_t>(0x7ffffffc)};

/// @brief Field RefCount_One offset 0x0
static constexpr int32_t  RefCount_One{static_cast<int32_t>(0x4)};

/// @brief Field handle offset 0x10
 __declspec(property(get=__get_handle, put=__set_handle)) ::cordl_internals::intptr_t  handle;

/// @brief Field _state offset 0x18
 __declspec(property(get=__get__state, put=__set__state)) int32_t  _state;

/// @brief Field _ownsHandle offset 0x1c
 __declspec(property(get=__get__ownsHandle, put=__set__ownsHandle)) bool  _ownsHandle;

/// @brief Field _fullyInitialized offset 0x1d
 __declspec(property(get=__get__fullyInitialized, put=__set__fullyInitialized)) bool  _fullyInitialized;

 __declspec(property(get=get_IsClosed)) bool  IsClosed;

 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_handle() ;

constexpr ::cordl_internals::intptr_t const& __get_handle() const;

constexpr void __set__state(int32_t  value) ;

constexpr int32_t& __get__state() ;

constexpr int32_t const& __get__state() const;

constexpr void __set__ownsHandle(bool  value) ;

constexpr bool& __get__ownsHandle() ;

constexpr bool const& __get__ownsHandle() const;

constexpr void __set__fullyInitialized(bool  value) ;

constexpr bool& __get__fullyInitialized() ;

constexpr bool const& __get__fullyInitialized() const;

static inline ::System::Runtime::InteropServices::SafeHandle* New_ctor(::cordl_internals::intptr_t  invalidHandleValue, bool  ownsHandle) ;

/// @brief Method .ctor addr 0x24d7614 size 0x98 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  invalidHandleValue, bool  ownsHandle) ;

/// @brief Method Finalize addr 0x24d76b4 size 0xa0 virtual true final false
inline void Finalize() ;

/// @brief Method SetHandle addr 0x24d7754 size 0x8 virtual false final false
inline void SetHandle(::cordl_internals::intptr_t  handle) ;

/// @brief Method DangerousGetHandle addr 0x24d775c size 0x8 virtual false final false
inline ::cordl_internals::intptr_t DangerousGetHandle() ;

/// @brief Method get_IsClosed addr 0x24d7764 size 0xc virtual false final false
inline bool get_IsClosed() ;

/// @brief Method get_IsInvalid addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_IsInvalid() ;

/// @brief Method Close addr 0x24d7770 size 0x10 virtual false final false
inline void Close() ;

/// @brief Method Dispose addr 0x24d7780 size 0x10 virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x24d7790 size 0x1c virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method ReleaseHandle addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool ReleaseHandle() ;

/// @brief Method SetHandleAsInvalid addr 0x24d7868 size 0x84 virtual false final false
inline void SetHandleAsInvalid() ;

/// @brief Method DangerousAddRef addr 0x24d6d7c size 0xd0 virtual false final false
inline void DangerousAddRef(ByRef<bool>  success) ;

/// @brief Method DangerousRelease addr 0x24d6f28 size 0x8 virtual false final false
inline void DangerousRelease() ;

/// @brief Method InternalDispose addr 0x24d77ac size 0xa8 virtual false final false
inline void InternalDispose() ;

/// @brief Method InternalFinalize addr 0x24d7854 size 0x14 virtual false final false
inline void InternalFinalize() ;

/// @brief Method DangerousReleaseInternal addr 0x24d78ec size 0x170 virtual false final false
inline void DangerousReleaseInternal(bool  dispose) ;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeHandle(SafeHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeHandle(SafeHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeHandle()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::SafeHandle, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::SafeHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeHandle*, "System.Runtime.InteropServices", "SafeHandle");
