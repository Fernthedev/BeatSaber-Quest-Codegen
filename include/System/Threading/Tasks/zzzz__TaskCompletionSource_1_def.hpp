#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskCompletionSource_1)
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class TaskCompletionSource_1<TResult>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class TaskCompletionSource_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class TaskCompletionSource_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskCompletionSource_1);
// Type: System.Threading.Tasks::TaskCompletionSource`1
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2757)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 974 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<TResult>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TResult>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(TResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2757)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 882 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::GetAssetBundleFileResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::GetAssetBundleFileResult  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2757))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 797 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2757)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 333 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<int64_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<int64_t>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int64_t>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<int64_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int64_t>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int64_t>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int64_t>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int64_t>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int64_t>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(int64_t  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(int64_t  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2757))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 105 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<bool>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<bool>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(bool  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(bool  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2757))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 98 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<int32_t>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int32_t>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(int32_t  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(int32_t  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskCompletionSource`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2757))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2757), inst: 2 })
// CS Name: ::System.Threading.Tasks::TaskCompletionSource`1<TResult>*
class CORDL_TYPE TaskCompletionSource_1<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _task offset 0x10
 __declspec(property(get=__get__task, put=__set__task)) ::System::Threading::Tasks::Task_1<TResult>*  _task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TResult>*  Task;

constexpr void __set__task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get__task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get__task() const;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Object*  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* get_Task() ;

/// @brief Method SpinUntilCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(TResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCanceled() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskCompletionSource_1, "System.Threading.Tasks", "TaskCompletionSource`1");
