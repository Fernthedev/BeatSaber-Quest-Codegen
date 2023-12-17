#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformancePresetHelper)
namespace GlobalNamespace {
struct __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3;
}
namespace GlobalNamespace {
class __PerformancePresetHelper____c;
}
namespace GlobalNamespace {
class PerformancePreset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___GetPerformancePresetAsync_d__5;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6;
}
namespace UnityEngine {
class TextAsset;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformancePresetHelper;
}
namespace GlobalNamespace {
class __PerformancePresetHelper____c;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___GetPerformancePresetAsync_d__5;
}
namespace GlobalNamespace {
struct __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformancePresetHelper);
MARK_REF_PTR_T(::GlobalNamespace::__PerformancePresetHelper____c);
MARK_VAL_T(::GlobalNamespace::__PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3);
MARK_VAL_T(::GlobalNamespace::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6);
MARK_VAL_T(::GlobalNamespace::__PerformancePresetHelper___GetPerformancePresetAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4446))
// CS Name: ::PerformancePresetHelper::<>c*
class CORDL_TYPE __PerformancePresetHelper____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__PerformancePresetHelper____c*  value) ;

static inline ::GlobalNamespace::__PerformancePresetHelper____c* getStaticF___9() ;

static inline void setStaticF___9__3_0(::System::Action_1<::UnityEngine::TextAsset*>*  value) ;

static inline ::System::Action_1<::UnityEngine::TextAsset*>* getStaticF___9__3_0() ;

static inline void setStaticF___9__5_0(::System::Action_1<::UnityEngine::TextAsset*>*  value) ;

static inline ::System::Action_1<::UnityEngine::TextAsset*>* getStaticF___9__5_0() ;

static inline ::GlobalNamespace::__PerformancePresetHelper____c* New_ctor() ;

/// @brief Method .ctor addr 0x23506f8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetAllPresetsForPlatformAsync>b__3_0 addr 0x2350700 size 0x4 virtual false final false
inline void _GetAllPresetsForPlatformAsync_b__3_0(::UnityEngine::TextAsset*  _) ;

/// @brief Method <GetPerformancePresetAsync>b__5_0 addr 0x2350704 size 0x4 virtual false final false
inline void _GetPerformancePresetAsync_b__5_0(::UnityEngine::TextAsset*  _) ;

// Ctor Parameters [CppParam { name: "", ty: "__PerformancePresetHelper____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PerformancePresetHelper____c(__PerformancePresetHelper____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PerformancePresetHelper____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PerformancePresetHelper____c(__PerformancePresetHelper____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PerformancePresetHelper____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__3_0

// Static field <>9__5_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformancePresetHelper____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetAllPresetsForPlatformAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4447))
// CS Name: ::PerformancePresetHelper::<GetAllPresetsForPlatformAsync>d__3
struct CORDL_TYPE __PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*>  __t__builder;

/// @brief Field <keys>5__2 offset 0x20
 __declspec(property(get=__get__keys_5__2, put=__set__keys_5__2)) ::System::Collections::Generic::List_1<::StringW>*  _keys_5__2;

/// @brief Field <handle>5__3 offset 0x28
 __declspec(property(get=__get__handle_5__3, put=__set__handle_5__3)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  _handle_5__3;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*> const& __get___t__builder() const;

constexpr void __set__keys_5__2(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__keys_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__keys_5__2() const;

constexpr void __set__handle_5__3(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>& __get__handle_5__3() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*> const& __get__handle_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2350708 size 0xa44 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x235114c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*>", modifiers: "", def_value: None }, CppParam { name: "_keys_5__2", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "_handle_5__3", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>", modifiers: "", def_value: None }]
constexpr __PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*>  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  _keys_5__2, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  _handle_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<IsPerformancePresetAvailableAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4448))
// CS Name: ::PerformancePresetHelper::<IsPerformancePresetAvailableAsync>d__4
struct CORDL_TYPE __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field presetKey offset 0x20
 __declspec(property(get=__get_presetKey, put=__set_presetKey)) ::StringW  presetKey;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set_presetKey(::StringW  value) ;

constexpr ::StringW& __get_presetKey() ;

constexpr ::StringW const& __get_presetKey() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23511a4 size 0x454 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23515f8 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "presetKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>", modifiers: "", def_value: None }]
constexpr __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  presetKey, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetPerformancePresetAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4449))
// CS Name: ::PerformancePresetHelper::<GetPerformancePresetAsync>d__5
struct CORDL_TYPE __PerformancePresetHelper___GetPerformancePresetAsync_d__5 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PerformancePreset*>  __t__builder;

/// @brief Field presetKey offset 0x20
 __declspec(property(get=__get_presetKey, put=__set_presetKey)) ::StringW  presetKey;

/// @brief Field <keys>5__2 offset 0x28
 __declspec(property(get=__get__keys_5__2, put=__set__keys_5__2)) ::System::Collections::Generic::List_1<::StringW>*  _keys_5__2;

