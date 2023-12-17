#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
struct __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
MARK_VAL_T(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6);
// Type: ::<BeforeScenesWillBeActivatedAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6066))
// CS Name: ::LevelScenesTransitionSetupDataSO::<BeforeScenesWillBeActivatedAsync>d__6
struct CORDL_TYPE __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelScenesTransitionSetupDataSO*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::LevelScenesTransitionSetupDataSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelScenesTransitionSetupDataSO*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x231de40 size 0x188 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x231dfc8 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelScenesTransitionSetupDataSO*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::LevelScenesTransitionSetupDataSO*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6067))
// CS Name: ::LevelScenesTransitionSetupDataSO*
class CORDL_TYPE LevelScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
using _BeforeScenesWillBeActivatedAsync_d__6 = ::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO)]{};

/// @brief Field <gameplayCoreSceneSetupData>k__BackingField offset 0x30
 __declspec(property(get=__get__gameplayCoreSceneSetupData_k__BackingField, put=__set__gameplayCoreSceneSetupData_k__BackingField)) ::GlobalNamespace::GameplayCoreSceneSetupData*  _gameplayCoreSceneSetupData_k__BackingField;

 __declspec(property(get=get_transformedBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  transformedBeatmapData;

 __declspec(property(get=get_gameplayCoreSceneSetupData, put=set_gameplayCoreSceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData*  gameplayCoreSceneSetupData;

constexpr void __set__gameplayCoreSceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData*  value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* __get__gameplayCoreSceneSetupData_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> __get__gameplayCoreSceneSetupData_k__BackingField() const;

/// @brief Method get_transformedBeatmapData addr 0x231dd44 size 0x1c virtual false final false
inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData() ;

/// @brief Method get_gameplayCoreSceneSetupData addr 0x231dd60 size 0x8 virtual false final false
inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_gameplayCoreSceneSetupData() ;

/// @brief Method set_gameplayCoreSceneSetupData addr 0x231dd68 size 0x8 virtual false final false
inline void set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value) ;

/// @brief Method BeforeScenesWillBeActivatedAsync addr 0x231dd70 size 0xc8 virtual true final false
inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync() ;

static inline ::GlobalNamespace::LevelScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x231de38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelScenesTransitionSetupDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelScenesTransitionSetupDataSO*, "", "LevelScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, "", "LevelScenesTransitionSetupDataSO/<BeforeScenesWillBeActivatedAsync>d__6");
