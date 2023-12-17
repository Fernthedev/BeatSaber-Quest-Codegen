#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable_1)
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
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
class Object;
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
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::System::Nullable_1<int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::System::Nullable_1<uint32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct ConfiguredTaskAwaitable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
struct ConfiguredTaskAwaitable_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
struct ConfiguredTaskAwaitable_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct ConfiguredTaskAwaitable_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
struct ConfiguredTaskAwaitable_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct ConfiguredTaskAwaitable_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct ConfiguredTaskAwaitable_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<bool>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<int32_t>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredTaskAwaitable_1<int64_t>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1);
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter);
// Type: ::ConfiguredTaskAwaiter
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 6145 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,int64_t> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 5069 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 5059 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 4231 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarData GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 1124 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 1123 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 974 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<TResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<TResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 906 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 905 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 904 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 900 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::VoidTaskResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 893 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerAvatarsData GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 882 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::GetAssetBundleFileResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 876 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 868 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<uint32_t> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 867 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<int32_t> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 797 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 333 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<int64_t>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int64_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int64_t>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int64_t>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int64_t>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<int64_t>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 105 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<bool>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<bool>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<bool>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 102 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 98 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<int32_t>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int32_t>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<int32_t>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 95 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 2 })
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task_1<TResult>*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<TResult>*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 6145 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 5069 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 5059 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 4231 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::MultiplayerAvatarData> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarData>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 1124 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 1123 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 974 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 906 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 905 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 904 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 900 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::Threading::Tasks::VoidTaskResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::VoidTaskResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 893 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::MultiplayerAvatarsData> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::MultiplayerAvatarsData>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 882 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::GetAssetBundleFileResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 876 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::GlobalNamespace::AuthenticationToken>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 868 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::Nullable_1<uint32_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<uint32_t>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 867 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::Nullable_1<int32_t>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 797 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 333 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<int64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int64_t>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int64_t>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 105 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<bool> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<bool>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 102 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_2<bool,T2_cordlgen_0>>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 98 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int32_t>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 95 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 2 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TResult>*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter");
