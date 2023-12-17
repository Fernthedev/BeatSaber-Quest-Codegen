#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmptyDifficultyBeatmap)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct __EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyDifficultyBeatmap;
}
namespace GlobalNamespace {
struct __EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24;
}
namespace GlobalNamespace {
struct __EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyDifficultyBeatmap);
MARK_VAL_T(::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24);
MARK_VAL_T(::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23);
// Type: ::<GetBeatmapDataBasicInfoAsync>d__23
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4388))
// CS Name: ::EmptyDifficultyBeatmap::<GetBeatmapDataBasicInfoAsync>d__23
struct CORDL_TYPE __EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::EmptyDifficultyBeatmap*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::EmptyDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::EmptyDifficultyBeatmap* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EmptyDifficultyBeatmap*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23480a0 size 0x220 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23482c0 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EmptyDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: None }]
constexpr __EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  __t__builder, ::GlobalNamespace::EmptyDifficultyBeatmap*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4389))
// CS Name: ::EmptyDifficultyBeatmap::<GetBeatmapDataAsync>d__24
struct CORDL_TYPE __EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::EmptyDifficultyBeatmap*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::EmptyDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::EmptyDifficultyBeatmap* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EmptyDifficultyBeatmap*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2348318 size 0x220 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2348538 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EmptyDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
constexpr __EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder, ::GlobalNamespace::EmptyDifficultyBeatmap*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EmptyDifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4390))
// CS Name: ::EmptyDifficultyBeatmap*
class CORDL_TYPE EmptyDifficultyBeatmap : public ::System::Object {
public:
// Declarations
using _GetBeatmapDataAsync_d__24 = ::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24;

using _GetBeatmapDataBasicInfoAsync_d__23 = ::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <level>k__BackingField offset 0x10
 __declspec(property(get=__get__level_k__BackingField, put=__set__level_k__BackingField)) ::GlobalNamespace::IBeatmapLevel*  _level_k__BackingField;

/// @brief Field <parentDifficultyBeatmapSet>k__BackingField offset 0x18
 __declspec(property(get=__get__parentDifficultyBeatmapSet_k__BackingField, put=__set__parentDifficultyBeatmapSet_k__BackingField)) ::GlobalNamespace::IDifficultyBeatmapSet*  _parentDifficultyBeatmapSet_k__BackingField;

/// @brief Field <difficulty>k__BackingField offset 0x20
 __declspec(property(get=__get__difficulty_k__BackingField, put=__set__difficulty_k__BackingField)) ::GlobalNamespace::BeatmapDifficulty  _difficulty_k__BackingField;

/// @brief Field <difficultyRank>k__BackingField offset 0x24
 __declspec(property(get=__get__difficultyRank_k__BackingField, put=__set__difficultyRank_k__BackingField)) int32_t  _difficultyRank_k__BackingField;

/// @brief Field <noteJumpMovementSpeed>k__BackingField offset 0x28
 __declspec(property(get=__get__noteJumpMovementSpeed_k__BackingField, put=__set__noteJumpMovementSpeed_k__BackingField)) float_t  _noteJumpMovementSpeed_k__BackingField;

/// @brief Field <noteJumpStartBeatOffset>k__BackingField offset 0x2c
 __declspec(property(get=__get__noteJumpStartBeatOffset_k__BackingField, put=__set__noteJumpStartBeatOffset_k__BackingField)) float_t  _noteJumpStartBeatOffset_k__BackingField;

/// @brief Field <environmentNameIdx>k__BackingField offset 0x30
 __declspec(property(get=__get__environmentNameIdx_k__BackingField, put=__set__environmentNameIdx_k__BackingField)) int32_t  _environmentNameIdx_k__BackingField;

/// @brief Field _beatmapData offset 0x38
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::BeatmapData*  _beatmapData;

 __declspec(property(get=get_level)) ::GlobalNamespace::IBeatmapLevel*  level;

 __declspec(property(get=get_parentDifficultyBeatmapSet)) ::GlobalNamespace::IDifficultyBeatmapSet*  parentDifficultyBeatmapSet;

