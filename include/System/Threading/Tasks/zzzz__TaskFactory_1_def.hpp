#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskFactory_1)
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
template<typename TResult,typename TInstance>
class __TaskFactory_1__FromAsyncTrimPromise_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading::Tasks {
template<typename TResult,typename TArg1,typename TArg2>
class __TaskFactory_1____c__DisplayClass41_0_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading::Tasks {
template<typename TResult,typename TArg1>
class __TaskFactory_1____c__DisplayClass38_0_1;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __TaskFactory_1____c__DisplayClass35_0;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
class Object;
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
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class TaskFactory_1;
}
namespace System::Threading::Tasks {
template<typename TResult,typename TInstance>
class __TaskFactory_1__FromAsyncTrimPromise_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __TaskFactory_1____c__DisplayClass35_0;
}
namespace System::Threading::Tasks {
template<typename TResult,typename TArg1>
class __TaskFactory_1____c__DisplayClass38_0_1;
}
namespace System::Threading::Tasks {
template<typename TResult,typename TArg1,typename TArg2>
class __TaskFactory_1____c__DisplayClass41_0_2;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::System::Nullable_1<uint32_t>>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
class TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class TaskFactory_1<TResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class TaskFactory_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class TaskFactory_1<int64_t>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TInstance>
class __TaskFactory_1__FromAsyncTrimPromise_1<::System::Threading::Tasks::VoidTaskResult,TInstance>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TInstance>
class __TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TInstance>
class __TaskFactory_1__FromAsyncTrimPromise_1<int32_t,TInstance>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<uint32_t>>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
class __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __TaskFactory_1____c__DisplayClass35_0<TResult>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class __TaskFactory_1____c__DisplayClass35_0<TResult>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<bool>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class __TaskFactory_1____c__DisplayClass35_0<int64_t>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TArg1>
class __TaskFactory_1____c__DisplayClass38_0_1<::System::Threading::Tasks::VoidTaskResult,TArg1>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TArg1>
class __TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TArg1,::il2cpp_utils::il2cpp_reference_type TArg2>
class __TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TArg1>
class __TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult,TArg1,int32_t>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TArg1,::il2cpp_utils::il2cpp_reference_type TArg2>
class __TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskFactory_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2);
// Type: ::FromAsyncTrimPromise`1
// Type: ::<>c__DisplayClass35_0
// Type: ::<>c__DisplayClass38_0`1
// Type: ::<>c__DisplayClass41_0`2
// Type: System.Threading.Tasks::TaskFactory`1
// Type: ::FromAsyncTrimPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TInstance>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2775)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5117 }), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2775), inst: 6146 })
// CS Name: ::TaskFactory`1::FromAsyncTrimPromise`1<TResult,TInstance>*
class CORDL_TYPE __TaskFactory_1__FromAsyncTrimPromise_1<::System::Threading::Tasks::VoidTaskResult,TInstance> : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>)]{};

/// @brief Field m_thisRef offset 0x58
 __declspec(property(get=__get_m_thisRef, put=__set_m_thisRef)) TInstance  m_thisRef;

/// @brief Field m_endMethod offset 0x60
 __declspec(property(get=__get_m_endMethod, put=__set_m_endMethod)) ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  m_endMethod;

static inline void setStaticF_s_completeFromAsyncResult(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_s_completeFromAsyncResult() ;

constexpr void __set_m_thisRef(TInstance  value) ;

constexpr TInstance& __get_m_thisRef() ;

constexpr TInstance const& __get_m_thisRef() const;

constexpr void __set_m_endMethod(::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* __get_m_endMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*> __get_m_endMethod() const;

static inline ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::Threading::Tasks::VoidTaskResult,TInstance>* New_ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endMethod) ;

/// @brief Method CompleteFromAsyncResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void CompleteFromAsyncResult(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endMethod, ::System::IAsyncResult*  asyncResult, bool  requiresSynchronization) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1__FromAsyncTrimPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1__FromAsyncTrimPromise_1(__TaskFactory_1__FromAsyncTrimPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1__FromAsyncTrimPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1__FromAsyncTrimPromise_1(__TaskFactory_1__FromAsyncTrimPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1__FromAsyncTrimPromise_1()  = default;
public:


// Fields

// Static field s_completeFromAsyncResult


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::FromAsyncTrimPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TInstance>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5117 }), TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2775))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2775), inst: 1610 })
// CS Name: ::TaskFactory`1::FromAsyncTrimPromise`1<TResult,TInstance>*
class CORDL_TYPE __TaskFactory_1__FromAsyncTrimPromise_1<int32_t,TInstance> : public ::System::Threading::Tasks::Task_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<int32_t>)]{};

