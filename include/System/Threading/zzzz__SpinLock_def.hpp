#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpinLock)
namespace System::Threading {
class __SpinLock__SystemThreading_SpinLockDebugView;
}
// Forward declare root types
namespace System::Threading {
class __SpinLock__SystemThreading_SpinLockDebugView;
}
namespace System::Threading {
struct SpinLock;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView);
MARK_VAL_T(::System::Threading::SpinLock);
// Type: ::SystemThreading_SpinLockDebugView
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2700))
// CS Name: ::SpinLock::SystemThreading_SpinLockDebugView*
class CORDL_TYPE __SpinLock__SystemThreading_SpinLockDebugView : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "__SpinLock__SystemThreading_SpinLockDebugView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SpinLock__SystemThreading_SpinLockDebugView(__SpinLock__SystemThreading_SpinLockDebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SpinLock__SystemThreading_SpinLockDebugView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SpinLock__SystemThreading_SpinLockDebugView(__SpinLock__SystemThreading_SpinLockDebugView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SpinLock__SystemThreading_SpinLockDebugView()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
// Type: System.Threading::SpinLock
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2701))
// CS Name: ::System.Threading::SpinLock
struct CORDL_TYPE SpinLock : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
using SystemThreading_SpinLockDebugView = ::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_owner offset 0x0
 __declspec(property(get=__get_m_owner, put=__set_m_owner)) int32_t  m_owner;

 __declspec(property(get=get_IsHeldByCurrentThread)) bool  IsHeldByCurrentThread;

 __declspec(property(get=get_IsThreadOwnerTrackingEnabled)) bool  IsThreadOwnerTrackingEnabled;

constexpr void __set_m_owner(int32_t  value) ;

constexpr int32_t& __get_m_owner() ;

constexpr int32_t const& __get_m_owner() const;

static inline void setStaticF_MAXIMUM_WAITERS(int32_t  value) ;

static inline int32_t getStaticF_MAXIMUM_WAITERS() ;

/// @brief Method .ctor addr 0x2615e10 size 0x38 virtual false final false
inline void _ctor(bool  enableThreadOwnerTracking) ;

/// @brief Method Enter addr 0x2615e48 size 0x7c virtual false final false
inline void Enter(ByRef<bool>  lockTaken) ;

/// @brief Method TryEnter addr 0x261639c size 0x98 virtual false final false
inline void TryEnter(int32_t  millisecondsTimeout, ByRef<bool>  lockTaken) ;

/// @brief Method ContinueTryEnter addr 0x2615f14 size 0x488 virtual false final false
inline void ContinueTryEnter(int32_t  millisecondsTimeout, ByRef<bool>  lockTaken) ;

/// @brief Method DecrementWaiters addr 0x26165c8 size 0x60 virtual false final false
inline void DecrementWaiters() ;

/// @brief Method ContinueTryEnterWithThreadTracking addr 0x26164a0 size 0x128 virtual false final false
inline void ContinueTryEnterWithThreadTracking(int32_t  millisecondsTimeout, uint32_t  startTime, ByRef<bool>  lockTaken) ;

/// @brief Method Exit addr 0x2616758 size 0x50 virtual false final false
inline void Exit(bool  useMemoryBarrier) ;

/// @brief Method ExitSlowPath addr 0x26167a8 size 0xe0 virtual false final false
inline void ExitSlowPath(bool  useMemoryBarrier) ;

/// @brief Method get_IsHeldByCurrentThread addr 0x2616888 size 0xa0 virtual false final false
inline bool get_IsHeldByCurrentThread() ;

/// @brief Method get_IsThreadOwnerTrackingEnabled addr 0x2616484 size 0x1c virtual false final false
inline bool get_IsThreadOwnerTrackingEnabled() ;

// Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpinLock(int32_t  m_owner) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SpinLock(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SpinLock()  = default;


// Fields

// Static field MAXIMUM_WAITERS


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SpinLock, 0x4>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView*, "System.Threading", "SpinLock/SystemThreading_SpinLockDebugView");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinLock, "System.Threading", "SpinLock");