 __declspec(property(get=get_difficulty)) ::GlobalNamespace::BeatmapDifficulty  difficulty;

 __declspec(property(get=get_difficultyRank)) int32_t  difficultyRank;

 __declspec(property(get=get_noteJumpMovementSpeed)) float_t  noteJumpMovementSpeed;

 __declspec(property(get=get_noteJumpStartBeatOffset)) float_t  noteJumpStartBeatOffset;

 __declspec(property(get=get_environmentNameIdx)) int32_t  environmentNameIdx;

 __declspec(property(get=get_beatmapDataBasicInfo)) ::GlobalNamespace::IBeatmapDataBasicInfo*  beatmapDataBasicInfo;

/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmap"
constexpr operator  ::GlobalNamespace::IDifficultyBeatmap*() noexcept;

constexpr void __set__level_k__BackingField(::GlobalNamespace::IBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevel* __get__level_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> __get__level_k__BackingField() const;

constexpr void __set__parentDifficultyBeatmapSet_k__BackingField(::GlobalNamespace::IDifficultyBeatmapSet*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmapSet* __get__parentDifficultyBeatmapSet_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmapSet*> __get__parentDifficultyBeatmapSet_k__BackingField() const;

constexpr void __set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get__difficulty_k__BackingField() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__difficulty_k__BackingField() const;

constexpr void __set__difficultyRank_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__difficultyRank_k__BackingField() ;

constexpr int32_t const& __get__difficultyRank_k__BackingField() const;

constexpr void __set__noteJumpMovementSpeed_k__BackingField(float_t  value) ;

constexpr float_t& __get__noteJumpMovementSpeed_k__BackingField() ;

constexpr float_t const& __get__noteJumpMovementSpeed_k__BackingField() const;

constexpr void __set__noteJumpStartBeatOffset_k__BackingField(float_t  value) ;

constexpr float_t& __get__noteJumpStartBeatOffset_k__BackingField() ;

constexpr float_t const& __get__noteJumpStartBeatOffset_k__BackingField() const;

constexpr void __set__environmentNameIdx_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__environmentNameIdx_k__BackingField() ;

constexpr int32_t const& __get__environmentNameIdx_k__BackingField() const;

constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData*  value) ;

constexpr ::GlobalNamespace::BeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> __get__beatmapData() const;

/// @brief Method get_level addr 0x2347de4 size 0x8 virtual true final true
inline ::GlobalNamespace::IBeatmapLevel* get_level() ;

/// @brief Method get_parentDifficultyBeatmapSet addr 0x2347dec size 0x8 virtual true final true
inline ::GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet() ;

/// @brief Method get_difficulty addr 0x2347df4 size 0x8 virtual true final true
inline ::GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x2347dfc size 0x8 virtual true final true
inline int32_t get_difficultyRank() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x2347e04 size 0x8 virtual true final true
inline float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x2347e0c size 0x8 virtual true final true
inline float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_environmentNameIdx addr 0x2347e14 size 0x8 virtual true final true
inline int32_t get_environmentNameIdx() ;

/// @brief Method get_beatmapDataBasicInfo addr 0x2347e1c size 0x8 virtual false final false
inline ::GlobalNamespace::IBeatmapDataBasicInfo* get_beatmapDataBasicInfo() ;

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x2347e24 size 0xf0 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x2347f14 size 0xf0 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings) ;

static inline ::GlobalNamespace::EmptyDifficultyBeatmap* New_ctor() ;

/// @brief Method .ctor addr 0x2348004 size 0x9c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyDifficultyBeatmap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyDifficultyBeatmap(EmptyDifficultyBeatmap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyDifficultyBeatmap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyDifficultyBeatmap(EmptyDifficultyBeatmap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyDifficultyBeatmap()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyDifficultyBeatmap, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyDifficultyBeatmap*, "", "EmptyDifficultyBeatmap");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24, "", "EmptyDifficultyBeatmap/<GetBeatmapDataAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23, "", "EmptyDifficultyBeatmap/<GetBeatmapDataBasicInfoAsync>d__23");