/// @brief Field m_thisRef offset 0x58
 __declspec(property(get=__get_m_thisRef, put=__set_m_thisRef)) TInstance  m_thisRef;

/// @brief Field m_endMethod offset 0x60
 __declspec(property(get=__get_m_endMethod, put=__set_m_endMethod)) ::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*  m_endMethod;

static inline void setStaticF_s_completeFromAsyncResult(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_s_completeFromAsyncResult() ;

constexpr void __set_m_thisRef(TInstance  value) ;

constexpr TInstance& __get_m_thisRef() ;

constexpr TInstance const& __get_m_thisRef() const;

constexpr void __set_m_endMethod(::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*  value) ;

constexpr ::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>* __get_m_endMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*> __get_m_endMethod() const;

static inline ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<int32_t,TInstance>* New_ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*  endMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*  endMethod) ;

/// @brief Method CompleteFromAsyncResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void CompleteFromAsyncResult(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*  endMethod, ::System::IAsyncResult*  asyncResult, bool  requiresSynchronization) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1__FromAsyncTrimPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1__FromAsyncTrimPromise_1(__TaskFactory_1__FromAsyncTrimPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1__FromAsyncTrimPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1__FromAsyncTrimPromise_1(__TaskFactory_1__FromAsyncTrimPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1__FromAsyncTrimPromise_1()  = default;
public:


// Fields

// Static field s_completeFromAsyncResult


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::FromAsyncTrimPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TInstance>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2775)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5117 }), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2775), inst: 81 })
// CS Name: ::TaskFactory`1::FromAsyncTrimPromise`1<TResult,TInstance>*
class CORDL_TYPE __TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance> : public ::System::Threading::Tasks::Task_1<TResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<TResult>)]{};

/// @brief Field m_thisRef offset 0x58
 __declspec(property(get=__get_m_thisRef, put=__set_m_thisRef)) TInstance  m_thisRef;

/// @brief Field m_endMethod offset 0x60
 __declspec(property(get=__get_m_endMethod, put=__set_m_endMethod)) ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  m_endMethod;

static inline void setStaticF_s_completeFromAsyncResult(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_s_completeFromAsyncResult() ;

constexpr void __set_m_thisRef(TInstance  value) ;

constexpr TInstance& __get_m_thisRef() ;

constexpr TInstance const& __get_m_thisRef() const;

constexpr void __set_m_endMethod(::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  value) ;

constexpr ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>* __get_m_endMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*> __get_m_endMethod() const;

static inline ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>* New_ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod) ;

/// @brief Method CompleteFromAsyncResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void CompleteFromAsyncResult(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod, ::System::IAsyncResult*  asyncResult, bool  requiresSynchronization) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1__FromAsyncTrimPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1__FromAsyncTrimPromise_1(__TaskFactory_1__FromAsyncTrimPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1__FromAsyncTrimPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1__FromAsyncTrimPromise_1(__TaskFactory_1__FromAsyncTrimPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1__FromAsyncTrimPromise_1()  = default;
public:


// Fields

