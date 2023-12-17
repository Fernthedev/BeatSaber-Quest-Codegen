#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Task_1)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Delegate;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System {
template<typename T>
class Action_1;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredTaskAwaitable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskFactory_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __Task_1__TaskWhenAnyCast;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace GlobalNamespace {
template<typename TResult>
class __Task_1__TaskWhenAnyCast____c;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
class __Task_1__TaskWhenAnyCast____c;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __Task_1__TaskWhenAnyCast;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __Task_1__TaskWhenAnyCast____c<TResult>;
}
namespace GlobalNamespace {
template<>
class __Task_1__TaskWhenAnyCast____c<bool>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::Nullable_1<uint32_t>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
class Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class Task_1<TResult>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class Task_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<int64_t>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __Task_1__TaskWhenAnyCast<TResult>;
}
namespace System::Threading::Tasks {
template<>
class __Task_1__TaskWhenAnyCast<bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::Task_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__Task_1__TaskWhenAnyCast);
// Type: ::<>c
// Type: ::TaskWhenAnyCast
// Type: System.Threading.Tasks::Task`1
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2771)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2771), inst: 105 })
// CS Name: ::Task`1::TaskWhenAnyCast::<>c<TResult>*
class CORDL_TYPE __Task_1__TaskWhenAnyCast____c<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<bool>*  value) ;

static inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<bool>* getStaticF___9() ;

static inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* __cctor_b__1_0(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*  completed) ;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task_1__TaskWhenAnyCast____c(__Task_1__TaskWhenAnyCast____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task_1__TaskWhenAnyCast____c(__Task_1__TaskWhenAnyCast____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task_1__TaskWhenAnyCast____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2771)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2771), inst: 2 })
// CS Name: ::Task`1::TaskWhenAnyCast::<>c<TResult>*
class CORDL_TYPE __Task_1__TaskWhenAnyCast____c<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*  value) ;

static inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* getStaticF___9() ;

static inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* __cctor_b__1_0(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*  completed) ;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task_1__TaskWhenAnyCast____c(__Task_1__TaskWhenAnyCast____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task_1__TaskWhenAnyCast____c(__Task_1__TaskWhenAnyCast____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task_1__TaskWhenAnyCast____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TaskWhenAnyCast
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2772)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2772), inst: 105 })
// CS Name: ::Task`1::TaskWhenAnyCast<TResult>*
class CORDL_TYPE __Task_1__TaskWhenAnyCast<bool> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<bool>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*,::System::Threading::Tasks::Task_1<bool>*>*  value) ;

static inline ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*,::System::Threading::Tasks::Task_1<bool>*>* getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task_1__TaskWhenAnyCast(__Task_1__TaskWhenAnyCast && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task_1__TaskWhenAnyCast(__Task_1__TaskWhenAnyCast const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task_1__TaskWhenAnyCast()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::TaskWhenAnyCast
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2772))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2772), inst: 2 })
// CS Name: ::Task`1::TaskWhenAnyCast<TResult>*
class CORDL_TYPE __Task_1__TaskWhenAnyCast<TResult> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*,::System::Threading::Tasks::Task_1<TResult>*>*  value) ;

