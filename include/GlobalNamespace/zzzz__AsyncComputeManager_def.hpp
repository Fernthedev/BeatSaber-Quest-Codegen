#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncComputeManager)
namespace System::Threading {
class Thread;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Concurrent {
template<typename T>
class BlockingCollection_1;
}
namespace GlobalNamespace {
class IAsyncComputeManager;
}
namespace GlobalNamespace {
template<typename T>
class AsyncComputeOperation_1;
}
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncComputeManager);
// Type: ::AsyncComputeManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12678))
// CS Name: ::AsyncComputeManager*
class CORDL_TYPE AsyncComputeManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _asyncComputeRequests offset 0x10
 __declspec(property(get=__get__asyncComputeRequests, put=__set__asyncComputeRequests)) ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*  _asyncComputeRequests;

/// @brief Field _computeThread offset 0x18
 __declspec(property(get=__get__computeThread, put=__set__computeThread)) ::System::Threading::Thread*  _computeThread;

/// @brief Field _disposed offset 0x20
 __declspec(property(get=__get__disposed, put=__set__disposed)) bool  _disposed;

/// @brief Convert operator to "::GlobalNamespace::IAsyncComputeManager"
constexpr operator  ::GlobalNamespace::IAsyncComputeManager*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__asyncComputeRequests(::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*  value) ;

constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* __get__asyncComputeRequests() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*> __get__asyncComputeRequests() const;

constexpr void __set__computeThread(::System::Threading::Thread*  value) ;

constexpr ::System::Threading::Thread* __get__computeThread() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> __get__computeThread() const;

constexpr void __set__disposed(bool  value) ;

constexpr bool& __get__disposed() ;

constexpr bool const& __get__disposed() const;

static inline ::GlobalNamespace::AsyncComputeManager* New_ctor() ;

/// @brief Method .ctor addr 0xe28f58 size 0x140 virtual false final false
inline void _ctor() ;

/// @brief Method Dispose addr 0xe29098 size 0x68 virtual true final true
inline void Dispose() ;

/// @brief Method BeginOperation addr 0xe29100 size 0x58 virtual true final true
inline void BeginOperation(::GlobalNamespace::AsyncComputeOperation*  operation) ;

/// @brief Method BeginOperation addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>*  operation) ;

/// @brief Method ComputeThreadRun addr 0xe29158 size 0x160 virtual false final false
inline void ComputeThreadRun() ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncComputeManager(AsyncComputeManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncComputeManager(AsyncComputeManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncComputeManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncComputeManager, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeManager*, "", "AsyncComputeManager");