// Static field s_completeFromAsyncResult


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 6145 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 5069 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 5059 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 4231 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 1124 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 1123 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 974 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<TResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,TResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 906 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 905 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 904 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 900 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::Threading::Tasks::VoidTaskResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::Threading::Tasks::VoidTaskResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 893 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarsData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 882 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 876 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::AuthenticationToken> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::AuthenticationToken>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 868 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<uint32_t>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<uint32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 867 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<int32_t>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 797 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 333 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<int64_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,int64_t>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<int64_t>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,int64_t>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,int64_t>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,int64_t>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<int64_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int64_t>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 105 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,bool>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<bool>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,bool>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,bool>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,bool>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 102 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 98 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,int32_t>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<int32_t>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,int32_t>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,int32_t>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,int32_t>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 95 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass35_0
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2776)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2776), inst: 2 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass35_0<TResult>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass35_0<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<TResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,TResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass35_0(__TaskFactory_1____c__DisplayClass35_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass35_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass38_0`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TArg1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2777)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2777), inst: 6146 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass38_0`1<TResult,TArg1>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass38_0_1<::System::Threading::Tasks::VoidTaskResult,TArg1> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::Threading::Tasks::VoidTaskResult,TArg1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass38_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass38_0_1(__TaskFactory_1____c__DisplayClass38_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass38_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass38_0_1(__TaskFactory_1____c__DisplayClass38_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass38_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass38_0`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TArg1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2777))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2777), inst: 81 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass38_0`1<TResult,TArg1>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<TResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,TResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass38_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass38_0_1(__TaskFactory_1____c__DisplayClass38_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass38_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass38_0_1(__TaskFactory_1____c__DisplayClass38_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass38_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass41_0`2
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TArg1,::il2cpp_utils::il2cpp_reference_type TArg2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2778))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2778), inst: 6148 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass41_0`2<TResult,TArg1,TArg2>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult,TArg1,TArg2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass41_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass41_0_2(__TaskFactory_1____c__DisplayClass41_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass41_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass41_0_2(__TaskFactory_1____c__DisplayClass41_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass41_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass41_0`2
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TArg1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2778)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2778), inst: 6147 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass41_0`2<TResult,TArg1,TArg2>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult,TArg1,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult,TArg1,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass41_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass41_0_2(__TaskFactory_1____c__DisplayClass41_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass41_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass41_0_2(__TaskFactory_1____c__DisplayClass41_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass41_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass41_0`2
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TArg1,::il2cpp_utils::il2cpp_reference_type TArg2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2778)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2778), inst: 5330 })
// CS Name: ::TaskFactory`1::<>c__DisplayClass41_0`2<TResult,TArg1,TArg2>*
class CORDL_TYPE __TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field endFunction offset 0x10
 __declspec(property(get=__get_endFunction, put=__set_endFunction)) ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction;

/// @brief Field endAction offset 0x18
 __declspec(property(get=__get_endAction, put=__set_endAction)) ::System::Action_1<::System::IAsyncResult*>*  endAction;

/// @brief Field promise offset 0x20
 __declspec(property(get=__get_promise, put=__set_promise)) ::System::Threading::Tasks::Task_1<TResult>*  promise;

constexpr void __set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value) ;

constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* __get_endFunction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IAsyncResult*,TResult>*> __get_endFunction() const;

constexpr void __set_endAction(::System::Action_1<::System::IAsyncResult*>*  value) ;

constexpr ::System::Action_1<::System::IAsyncResult*>* __get_endAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::IAsyncResult*>*> __get_endAction() const;

constexpr void __set_promise(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_promise() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_promise() const;

static inline ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromAsyncImpl>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromAsyncImpl_b__0(::System::IAsyncResult*  iar) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass41_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskFactory_1____c__DisplayClass41_0_2(__TaskFactory_1____c__DisplayClass41_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskFactory_1____c__DisplayClass41_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskFactory_1____c__DisplayClass41_0_2(__TaskFactory_1____c__DisplayClass41_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskFactory_1____c__DisplayClass41_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 6145 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::ValueTuple_2<T1_cordlgen_0,int64_t>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* StartNew(::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 5069 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 5059 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* StartNew(::System::Func_2<::System::Object*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 4231 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::MultiplayerAvatarData, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::MultiplayerAvatarData, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarData>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::MultiplayerAvatarData, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarData>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 1124 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* StartNew(::System::Func_2<::System::Object*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 1123 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* StartNew(::System::Func_2<::System::Object*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 974 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<TResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<TResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<TResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<TResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<TResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<TResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<TResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 906 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 905 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 904 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 900 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::Threading::Tasks::VoidTaskResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::Threading::Tasks::VoidTaskResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::Threading::Tasks::VoidTaskResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::Threading::Tasks::VoidTaskResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* StartNew(::System::Func_2<::System::Object*,::System::Threading::Tasks::VoidTaskResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 893 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::MultiplayerAvatarsData, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::MultiplayerAvatarsData, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::MultiplayerAvatarsData>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::MultiplayerAvatarsData, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::MultiplayerAvatarsData>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::MultiplayerAvatarsData>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 882 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::GetAssetBundleFileResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::GetAssetBundleFileResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::GetAssetBundleFileResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::GetAssetBundleFileResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::GetAssetBundleFileResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::GetAssetBundleFileResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 876 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::GlobalNamespace::AuthenticationToken> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::GlobalNamespace::AuthenticationToken, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::GlobalNamespace::AuthenticationToken, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::GlobalNamespace::AuthenticationToken>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::GlobalNamespace::AuthenticationToken, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* StartNew(::System::Func_2<::System::Object*,::GlobalNamespace::AuthenticationToken>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::GlobalNamespace::AuthenticationToken>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 868 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::Nullable_1<uint32_t>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::Nullable_1<uint32_t>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::Nullable_1<uint32_t>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<uint32_t>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::Nullable_1<uint32_t>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<uint32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* StartNew(::System::Func_2<::System::Object*,::System::Nullable_1<uint32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Nullable_1<uint32_t>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 867 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::Nullable_1<int32_t>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::Nullable_1<int32_t>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::Nullable_1<int32_t>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::Nullable_1<int32_t>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::Nullable_1<int32_t>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* StartNew(::System::Func_2<::System::Object*,::System::Nullable_1<int32_t>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::Nullable_1<int32_t>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 797 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* StartNew(::System::Func_2<::System::Object*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 333 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<int64_t> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<int64_t, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<int64_t, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<int64_t>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<int64_t, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<int64_t>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int64_t>* StartNew(::System::Func_2<::System::Object*,int64_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,int64_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<int64_t>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int64_t>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int64_t>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int64_t>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int64_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<int64_t>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int64_t>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<int64_t>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int64_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<int64_t>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int64_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<int64_t>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,int64_t>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 105 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<bool> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<bool, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<bool, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<bool>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<bool, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<bool>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* StartNew(::System::Func_2<::System::Object*,bool>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,bool>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<bool>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,bool>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<bool>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,bool>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<bool>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,bool>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<bool>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,bool>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<bool>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,bool>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<bool>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,bool>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 102 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::System::ValueTuple_2<bool,T2_cordlgen_0>, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::System::ValueTuple_2<bool,T2_cordlgen_0>, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::System::ValueTuple_2<bool,T2_cordlgen_0>>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::System::ValueTuple_2<bool,T2_cordlgen_0>, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* StartNew(::System::Func_2<::System::Object*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::System::ValueTuple_2<bool,T2_cordlgen_0>>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 98 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<int32_t> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<int32_t, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<int32_t, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<int32_t>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<int32_t, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<int32_t>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* StartNew(::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,int32_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<int32_t>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int32_t>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int32_t>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int32_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<int32_t>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int32_t>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<int32_t>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int32_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<int32_t>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,int32_t>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<int32_t>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,int32_t>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 95 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* StartNew(::System::Func_2<::System::Object*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2779)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2779), inst: 2 })
// CS Name: ::System.Threading.Tasks::TaskFactory`1<TResult>*
class CORDL_TYPE TaskFactory_1<TResult> : public ::System::Object {
public:
// Declarations
template<typename TArg1,typename TArg2>
using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2<TResult, TArg1, TArg2>;

template<typename TArg1>
using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1<TResult, TArg1>;

using __c__DisplayClass35_0 = ::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0<TResult>;

template<typename TInstance>
using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1<TResult, TInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_defaultCancellationToken offset 0x10
 __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken)) ::System::Threading::CancellationToken  m_defaultCancellationToken;

/// @brief Field m_defaultScheduler offset 0x18
 __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_defaultScheduler;

/// @brief Field m_defaultCreationOptions offset 0x20
 __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions  m_defaultCreationOptions;

/// @brief Field m_defaultContinuationOptions offset 0x24
 __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions  m_defaultContinuationOptions;

constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_defaultScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_defaultScheduler() const;

constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions() ;

constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method FromAsyncCoreLogic addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<TResult>*  promise, bool  requiresSynchronization) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endMethod, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<TResult>* FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endMethod, TArg1  arg1, ::System::Object*  state) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method FromAsyncTrim addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstance,typename TArgs>
static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskFactory_1(TaskFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskFactory_1(TaskFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskFactory_1, "System.Threading.Tasks", "TaskFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__TaskFactory_1__FromAsyncTrimPromise_1, "System.Threading.Tasks", "TaskFactory`1/FromAsyncTrimPromise`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass35_0, "System.Threading.Tasks", "TaskFactory`1/<>c__DisplayClass35_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass38_0_1, "System.Threading.Tasks", "TaskFactory`1/<>c__DisplayClass38_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__TaskFactory_1____c__DisplayClass41_0_2, "System.Threading.Tasks", "TaskFactory`1/<>c__DisplayClass41_0`2");
