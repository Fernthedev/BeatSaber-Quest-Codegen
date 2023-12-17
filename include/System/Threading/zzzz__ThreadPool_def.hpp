#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPool)
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
class RegisteredWaitHandle;
}
namespace System {
class Object;
}
namespace System::Threading {
template<typename TState>
class __ThreadPool____c__DisplayClass17_0_1;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class WaitOrTimerCallback;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading {
template<typename TState>
class __ThreadPool____c__DisplayClass17_0_1;
}
namespace System::Threading {
class ThreadPool;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type TState>
class __ThreadPool____c__DisplayClass17_0_1<TState>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadPool____c__DisplayClass17_0_1);
MARK_REF_PTR_T(::System::Threading::ThreadPool);
// Type: ::<>c__DisplayClass17_0`1
// Type: System.Threading::ThreadPool
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2739))
// CS Name: ::System.Threading::ThreadPool*
class CORDL_TYPE ThreadPool : public ::System::Object {
public:
// Declarations
template<typename TState>
using __c__DisplayClass17_0_1 = ::System::Threading::__ThreadPool____c__DisplayClass17_0_1<TState>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method RegisterWaitForSingleObject addr 0x261c594 size 0x1d8 virtual false final false
static inline ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle*  waitObject, ::System::Threading::WaitOrTimerCallback*  callBack, ::System::Object*  state, uint32_t  millisecondsTimeOutInterval, bool  executeOnlyOnce, ByRef<::System::Threading::StackCrawlMark>  stackMark, bool  compressStack) ;

/// @brief Method RegisterWaitForSingleObject addr 0x261c870 size 0x84 virtual false final false
static inline ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle*  waitObject, ::System::Threading::WaitOrTimerCallback*  callBack, ::System::Object*  state, int32_t  millisecondsTimeOutInterval, bool  executeOnlyOnce) ;

/// @brief Method RegisterWaitForSingleObject addr 0x261c8f4 size 0xf4 virtual false final false
static inline ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle*  waitObject, ::System::Threading::WaitOrTimerCallback*  callBack, ::System::Object*  state, ::System::TimeSpan  timeout, bool  executeOnlyOnce) ;

/// @brief Method QueueUserWorkItem addr 0x261c820 size 0x28 virtual false final false
static inline bool QueueUserWorkItem(::System::Threading::WaitCallback*  callBack, ::System::Object*  state) ;

/// @brief Method QueueUserWorkItem addr 0x261cb0c size 0x2c virtual false final false
static inline bool QueueUserWorkItem(::System::Threading::WaitCallback*  callBack) ;

/// @brief Method UnsafeQueueUserWorkItem addr 0x261c848 size 0x28 virtual false final false
static inline bool UnsafeQueueUserWorkItem(::System::Threading::WaitCallback*  callBack, ::System::Object*  state) ;

/// @brief Method QueueUserWorkItem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static inline bool QueueUserWorkItem(::System::Action_1<TState>*  callBack, TState  state, bool  preferLocal) ;

/// @brief Method QueueUserWorkItemHelper addr 0x261c9e8 size 0x124 virtual false final false
static inline bool QueueUserWorkItemHelper(::System::Threading::WaitCallback*  callBack, ::System::Object*  state, ByRef<::System::Threading::StackCrawlMark>  stackMark, bool  compressStack, bool  forceGlobal) ;

/// @brief Method UnsafeQueueCustomWorkItem addr 0x261cbcc size 0x80 virtual false final false
static inline void UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem*  workItem, bool  forceGlobal) ;

/// @brief Method TryPopCustomWorkItem addr 0x261cc4c size 0xa0 virtual false final false
static inline bool TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem*  workItem) ;

/// @brief Method RequestWorkerThread addr 0x261ccec size 0x4 virtual false final false
static inline bool RequestWorkerThread() ;

/// @brief Method EnsureVMInitialized addr 0x261cb38 size 0x94 virtual false final false
static inline void EnsureVMInitialized() ;

/// @brief Method NotifyWorkItemComplete addr 0x261ccf4 size 0x4 virtual false final false
static inline bool NotifyWorkItemComplete() ;

/// @brief Method ReportThreadStatus addr 0x261ccf8 size 0x8 virtual false final false
static inline void ReportThreadStatus(bool  isWorking) ;

/// @brief Method NotifyWorkItemProgress addr 0x261cd00 size 0x10 virtual false final false
static inline void NotifyWorkItemProgress() ;

/// @brief Method NotifyWorkItemProgressNative addr 0x261cd10 size 0x4 virtual false final false
static inline void NotifyWorkItemProgressNative() ;

/// @brief Method NotifyWorkItemQueued addr 0x261cd14 size 0x4 virtual false final false
static inline void NotifyWorkItemQueued() ;

/// @brief Method InitializeVMTp addr 0x261ccf0 size 0x4 virtual false final false
static inline void InitializeVMTp(ByRef<bool>  enableWorkerTracking) ;

/// @brief Method get_IsThreadPoolThread addr 0x261cd18 size 0x20 virtual false final false
static inline bool get_IsThreadPoolThread() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadPool(ThreadPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadPool(ThreadPool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadPool()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPool, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
// Type: ::<>c__DisplayClass17_0`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2738))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2738), inst: 2 })
// CS Name: ::ThreadPool::<>c__DisplayClass17_0`1<TState>*
class CORDL_TYPE __ThreadPool____c__DisplayClass17_0_1<TState> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field callBack offset 0x10
 __declspec(property(get=__get_callBack, put=__set_callBack)) ::System::Action_1<TState>*  callBack;

constexpr void __set_callBack(::System::Action_1<TState>*  value) ;

constexpr ::System::Action_1<TState>* __get_callBack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TState>*> __get_callBack() const;

static inline ::System::Threading::__ThreadPool____c__DisplayClass17_0_1<TState>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <QueueUserWorkItem>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _QueueUserWorkItem_b__0(::System::Object*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPool____c__DisplayClass17_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadPool____c__DisplayClass17_0_1(__ThreadPool____c__DisplayClass17_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPool____c__DisplayClass17_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadPool____c__DisplayClass17_0_1(__ThreadPool____c__DisplayClass17_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadPool____c__DisplayClass17_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadPool____c__DisplayClass17_0_1, "System.Threading", "ThreadPool/<>c__DisplayClass17_0`1");
NEED_NO_BOX(::System::Threading::ThreadPool);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPool*, "System.Threading", "ThreadPool");