/// @brief Field <handle>5__3 offset 0x30
 __declspec(property(get=__get__handle_5__3, put=__set__handle_5__3)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  _handle_5__3;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PerformancePreset*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PerformancePreset*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PerformancePreset*> const& __get___t__builder() const;

constexpr void __set_presetKey(::StringW  value) ;

constexpr ::StringW& __get_presetKey() ;

constexpr ::StringW const& __get_presetKey() const;

constexpr void __set__keys_5__2(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__keys_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__keys_5__2() const;

constexpr void __set__handle_5__3(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>& __get__handle_5__3() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*> const& __get__handle_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2351650 size 0x6a8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2351cf8 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: None }, CppParam { name: "presetKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_keys_5__2", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "_handle_5__3", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>", modifiers: "", def_value: None }]
constexpr __PerformancePresetHelper___GetPerformancePresetAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PerformancePreset*>  __t__builder, ::StringW  presetKey, ::System::Collections::Generic::List_1<::StringW>*  _keys_5__2, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  _handle_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::TextAsset*>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformancePresetHelper___GetPerformancePresetAsync_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformancePresetHelper___GetPerformancePresetAsync_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformancePresetHelper___GetPerformancePresetAsync_d__5, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetDefaultPerformancePresetAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4450))
// CS Name: ::PerformancePresetHelper::<GetDefaultPerformancePresetAsync>d__6
struct CORDL_TYPE __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __t__builder;

/// @brief Field <resourceLocations>5__2 offset 0x20
 __declspec(property(get=__get__resourceLocations_5__2, put=__set__resourceLocations_5__2)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  _resourceLocations_5__2;

/// @brief Field <presetKey>5__3 offset 0x28
 __declspec(property(get=__get__presetKey_5__3, put=__set__presetKey_5__3)) ::StringW  _presetKey_5__3;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  __u__1;

/// @brief Field <>u__2 offset 0x38
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>> const& __get___t__builder() const;

constexpr void __set__resourceLocations_5__2(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  value) ;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* __get__resourceLocations_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> __get__resourceLocations_5__2() const;

constexpr void __set__presetKey_5__3(::StringW  value) ;

constexpr ::StringW& __get__presetKey_5__3() ;

constexpr ::StringW const& __get__presetKey_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x2351d50 size 0x70c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x235245c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "", def_value: None }, CppParam { name: "_resourceLocations_5__2", ty: "::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*", modifiers: "", def_value: None }, CppParam { name: "_presetKey_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: None }]
constexpr __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __t__builder, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  _resourceLocations_5__2, ::StringW  _presetKey_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PerformancePresetHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4451))
// CS Name: ::PerformancePresetHelper*
class CORDL_TYPE PerformancePresetHelper : public ::System::Object {
public:
// Declarations
using _GetDefaultPerformancePresetAsync_d__6 = ::GlobalNamespace::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6;

using _GetPerformancePresetAsync_d__5 = ::GlobalNamespace::__PerformancePresetHelper___GetPerformancePresetAsync_d__5;

using _IsPerformancePresetAvailableAsync_d__4 = ::GlobalNamespace::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4;

using _GetAllPresetsForPlatformAsync_d__3 = ::GlobalNamespace::__PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3;

using __c = ::GlobalNamespace::__PerformancePresetHelper____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kCustomPresetKey offset 0x0
static constexpr ::ConstString  kCustomPresetKey{u"Custom"};

/// @brief Field kDefaultPresetKey offset 0x0
static constexpr ::ConstString  kDefaultPresetKey{u"PlatformDefaultPerformancePreset"};

/// @brief Field kPerformancePresetKey offset 0x0
static constexpr ::ConstString  kPerformancePresetKey{u"PerformancePreset"};

/// @brief Method GetAllPresetsForPlatformAsync addr 0x2350408 size 0xe8 virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::PerformancePreset*>*>* GetAllPresetsForPlatformAsync() ;

/// @brief Method IsPerformancePresetAvailableAsync addr 0x23504f0 size 0xf8 virtual false final false
static inline ::System::Threading::Tasks::Task_1<bool>* IsPerformancePresetAvailableAsync(::StringW  presetKey) ;

/// @brief Method GetPerformancePresetAsync addr 0x2350280 size 0xf8 virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PerformancePreset*>* GetPerformancePresetAsync(::StringW  presetKey) ;

/// @brief Method GetDefaultPerformancePresetAsync addr 0x235019c size 0xe4 virtual false final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>* GetDefaultPerformancePresetAsync() ;

/// @brief Method GetPerformancePlatform addr 0x23505e8 size 0xa4 virtual false final false
static inline ::StringW GetPerformancePlatform() ;

static inline ::GlobalNamespace::PerformancePresetHelper* New_ctor() ;

/// @brief Method .ctor addr 0x235068c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PerformancePresetHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformancePresetHelper(PerformancePresetHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformancePresetHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformancePresetHelper(PerformancePresetHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PerformancePresetHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformancePresetHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformancePresetHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformancePresetHelper*, "", "PerformancePresetHelper");
NEED_NO_BOX(::GlobalNamespace::__PerformancePresetHelper____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformancePresetHelper____c*, "", "PerformancePresetHelper/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformancePresetHelper___GetAllPresetsForPlatformAsync_d__3, "", "PerformancePresetHelper/<GetAllPresetsForPlatformAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__6, "", "PerformancePresetHelper/<GetDefaultPerformancePresetAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformancePresetHelper___GetPerformancePresetAsync_d__5, "", "PerformancePresetHelper/<GetPerformancePresetAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__4, "", "PerformancePresetHelper/<IsPerformancePresetAvailableAsync>d__4");
