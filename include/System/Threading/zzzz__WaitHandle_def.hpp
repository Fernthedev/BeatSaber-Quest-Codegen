#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaitHandle)
namespace System {
class IDisposable;
}
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace System {
struct TimeSpan;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace System::Threading {
class WaitHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::WaitHandle);
// Type: System.Threading::WaitHandle
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2740))
// CS Name: ::System.Threading::WaitHandle*
class CORDL_TYPE WaitHandle : public ::System::MarshalByRefObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::MarshalByRefObject)]{};

/// @brief Field WaitTimeout offset 0x0
static constexpr int32_t  WaitTimeout{static_cast<int32_t>(0x102)};

/// @brief Field MAX_WAITHANDLES offset 0x0
static constexpr int32_t  MAX_WAITHANDLES{static_cast<int32_t>(0x40)};

/// @brief Field WAIT_OBJECT_0 offset 0x0
static constexpr int32_t  WAIT_OBJECT_0{static_cast<int32_t>(0x0)};

/// @brief Field WAIT_ABANDONED offset 0x0
static constexpr int32_t  WAIT_ABANDONED{static_cast<int32_t>(0x80)};

/// @brief Field WAIT_FAILED offset 0x0
static constexpr int32_t  WAIT_FAILED{static_cast<int32_t>(0x7fffffff)};

/// @brief Field ERROR_TOO_MANY_POSTS offset 0x0
static constexpr int32_t  ERROR_TOO_MANY_POSTS{static_cast<int32_t>(0x12a)};

/// @brief Field ERROR_NOT_OWNED_BY_CALLER offset 0x0
static constexpr int32_t  ERROR_NOT_OWNED_BY_CALLER{static_cast<int32_t>(0x12b)};

/// @brief Field MaxWaitHandles offset 0x0
static constexpr int32_t  MaxWaitHandles{static_cast<int32_t>(0x40)};

/// @brief Field waitHandle offset 0x18
 __declspec(property(get=__get_waitHandle, put=__set_waitHandle)) ::cordl_internals::intptr_t  waitHandle;

/// @brief Field safeWaitHandle offset 0x20
 __declspec(property(get=__get_safeWaitHandle, put=__set_safeWaitHandle)) ::Microsoft::Win32::SafeHandles::SafeWaitHandle*  safeWaitHandle;

/// @brief Field hasThreadAffinity offset 0x28
 __declspec(property(get=__get_hasThreadAffinity, put=__set_hasThreadAffinity)) bool  hasThreadAffinity;

 __declspec(property(put=set_Handle)) ::cordl_internals::intptr_t  Handle;

 __declspec(property(get=get_SafeWaitHandle, put=set_SafeWaitHandle)) ::Microsoft::Win32::SafeHandles::SafeWaitHandle*  SafeWaitHandle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_waitHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_waitHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_waitHandle() const;

constexpr void __set_safeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle*  value) ;

constexpr ::Microsoft::Win32::SafeHandles::SafeWaitHandle* __get_safeWaitHandle() ;

constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeWaitHandle*> __get_safeWaitHandle() const;

constexpr void __set_hasThreadAffinity(bool  value) ;

constexpr bool& __get_hasThreadAffinity() ;

constexpr bool const& __get_hasThreadAffinity() const;

static inline void setStaticF_InvalidHandle(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_InvalidHandle() ;

static inline ::System::Threading::WaitHandle* New_ctor() ;

/// @brief Method .ctor addr 0x261cd38 size 0x1c virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x261cd54 size 0x6c virtual false final false
inline void Init() ;

/// @brief Method set_Handle addr 0x261cdc0 size 0xec virtual true final false
inline void set_Handle(::cordl_internals::intptr_t  value) ;

/// @brief Method get_SafeWaitHandle addr 0x261ceac size 0xb8 virtual false final false
inline ::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle() ;

/// @brief Method set_SafeWaitHandle addr 0x261cf64 size 0x88 virtual false final false
inline void set_SafeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle*  value) ;

/// @brief Method SetHandleInternal addr 0x261cfec size 0x34 virtual false final false
inline void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle*  handle) ;

/// @brief Method WaitOne addr 0x261d020 size 0x84 virtual true final false
inline bool WaitOne(int32_t  millisecondsTimeout, bool  exitContext) ;

/// @brief Method WaitOne addr 0x261d124 size 0xcc virtual true final false
inline bool WaitOne(::System::TimeSpan  timeout, bool  exitContext) ;

/// @brief Method WaitOne addr 0x261d1f0 size 0x14 virtual true final false
inline bool WaitOne() ;

/// @brief Method WaitOne addr 0x261d204 size 0x10 virtual true final false
inline bool WaitOne(int32_t  millisecondsTimeout) ;

/// @brief Method WaitOne addr 0x261d214 size 0x10 virtual true final false
inline bool WaitOne(::System::TimeSpan  timeout) ;

/// @brief Method WaitOne addr 0x261d0a4 size 0x80 virtual false final false
inline bool WaitOne(int64_t  timeout, bool  exitContext) ;

/// @brief Method InternalWaitOne addr 0x261d224 size 0xf4 virtual false final false
static inline bool InternalWaitOne(::System::Runtime::InteropServices::SafeHandle*  waitableSafeHandle, int64_t  millisecondsTimeout, bool  hasThreadAffinity, bool  exitContext) ;

/// @brief Method WaitAny addr 0x261d51c size 0x308 virtual false final false
static inline int32_t WaitAny(::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>  waitHandles, int32_t  millisecondsTimeout, bool  exitContext) ;

/// @brief Method WaitAny addr 0x261dc48 size 0x10c virtual false final false
static inline int32_t WaitAny(::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>  waitHandles, ::System::TimeSpan  timeout, bool  exitContext) ;

/// @brief Method ThrowAbandonedMutexException addr 0x261d4dc size 0x40 virtual false final false
static inline void ThrowAbandonedMutexException() ;

/// @brief Method ThrowAbandonedMutexException addr 0x261dbf4 size 0x54 virtual false final false
static inline void ThrowAbandonedMutexException(int32_t  location, ::System::Threading::WaitHandle*  handle) ;

/// @brief Method Close addr 0x261dd54 size 0x70 virtual true final false
inline void Close() ;

/// @brief Method Dispose addr 0x261ddc4 size 0x48 virtual true final false
inline void Dispose(bool  explicitDisposing) ;

/// @brief Method Dispose addr 0x261de0c size 0x70 virtual true final true
inline void Dispose() ;

/// @brief Method WaitOneNative addr 0x261d318 size 0x1c4 virtual false final false
static inline int32_t WaitOneNative(::System::Runtime::InteropServices::SafeHandle*  waitableSafeHandle, uint32_t  millisecondsTimeout, bool  hasThreadAffinity, bool  exitContext) ;

/// @brief Method WaitMultiple addr 0x261d824 size 0x3d0 virtual false final false
static inline int32_t WaitMultiple(::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>  waitHandles, int32_t  millisecondsTimeout, bool  exitContext, bool  WaitAll) ;

/// @brief Method Wait_internal addr 0x261de7c size 0x8 virtual false final false
static inline int32_t Wait_internal(::cordl_internals::Ptr<::cordl_internals::intptr_t>  handles, int32_t  numHandles, bool  waitAll, int32_t  ms) ;

// Ctor Parameters [CppParam { name: "", ty: "WaitHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitHandle(WaitHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitHandle(WaitHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WaitHandle()  = default;
public:


// Fields

// Static field InvalidHandle


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::WaitHandle, 0x30>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::WaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitHandle*, "System.Threading", "WaitHandle");
