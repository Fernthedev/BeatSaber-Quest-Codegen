#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySynchronizationContext)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace UnityEngine {
struct __UnitySynchronizationContext__WorkRequest;
}
namespace System {
class Object;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class ManualResetEvent;
}
// Forward declare root types
namespace UnityEngine {
class UnitySynchronizationContext;
}
namespace UnityEngine {
struct __UnitySynchronizationContext__WorkRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnitySynchronizationContext);
MARK_VAL_T(::UnityEngine::__UnitySynchronizationContext__WorkRequest);
// Type: ::WorkRequest
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10239))
// CS Name: ::UnitySynchronizationContext::WorkRequest
struct CORDL_TYPE __UnitySynchronizationContext__WorkRequest : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_DelagateCallback offset 0x0
 __declspec(property(get=__get_m_DelagateCallback, put=__set_m_DelagateCallback)) ::System::Threading::SendOrPostCallback*  m_DelagateCallback;

/// @brief Field m_DelagateState offset 0x8
 __declspec(property(get=__get_m_DelagateState, put=__set_m_DelagateState)) ::System::Object*  m_DelagateState;

/// @brief Field m_WaitHandle offset 0x10
 __declspec(property(get=__get_m_WaitHandle, put=__set_m_WaitHandle)) ::System::Threading::ManualResetEvent*  m_WaitHandle;

constexpr void __set_m_DelagateCallback(::System::Threading::SendOrPostCallback*  value) ;

constexpr ::System::Threading::SendOrPostCallback* __get_m_DelagateCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> __get_m_DelagateCallback() const;

constexpr void __set_m_DelagateState(::System::Object*  value) ;

constexpr ::System::Object* __get_m_DelagateState() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_DelagateState() const;

constexpr void __set_m_WaitHandle(::System::Threading::ManualResetEvent*  value) ;

constexpr ::System::Threading::ManualResetEvent* __get_m_WaitHandle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> __get_m_WaitHandle() const;

/// @brief Method .ctor addr 0x2cd4858 size 0xc virtual false final false
inline void _ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state, ::System::Threading::ManualResetEvent*  waitHandle) ;

/// @brief Method Invoke addr 0x2cd4bf8 size 0xac virtual false final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: None }, CppParam { name: "m_DelagateState", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: None }]
constexpr __UnitySynchronizationContext__WorkRequest(::System::Threading::SendOrPostCallback*  m_DelagateCallback, ::System::Object*  m_DelagateState, ::System::Threading::ManualResetEvent*  m_WaitHandle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UnitySynchronizationContext__WorkRequest(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UnitySynchronizationContext__WorkRequest()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__UnitySynchronizationContext__WorkRequest, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::UnitySynchronizationContext
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10240))
// CS Name: ::UnityEngine::UnitySynchronizationContext*
class CORDL_TYPE UnitySynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
// Declarations
using WorkRequest = ::UnityEngine::__UnitySynchronizationContext__WorkRequest;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Threading::SynchronizationContext)]{};

/// @brief Field m_AsyncWorkQueue offset 0x18
 __declspec(property(get=__get_m_AsyncWorkQueue, put=__set_m_AsyncWorkQueue)) ::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  m_AsyncWorkQueue;

/// @brief Field m_CurrentFrameWork offset 0x20
 __declspec(property(get=__get_m_CurrentFrameWork, put=__set_m_CurrentFrameWork)) ::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  m_CurrentFrameWork;

/// @brief Field m_MainThreadID offset 0x28
 __declspec(property(get=__get_m_MainThreadID, put=__set_m_MainThreadID)) int32_t  m_MainThreadID;

/// @brief Field m_TrackedCount offset 0x2c
 __declspec(property(get=__get_m_TrackedCount, put=__set_m_TrackedCount)) int32_t  m_TrackedCount;

constexpr void __set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>* __get_m_AsyncWorkQueue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*> __get_m_AsyncWorkQueue() const;

constexpr void __set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>* __get_m_CurrentFrameWork() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*> __get_m_CurrentFrameWork() const;

constexpr void __set_m_MainThreadID(int32_t  value) ;

constexpr int32_t& __get_m_MainThreadID() ;

constexpr int32_t const& __get_m_MainThreadID() const;

constexpr void __set_m_TrackedCount(int32_t  value) ;

constexpr int32_t& __get_m_TrackedCount() ;

constexpr int32_t const& __get_m_TrackedCount() const;

static inline ::UnityEngine::UnitySynchronizationContext* New_ctor(int32_t  mainThreadID) ;

/// @brief Method .ctor addr 0x2cd43fc size 0xb8 virtual false final false
inline void _ctor(int32_t  mainThreadID) ;

static inline ::UnityEngine::UnitySynchronizationContext* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  queue, int32_t  mainThreadID) ;

/// @brief Method .ctor addr 0x2cd44b4 size 0xa0 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  queue, int32_t  mainThreadID) ;

/// @brief Method Send addr 0x2cd4554 size 0x304 virtual true final false
inline void Send(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) ;

/// @brief Method OperationStarted addr 0x2cd4864 size 0xc virtual true final false
inline void OperationStarted() ;

/// @brief Method OperationCompleted addr 0x2cd4870 size 0xc virtual true final false
inline void OperationCompleted() ;

/// @brief Method Post addr 0x2cd487c size 0x150 virtual true final false
inline void Post(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) ;

/// @brief Method CreateCopy addr 0x2cd49cc size 0x6c virtual true final false
inline ::System::Threading::SynchronizationContext* CreateCopy() ;

/// @brief Method Exec addr 0x2cd4a38 size 0x1c0 virtual false final false
inline void Exec() ;

/// @brief Method HasPendingTasks addr 0x2cd4ca4 size 0x60 virtual false final false
inline bool HasPendingTasks() ;

/// @brief Method InitializeSynchronizationContext addr 0x2cd4d04 size 0x7c virtual false final false
static inline void InitializeSynchronizationContext() ;

/// @brief Method ExecuteTasks addr 0x2cd4d80 size 0x64 virtual false final false
static inline void ExecuteTasks() ;

/// @brief Method ExecutePendingTasks addr 0x2cd4de4 size 0xf0 virtual false final false
static inline bool ExecutePendingTasks(int64_t  millisecondsTimeout) ;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext(UnitySynchronizationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext(UnitySynchronizationContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnitySynchronizationContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnitySynchronizationContext, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::UnitySynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnitySynchronizationContext*, "UnityEngine", "UnitySynchronizationContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__UnitySynchronizationContext__WorkRequest, "UnityEngine", "UnitySynchronizationContext/WorkRequest");
