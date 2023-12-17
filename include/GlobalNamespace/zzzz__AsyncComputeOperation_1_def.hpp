#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncComputeOperation_1)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class AsyncComputeOperation_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class AsyncComputeOperation_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncComputeOperation_1);
// Type: ::AsyncComputeOperation`1
// Type: ::AsyncComputeOperation`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12680)), TypeDefinitionIndex(TypeDefinitionIndex(12679))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12680), inst: 2 })
// CS Name: ::AsyncComputeOperation`1<T>*
class CORDL_TYPE AsyncComputeOperation_1<T> : public ::GlobalNamespace::AsyncComputeOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::AsyncComputeOperation)]{};

/// @brief Field _tcs offset 0x20
 __declspec(property(get=__get__tcs, put=__set__tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  _tcs;

 __declspec(property(get=get_task)) ::System::Threading::Tasks::Task_1<T>*  task;

constexpr void __set__tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* __get__tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> __get__tcs() const;

/// @brief Method get_task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<T>* get_task() ;

static inline ::GlobalNamespace::AsyncComputeOperation_1<T>* New_ctor(int32_t  timeoutMs) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  timeoutMs) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Execute(bool  disposed) ;

/// @brief Method IsValidRequest addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValidRequest() ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(T  computeResult) ;

/// @brief Method Cancel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Cancel() ;

/// @brief Method Fail addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Fail(::System::Exception*  ex) ;

/// @brief Method Compute addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Compute() ;

/// @brief Method Finally addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Finally() ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncComputeOperation_1(AsyncComputeOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncComputeOperation_1(AsyncComputeOperation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncComputeOperation_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncComputeOperation_1, "", "AsyncComputeOperation`1");
