#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestGraphicSettingsViewController)
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
class PerformancePreset;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestGraphicSettingsViewController;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestGraphicSettingsViewController);
MARK_VAL_T(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4);
// Type: ::<Initialize120HzToggleAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5757))
// CS Name: ::QuestGraphicSettingsViewController::<Initialize120HzToggleAsync>d__4
struct CORDL_TYPE __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::QuestGraphicSettingsViewController*  __4__this;

/// @brief Field firstActivation offset 0x30
 __declspec(property(get=__get_firstActivation, put=__set_firstActivation)) bool  firstActivation;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::QuestGraphicSettingsViewController*  value) ;

constexpr ::GlobalNamespace::QuestGraphicSettingsViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuestGraphicSettingsViewController*> __get___4__this() const;

constexpr void __set_firstActivation(bool  value) ;

constexpr bool& __get_firstActivation() ;

constexpr bool const& __get_firstActivation() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22daa9c size 0x3b8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22dae54 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::QuestGraphicSettingsViewController*", modifiers: "", def_value: None }, CppParam { name: "firstActivation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::QuestGraphicSettingsViewController*  __4__this, bool  firstActivation, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Handle120HzToggleValueChangedAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5758))
// CS Name: ::QuestGraphicSettingsViewController::<Handle120HzToggleValueChangedAsync>d__5
struct CORDL_TYPE __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::QuestGraphicSettingsViewController*  __4__this;

/// @brief Field newState offset 0x30
 __declspec(property(get=__get_newState, put=__set_newState)) bool  newState;

/// @brief Field <prevPerformancePresetKey>5__2 offset 0x38
 __declspec(property(get=__get__prevPerformancePresetKey_5__2, put=__set__prevPerformancePresetKey_5__2)) ::StringW  _prevPerformancePresetKey_5__2;

/// @brief Field <prevTargetFramerate>5__3 offset 0x40
 __declspec(property(get=__get__prevTargetFramerate_5__3, put=__set__prevTargetFramerate_5__3)) float_t  _prevTargetFramerate_5__3;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  __u__1;

/// @brief Field <>u__2 offset 0x50
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::QuestGraphicSettingsViewController*  value) ;

constexpr ::GlobalNamespace::QuestGraphicSettingsViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuestGraphicSettingsViewController*> __get___4__this() const;

constexpr void __set_newState(bool  value) ;

constexpr bool& __get_newState() ;

constexpr bool const& __get_newState() const;

constexpr void __set__prevPerformancePresetKey_5__2(::StringW  value) ;

constexpr ::StringW& __get__prevPerformancePresetKey_5__2() ;

constexpr ::StringW const& __get__prevPerformancePresetKey_5__2() const;

constexpr void __set__prevTargetFramerate_5__3(float_t  value) ;

constexpr float_t& __get__prevTargetFramerate_5__3() ;

constexpr float_t const& __get__prevTargetFramerate_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x22dae60 size 0x724 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22db584 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::QuestGraphicSettingsViewController*", modifiers: "", def_value: None }, CppParam { name: "newState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_prevPerformancePresetKey_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_prevTargetFramerate_5__3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "", def_value: None }]
constexpr __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::QuestGraphicSettingsViewController*  __4__this, bool  newState, ::StringW  _prevPerformancePresetKey_5__2, float_t  _prevTargetFramerate_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::QuestGraphicSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5753))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5759))
// CS Name: ::QuestGraphicSettingsViewController*
class CORDL_TYPE QuestGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
// Declarations
using _Handle120HzToggleValueChangedAsync_d__5 = ::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;

using _Initialize120HzToggleAsync_d__4 = ::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::GlobalNamespace::GraphicSettingsViewController)]{};

/// @brief Field k120HzPerformancePreset offset 0x0
static constexpr ::ConstString  k120HzPerformancePreset{u"Framerate"};

/// @brief Field _120HzMode offset 0x78
 __declspec(property(get=__get__120HzMode, put=__set__120HzMode)) ::UnityEngine::UI::Toggle*  _120HzMode;

/// @brief Field _stinsonOnlyEntries offset 0x80
 __declspec(property(get=__get__stinsonOnlyEntries, put=__set__stinsonOnlyEntries)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  _stinsonOnlyEntries;

constexpr void __set__120HzMode(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__120HzMode() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__120HzMode() const;

constexpr void __set__stinsonOnlyEntries(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get__stinsonOnlyEntries() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get__stinsonOnlyEntries() const;

/// @brief Method DidActivate addr 0x22da840 size 0x10c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method Initialize120HzToggleAsync addr 0x22da94c size 0xa0 virtual false final false
inline void Initialize120HzToggleAsync(bool  firstActivation) ;

/// @brief Method Handle120HzToggleValueChangedAsync addr 0x22da9ec size 0xa8 virtual false final false
inline void Handle120HzToggleValueChangedAsync(bool  newState) ;

static inline ::GlobalNamespace::QuestGraphicSettingsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22daa94 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuestGraphicSettingsViewController(QuestGraphicSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuestGraphicSettingsViewController(QuestGraphicSettingsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QuestGraphicSettingsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestGraphicSettingsViewController, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestGraphicSettingsViewController*, "", "QuestGraphicSettingsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, "", "QuestGraphicSettingsViewController/<Handle120HzToggleValueChangedAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, "", "QuestGraphicSettingsViewController/<Initialize120HzToggleAsync>d__4");
