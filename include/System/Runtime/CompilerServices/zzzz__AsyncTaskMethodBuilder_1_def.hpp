#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncTaskMethodBuilder_1)
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
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
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
class Object;
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
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct AsyncTaskMethodBuilder_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct AsyncTaskMethodBuilder_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<bool>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<int32_t>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<int64_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1);
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 6145 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* GetTaskForResult(::System::ValueTuple_2<T1_cordlgen_0,int64_t>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 5059 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* GetTaskForResult(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 1124 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* GetTaskForResult(::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 1123 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* GetTaskForResult(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 974 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<TResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<TResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForResult(TResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<TResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 906 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* GetTaskForResult(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 905 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* GetTaskForResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 904 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* GetTaskForResult(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 900 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::VoidTaskResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* GetTaskForResult(::System::Threading::Tasks::VoidTaskResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 893 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::MultiplayerAvatarsData  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* GetTaskForResult(::GlobalNamespace::MultiplayerAvatarsData  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 882 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::GetAssetBundleFileResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetTaskForResult(::GlobalNamespace::GetAssetBundleFileResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 876 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::AuthenticationToken  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetTaskForResult(::GlobalNamespace::AuthenticationToken  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 868 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Nullable_1<uint32_t>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* GetTaskForResult(::System::Nullable_1<uint32_t>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 867 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Nullable_1<int32_t>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* GetTaskForResult(::System::Nullable_1<int32_t>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 333 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<int64_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<int64_t>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int64_t>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<int64_t>*  value) ;

static inline ::System::Threading::Tasks::Task_1<int64_t>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int64_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int64_t>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int64_t>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(int64_t  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<int64_t>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int64_t>* GetTaskForResult(int64_t  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int64_t>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<int64_t>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<bool> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<bool>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<bool>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(bool  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<bool>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<bool>* GetTaskForResult(bool  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<bool>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 102 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::ValueTuple_2<bool,T2_cordlgen_0>  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* GetTaskForResult(::System::ValueTuple_2<bool,T2_cordlgen_0>  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<int32_t>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int32_t>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(int32_t  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<int32_t>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<int32_t>* GetTaskForResult(int32_t  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<int32_t>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 95 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* GetTaskForResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 2 })
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_coreState offset 0x0
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<TResult>*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TResult>*  Task;

static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_defaultResultTask() ;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_m_task() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::System::Threading::Tasks::Task_1<TResult>*  completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForResult(TResult  result) ;

// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task_1<TResult>*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder_1()  = default;


// Fields

// Static field s_defaultResultTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1");