static inline ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*,::System::Threading::Tasks::Task_1<TResult>*>* getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Task_1__TaskWhenAnyCast(__Task_1__TaskWhenAnyCast && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Task_1__TaskWhenAnyCast(__Task_1__TaskWhenAnyCast const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Task_1__TaskWhenAnyCast()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 6145 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::ValueTuple_2<T1_cordlgen_0,int64_t>  m_result;

 __declspec(property(get=get_Result)) ::System::ValueTuple_2<T1_cordlgen_0,int64_t>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::ValueTuple_2<T1_cordlgen_0,int64_t>  ResultOnSuccess;

constexpr void __set_m_result(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,int64_t>& __get_m_result() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,int64_t> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(bool  canceled, ::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,int64_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,int64_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,int64_t> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5069 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  value) ;

constexpr ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult& __get_m_result() ;

constexpr ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(bool  canceled, ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Func_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5059 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  m_result;

 __declspec(property(get=get_Result)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  ResultOnSuccess;

constexpr void __set_m_result(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get_m_result() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(bool  canceled, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 4231 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::MultiplayerAvatarData> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::MultiplayerAvatarData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::MultiplayerAvatarData  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::MultiplayerAvatarData  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::MultiplayerAvatarData  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::MultiplayerAvatarData  value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarData& __get_m_result() ;

constexpr ::GlobalNamespace::MultiplayerAvatarData const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::GlobalNamespace::MultiplayerAvatarData  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::MultiplayerAvatarData  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(bool  canceled, ::GlobalNamespace::MultiplayerAvatarData  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::MultiplayerAvatarData  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Func_1<::GlobalNamespace::MultiplayerAvatarData>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::MultiplayerAvatarData>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::MultiplayerAvatarData>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::MultiplayerAvatarData  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::MultiplayerAvatarData  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarData get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarData get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarData GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarData> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::MultiplayerAvatarData> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 1124 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  m_result;

 __declspec(property(get=get_Result)) ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  ResultOnSuccess;

constexpr void __set_m_result(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  value) ;

constexpr ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>& __get_m_result() ;

constexpr ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(bool  canceled, ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Func_2<::System::Object*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Func_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 1123 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  m_result;

 __declspec(property(get=get_Result)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  ResultOnSuccess;

constexpr void __set_m_result(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  value) ;

constexpr ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>& __get_m_result() ;

constexpr ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(bool  canceled, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Func_2<::System::Object*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Func_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 974 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<TResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) TResult  m_result;

 __declspec(property(get=get_Result)) TResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) TResult  ResultOnSuccess;

constexpr void __set_m_result(TResult  value) ;

constexpr TResult& __get_m_result() ;

constexpr TResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<TResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TResult  result) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(bool  canceled, TResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, TResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Func_1<TResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<TResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<TResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(TResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(TResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 906 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  value) ;

constexpr ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult& __get_m_result() ;

constexpr ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(bool  canceled, ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Func_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 905 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  value) ;

constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult& __get_m_result() ;

constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(bool  canceled, ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Func_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 904 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  value) ;

constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult& __get_m_result() ;

constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(bool  canceled, ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Func_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 900 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::Threading::Tasks::VoidTaskResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::Threading::Tasks::VoidTaskResult  m_result;

 __declspec(property(get=get_Result)) ::System::Threading::Tasks::VoidTaskResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::Threading::Tasks::VoidTaskResult  ResultOnSuccess;

constexpr void __set_m_result(::System::Threading::Tasks::VoidTaskResult  value) ;

constexpr ::System::Threading::Tasks::VoidTaskResult& __get_m_result() ;

constexpr ::System::Threading::Tasks::VoidTaskResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Threading::Tasks::VoidTaskResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::VoidTaskResult  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(bool  canceled, ::System::Threading::Tasks::VoidTaskResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::Threading::Tasks::VoidTaskResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Func_2<::System::Object*,::System::Threading::Tasks::VoidTaskResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::Threading::Tasks::VoidTaskResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Func_1<::System::Threading::Tasks::VoidTaskResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::Threading::Tasks::VoidTaskResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::Threading::Tasks::VoidTaskResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::Threading::Tasks::VoidTaskResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::Threading::Tasks::VoidTaskResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::Threading::Tasks::VoidTaskResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::VoidTaskResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::VoidTaskResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::VoidTaskResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::VoidTaskResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::VoidTaskResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 893 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::MultiplayerAvatarsData> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::MultiplayerAvatarsData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::MultiplayerAvatarsData  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::MultiplayerAvatarsData  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::MultiplayerAvatarsData  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::MultiplayerAvatarsData  value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get_m_result() ;

constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::GlobalNamespace::MultiplayerAvatarsData  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::MultiplayerAvatarsData  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(bool  canceled, ::GlobalNamespace::MultiplayerAvatarsData  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::MultiplayerAvatarsData  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarsData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarsData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Func_1<::GlobalNamespace::MultiplayerAvatarsData>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::MultiplayerAvatarsData>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::MultiplayerAvatarsData>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarsData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::MultiplayerAvatarsData  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::MultiplayerAvatarsData  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarsData get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarsData get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarsData GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::MultiplayerAvatarsData> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 882 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::GetAssetBundleFileResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::GetAssetBundleFileResult  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::GetAssetBundleFileResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::GetAssetBundleFileResult  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::GetAssetBundleFileResult  value) ;

constexpr ::GlobalNamespace::GetAssetBundleFileResult& __get_m_result() ;

constexpr ::GlobalNamespace::GetAssetBundleFileResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::GlobalNamespace::GetAssetBundleFileResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::GetAssetBundleFileResult  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(bool  canceled, ::GlobalNamespace::GetAssetBundleFileResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::GetAssetBundleFileResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::GetAssetBundleFileResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::GetAssetBundleFileResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::GetAssetBundleFileResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::GetAssetBundleFileResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::GetAssetBundleFileResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::GetAssetBundleFileResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::GetAssetBundleFileResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::GetAssetBundleFileResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::GetAssetBundleFileResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 876 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::GlobalNamespace::AuthenticationToken> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::GlobalNamespace::AuthenticationToken>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::GlobalNamespace::AuthenticationToken  m_result;

 __declspec(property(get=get_Result)) ::GlobalNamespace::AuthenticationToken  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::GlobalNamespace::AuthenticationToken  ResultOnSuccess;

constexpr void __set_m_result(::GlobalNamespace::AuthenticationToken  value) ;

constexpr ::GlobalNamespace::AuthenticationToken& __get_m_result() ;

constexpr ::GlobalNamespace::AuthenticationToken const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::GlobalNamespace::AuthenticationToken  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::AuthenticationToken  result) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor(bool  canceled, ::GlobalNamespace::AuthenticationToken  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::GlobalNamespace::AuthenticationToken  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Func_2<::System::Object*,::GlobalNamespace::AuthenticationToken>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::GlobalNamespace::AuthenticationToken>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Func_1<::GlobalNamespace::AuthenticationToken>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::GlobalNamespace::AuthenticationToken>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::GlobalNamespace::AuthenticationToken>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::GlobalNamespace::AuthenticationToken>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::GlobalNamespace::AuthenticationToken  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::GlobalNamespace::AuthenticationToken  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::AuthenticationToken> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 868 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::Nullable_1<uint32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::Nullable_1<uint32_t>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::Nullable_1<uint32_t>  m_result;

 __declspec(property(get=get_Result)) ::System::Nullable_1<uint32_t>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::Nullable_1<uint32_t>  ResultOnSuccess;

constexpr void __set_m_result(::System::Nullable_1<uint32_t>  value) ;

constexpr ::System::Nullable_1<uint32_t>& __get_m_result() ;

constexpr ::System::Nullable_1<uint32_t> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<uint32_t>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<uint32_t>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Nullable_1<uint32_t>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Nullable_1<uint32_t>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor(bool  canceled, ::System::Nullable_1<uint32_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::Nullable_1<uint32_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Func_2<::System::Object*,::System::Nullable_1<uint32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::Nullable_1<uint32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Func_1<::System::Nullable_1<uint32_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::Nullable_1<uint32_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::Nullable_1<uint32_t>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::Nullable_1<uint32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::Nullable_1<uint32_t>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::Nullable_1<uint32_t>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<uint32_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<uint32_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<uint32_t> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<uint32_t>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Nullable_1<uint32_t>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 867 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::Nullable_1<int32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::Nullable_1<int32_t>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::Nullable_1<int32_t>  m_result;

 __declspec(property(get=get_Result)) ::System::Nullable_1<int32_t>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::Nullable_1<int32_t>  ResultOnSuccess;

constexpr void __set_m_result(::System::Nullable_1<int32_t>  value) ;

constexpr ::System::Nullable_1<int32_t>& __get_m_result() ;

constexpr ::System::Nullable_1<int32_t> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Nullable_1<int32_t>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Nullable_1<int32_t>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor(bool  canceled, ::System::Nullable_1<int32_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::Nullable_1<int32_t>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Func_2<::System::Object*,::System::Nullable_1<int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::Nullable_1<int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Func_1<::System::Nullable_1<int32_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::Nullable_1<int32_t>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::Nullable_1<int32_t>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::Nullable_1<int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::Nullable_1<int32_t>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::Nullable_1<int32_t>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<int32_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<int32_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<int32_t> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<int32_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Nullable_1<int32_t>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 797 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  m_result;

 __declspec(property(get=get_Result)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  ResultOnSuccess;

constexpr void __set_m_result(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& __get_m_result() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result) ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(bool  canceled, ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Func_2<::System::Object*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 333 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<int64_t> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<int64_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) int64_t  m_result;

 __declspec(property(get=get_Result)) int64_t  Result;

 __declspec(property(get=get_ResultOnSuccess)) int64_t  ResultOnSuccess;

constexpr void __set_m_result(int64_t  value) ;

constexpr int64_t& __get_m_result() ;

constexpr int64_t const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<int64_t>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<int64_t>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor(int64_t  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  result) ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor(bool  canceled, int64_t  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, int64_t  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor(::System::Func_2<::System::Object*,int64_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,int64_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor(::System::Func_1<int64_t>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<int64_t>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int64_t>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<int64_t>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int64_t>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,int64_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(int64_t  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(int64_t  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<int64_t>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int64_t> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int64_t>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int64_t>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 105 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<bool> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<bool>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) bool  m_result;

 __declspec(property(get=get_Result)) bool  Result;

 __declspec(property(get=get_ResultOnSuccess)) bool  ResultOnSuccess;

constexpr void __set_m_result(bool  value) ;

constexpr bool& __get_m_result() ;

constexpr bool const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<bool>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<bool>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor(bool  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  result) ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor(bool  canceled, bool  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, bool  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor(::System::Func_2<::System::Object*,bool>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,bool>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor(::System::Func_1<bool>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<bool>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<bool>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<bool>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<bool>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<bool>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,bool>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(bool  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(bool  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<bool>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<bool>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<bool>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 102 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::System::ValueTuple_2<bool,T2_cordlgen_0>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::System::ValueTuple_2<bool,T2_cordlgen_0>  m_result;

 __declspec(property(get=get_Result)) ::System::ValueTuple_2<bool,T2_cordlgen_0>  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::System::ValueTuple_2<bool,T2_cordlgen_0>  ResultOnSuccess;

constexpr void __set_m_result(::System::ValueTuple_2<bool,T2_cordlgen_0>  value) ;

constexpr ::System::ValueTuple_2<bool,T2_cordlgen_0>& __get_m_result() ;

constexpr ::System::ValueTuple_2<bool,T2_cordlgen_0> const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::ValueTuple_2<bool,T2_cordlgen_0>  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<bool,T2_cordlgen_0>  result) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(bool  canceled, ::System::ValueTuple_2<bool,T2_cordlgen_0>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::System::ValueTuple_2<bool,T2_cordlgen_0>  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Func_2<::System::Object*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Func_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::System::ValueTuple_2<bool,T2_cordlgen_0>  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::System::ValueTuple_2<bool,T2_cordlgen_0>  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 98 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<int32_t> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) int32_t  m_result;

 __declspec(property(get=get_Result)) int32_t  Result;

 __declspec(property(get=get_ResultOnSuccess)) int32_t  ResultOnSuccess;

constexpr void __set_m_result(int32_t  value) ;

constexpr int32_t& __get_m_result() ;

constexpr int32_t const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<int32_t>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<int32_t>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor(int32_t  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  result) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor(bool  canceled, int32_t  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, int32_t  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor(::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor(::System::Func_1<int32_t>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<int32_t>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int32_t>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<int32_t>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int32_t>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(int32_t  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(int32_t  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<int32_t>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int32_t> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int32_t>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int32_t>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 95 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  m_result;

 __declspec(property(get=get_Result)) ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  Result;

 __declspec(property(get=get_ResultOnSuccess)) ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  ResultOnSuccess;

constexpr void __set_m_result(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  value) ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse& __get_m_result() ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result) ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(bool  canceled, ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Func_2<::System::Object*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 2 })
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1<TResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_result offset 0x50
 __declspec(property(get=__get_m_result, put=__set_m_result)) TResult  m_result;

 __declspec(property(get=get_Result)) TResult  Result;

 __declspec(property(get=get_ResultOnSuccess)) TResult  ResultOnSuccess;

constexpr void __set_m_result(TResult  value) ;

constexpr TResult& __get_m_result() ;

constexpr TResult const& __get_m_result() const;

static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<TResult>*  value) ;

static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* getStaticF_s_defaultFactory() ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  options) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TResult  result) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(bool  canceled, TResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  canceled, TResult  result, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::CancellationToken  ct) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Func_1<TResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<TResult>*  valueSelector, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Delegate*  valueSelector, ::System::Object*  state, ::System::Threading::Tasks::Task*  parent, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_1<TResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task*  parent, ::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetResult(TResult  result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DangerousSetResult(TResult  result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResultCore(bool  waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*  continuationAction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*,TNewResult>*  continuationFunction, ::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Task_1(Task_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Task_1(Task_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Task_1()  = default;
public:


// Fields

// Static field s_defaultFactory


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c, "System.Threading.Tasks", "Task`1/TaskWhenAnyCast/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Task_1, "System.Threading.Tasks", "Task`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__Task_1__TaskWhenAnyCast, "System.Threading.Tasks", "Task`1/TaskWhenAnyCast");
