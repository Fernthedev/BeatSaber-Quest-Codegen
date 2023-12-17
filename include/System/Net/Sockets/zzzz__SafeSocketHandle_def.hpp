#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeSocketHandle)
namespace System::Threading {
class Thread;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::Net::Sockets {
class SafeSocketHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SafeSocketHandle);
// Type: System.Net.Sockets::SafeSocketHandle
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2302))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9356))
// CS Name: ::System.Net.Sockets::SafeSocketHandle*
class CORDL_TYPE SafeSocketHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid)]{};

/// @brief Field SOCKET_CLOSED offset 0x0
static constexpr int32_t  SOCKET_CLOSED{static_cast<int32_t>(0x2714)};

/// @brief Field ABORT_RETRIES offset 0x0
static constexpr int32_t  ABORT_RETRIES{static_cast<int32_t>(0xa)};

/// @brief Field blocking_threads offset 0x20
 __declspec(property(get=__get_blocking_threads, put=__set_blocking_threads)) ::System::Collections::Generic::List_1<::System::Threading::Thread*>*  blocking_threads;

/// @brief Field threads_stacktraces offset 0x28
 __declspec(property(get=__get_threads_stacktraces, put=__set_threads_stacktraces)) ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*  threads_stacktraces;

/// @brief Field in_cleanup offset 0x30
 __declspec(property(get=__get_in_cleanup, put=__set_in_cleanup)) bool  in_cleanup;

constexpr void __set_blocking_threads(::System::Collections::Generic::List_1<::System::Threading::Thread*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Thread*>* __get_blocking_threads() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Thread*>*> __get_blocking_threads() const;

constexpr void __set_threads_stacktraces(::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>* __get_threads_stacktraces() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*> __get_threads_stacktraces() const;

constexpr void __set_in_cleanup(bool  value) ;

constexpr bool& __get_in_cleanup() ;

constexpr bool const& __get_in_cleanup() const;

static inline void setStaticF_THROW_ON_ABORT_RETRIES(bool  value) ;

static inline bool getStaticF_THROW_ON_ABORT_RETRIES() ;

static inline ::System::Net::Sockets::SafeSocketHandle* New_ctor(::cordl_internals::intptr_t  preexistingHandle, bool  ownsHandle) ;

/// @brief Method .ctor addr 0x28fdcfc size 0xcc virtual false final false
inline void _ctor(::cordl_internals::intptr_t  preexistingHandle, bool  ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x28fddc8 size 0x5cc virtual true final false
inline bool ReleaseHandle() ;

/// @brief Method RegisterForBlockingSyscall addr 0x28fe394 size 0x148 virtual false final false
inline void RegisterForBlockingSyscall() ;

/// @brief Method UnRegisterForBlockingSyscall addr 0x28fe4dc size 0x1f0 virtual false final false
inline void UnRegisterForBlockingSyscall() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeSocketHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeSocketHandle(SafeSocketHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeSocketHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeSocketHandle(SafeSocketHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeSocketHandle()  = default;
public:


// Fields

// Static field THROW_ON_ABORT_RETRIES


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SafeSocketHandle, 0x38>, "Size mismatch!");

} // namespace end def System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SafeSocketHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SafeSocketHandle*, "System.Net.Sockets", "SafeSocketHandle");
