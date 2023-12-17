#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataSO)
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataAsync_d__5;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___RunTaskAndLogException_d__9;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass9_0;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass5_0;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataSO;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataAsync_d__5;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___RunTaskAndLogException_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9);
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4247))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass4_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field beatmapDataBasicInfo offset 0x10
 __declspec(property(get=__get_beatmapDataBasicInfo, put=__set_beatmapDataBasicInfo)) ::GlobalNamespace::IBeatmapDataBasicInfo*  beatmapDataBasicInfo;

/// @brief Field beatmapSaveData offset 0x18
 __declspec(property(get=__get_beatmapSaveData, put=__set_beatmapSaveData)) ::BeatmapSaveDataVersion3::BeatmapSaveData*  beatmapSaveData;

constexpr void __set_beatmapDataBasicInfo(::GlobalNamespace::IBeatmapDataBasicInfo*  value) ;

constexpr ::GlobalNamespace::IBeatmapDataBasicInfo* __get_beatmapDataBasicInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> __get_beatmapDataBasicInfo() const;

constexpr void __set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData*  value) ;

constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData* __get_beatmapSaveData() ;

constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> __get_beatmapSaveData() const;

static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0* New_ctor() ;

/// @brief Method .ctor addr 0x232f974 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetBeatmapDataBasicInfoAsync>b__0 addr 0x232f97c size 0x1c virtual false final false
inline void _GetBeatmapDataBasicInfoAsync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataSO____c__DisplayClass4_0(__BeatmapDataSO____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataSO____c__DisplayClass4_0(__BeatmapDataSO____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataBasicInfoAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4248))
// CS Name: ::BeatmapDataSO::<GetBeatmapDataBasicInfoAsync>d__4
struct CORDL_TYPE __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapDataSO*  __4__this;

/// @brief Field <>8__1 offset 0x28
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*  __8__1;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  __u__1;

/// @brief Field <>u__2 offset 0x38
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapDataSO*  value) ;

constexpr ::GlobalNamespace::BeatmapDataSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> __get___4__this() const;

constexpr void __set___8__1(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*  value) ;

constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*> __get___8__1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x232fc4c size 0x360 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x232ffac size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  __t__builder, ::GlobalNamespace::BeatmapDataSO*  __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4249))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass5_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field readonlyBeatmapData offset 0x10
 __declspec(property(get=__get_readonlyBeatmapData, put=__set_readonlyBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  readonlyBeatmapData;

/// @brief Field beatmapSaveData offset 0x18
 __declspec(property(get=__get_beatmapSaveData, put=__set_beatmapSaveData)) ::BeatmapSaveDataVersion3::BeatmapSaveData*  beatmapSaveData;

/// @brief Field beatmapDifficulty offset 0x20
 __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty;

/// @brief Field beatsPerMinute offset 0x24
 __declspec(property(get=__get_beatsPerMinute, put=__set_beatsPerMinute)) float_t  beatsPerMinute;

/// @brief Field loadingForDesignatedEnvironment offset 0x28
 __declspec(property(get=__get_loadingForDesignatedEnvironment, put=__set_loadingForDesignatedEnvironment)) bool  loadingForDesignatedEnvironment;

/// @brief Field environmentInfo offset 0x30
 __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

/// @brief Field playerSpecificSettings offset 0x38
 __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings;

constexpr void __set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get_readonlyBeatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get_readonlyBeatmapData() const;

constexpr void __set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData*  value) ;

constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData* __get_beatmapSaveData() ;

constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> __get_beatmapSaveData() const;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

constexpr void __set_beatsPerMinute(float_t  value) ;

constexpr float_t& __get_beatsPerMinute() ;

constexpr float_t const& __get_beatsPerMinute() const;

constexpr void __set_loadingForDesignatedEnvironment(bool  value) ;

constexpr bool& __get_loadingForDesignatedEnvironment() ;

constexpr bool const& __get_loadingForDesignatedEnvironment() const;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get_environmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get_environmentInfo() const;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings* __get_playerSpecificSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> __get_playerSpecificSettings() const;

static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x2330004 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetBeatmapDataAsync>b__0 addr 0x233000c size 0x2c virtual false final false
inline void _GetBeatmapDataAsync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataSO____c__DisplayClass5_0(__BeatmapDataSO____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataSO____c__DisplayClass5_0(__BeatmapDataSO____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4250))
// CS Name: ::BeatmapDataSO::<GetBeatmapDataAsync>d__5
struct CORDL_TYPE __BeatmapDataSO___GetBeatmapDataAsync_d__5 : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder;

/// @brief Field beatmapDifficulty offset 0x20
 __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty;

/// @brief Field beatsPerMinute offset 0x24
 __declspec(property(get=__get_beatsPerMinute, put=__set_beatsPerMinute)) float_t  beatsPerMinute;

/// @brief Field loadingForDesignatedEnvironment offset 0x28
 __declspec(property(get=__get_loadingForDesignatedEnvironment, put=__set_loadingForDesignatedEnvironment)) bool  loadingForDesignatedEnvironment;

/// @brief Field environmentInfo offset 0x30
 __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

/// @brief Field playerSpecificSettings offset 0x38
 __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings;

/// @brief Field <>4__this offset 0x40
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapDataSO*  __4__this;

/// @brief Field <>8__1 offset 0x48
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*  __8__1;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  __u__1;

/// @brief Field <>u__2 offset 0x58
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> const& __get___t__builder() const;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

constexpr void __set_beatsPerMinute(float_t  value) ;

constexpr float_t& __get_beatsPerMinute() ;

constexpr float_t const& __get_beatsPerMinute() const;

constexpr void __set_loadingForDesignatedEnvironment(bool  value) ;

constexpr bool& __get_loadingForDesignatedEnvironment() ;

constexpr bool const& __get_loadingForDesignatedEnvironment() const;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get_environmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get_environmentInfo() const;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings* __get_playerSpecificSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> __get_playerSpecificSettings() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapDataSO*  value) ;

constexpr ::GlobalNamespace::BeatmapDataSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> __get___4__this() const;

constexpr void __set___8__1(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*  value) ;

constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*> __get___8__1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x2330220 size 0x378 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2330598 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __BeatmapDataSO___GetBeatmapDataAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, float_t  beatsPerMinute, bool  loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::BeatmapDataSO*  __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapDataSO___GetBeatmapDataAsync_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO___GetBeatmapDataAsync_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass8_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4251))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass8_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field beatmapSaveData offset 0x10
 __declspec(property(get=__get_beatmapSaveData, put=__set_beatmapSaveData)) ::BeatmapSaveDataVersion3::BeatmapSaveData*  beatmapSaveData;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapDataSO*  __4__this;

constexpr void __set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData*  value) ;

constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData* __get_beatmapSaveData() ;

constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> __get_beatmapSaveData() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapDataSO*  value) ;

constexpr ::GlobalNamespace::BeatmapDataSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> __get___4__this() const;

static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0* New_ctor() ;

/// @brief Method .ctor addr 0x23305f0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <LoadBeatmapSaveDataAsync>b__0 addr 0x23305f8 size 0x8c virtual false final false
inline void _LoadBeatmapSaveDataAsync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataSO____c__DisplayClass8_0(__BeatmapDataSO____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataSO____c__DisplayClass8_0(__BeatmapDataSO____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapSaveDataAsync>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4252))
// CS Name: ::BeatmapDataSO::<LoadBeatmapSaveDataAsync>d__8
struct CORDL_TYPE __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapDataSO*  __4__this;

/// @brief Field <>8__1 offset 0x28
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*  __8__1;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapDataSO*  value) ;

constexpr ::GlobalNamespace::BeatmapDataSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> __get___4__this() const;

constexpr void __set___8__1(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*  value) ;

constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*> __get___8__1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2330684 size 0x254 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23308d8 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>  __t__builder, ::GlobalNamespace::BeatmapDataSO*  __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass9_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4253))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass9_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field action offset 0x10
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action*  action;

constexpr void __set_action(::System::Action*  value) ;

constexpr ::System::Action* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_action() const;

static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0* New_ctor() ;

/// @brief Method .ctor addr 0x2330930 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <RunTaskAndLogException>b__0 addr 0x2330938 size 0xc0 virtual false final false
inline void _RunTaskAndLogException_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataSO____c__DisplayClass9_0(__BeatmapDataSO____c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataSO____c__DisplayClass9_0(__BeatmapDataSO____c__DisplayClass9_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO____c__DisplayClass9_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RunTaskAndLogException>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4254))
// CS Name: ::BeatmapDataSO::<RunTaskAndLogException>d__9
struct CORDL_TYPE __BeatmapDataSO___RunTaskAndLogException_d__9 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field action offset 0x20
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action*  action;

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

constexpr void __set_action(::System::Action*  value) ;

constexpr ::System::Action* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_action() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23309f8 size 0x230 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2330c28 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __BeatmapDataSO___RunTaskAndLogException_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action*  action, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapDataSO___RunTaskAndLogException_d__9(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSO___RunTaskAndLogException_d__9()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4255))
// CS Name: ::BeatmapDataSO*
class CORDL_TYPE BeatmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _RunTaskAndLogException_d__9 = ::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9;

using __c__DisplayClass9_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0;

using _LoadBeatmapSaveDataAsync_d__8 = ::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8;

using __c__DisplayClass8_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0;

using _GetBeatmapDataAsync_d__5 = ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5;

using __c__DisplayClass5_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0;

using _GetBeatmapDataBasicInfoAsync_d__4 = ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4;

using __c__DisplayClass4_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _jsonData offset 0x18
 __declspec(property(get=__get__jsonData, put=__set__jsonData)) ::StringW  _jsonData;

/// @brief Field _compressedData offset 0x20
 __declspec(property(get=__get__compressedData, put=__set__compressedData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _compressedData;

/// @brief Field _beatmapDataBasic offset 0x28
 __declspec(property(get=__get__beatmapDataBasic, put=__set__beatmapDataBasic)) ::GlobalNamespace::IBeatmapDataBasicInfo*  _beatmapDataBasic;

 __declspec(property(get=get_data)) ::StringW  data;

constexpr void __set__jsonData(::StringW  value) ;

constexpr ::StringW& __get__jsonData() ;

constexpr ::StringW const& __get__jsonData() const;

constexpr void __set__compressedData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__compressedData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__compressedData() const;

constexpr void __set__beatmapDataBasic(::GlobalNamespace::IBeatmapDataBasicInfo*  value) ;

constexpr ::GlobalNamespace::IBeatmapDataBasicInfo* __get__beatmapDataBasic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> __get__beatmapDataBasic() const;

/// @brief Method get_data addr 0x232eca8 size 0x20 virtual false final false
inline ::StringW get_data() ;

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x232f12c size 0xf0 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x232f21c size 0x134 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, float_t  beatsPerMinute, bool  loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings) ;

/// @brief Method SetJsonData addr 0x232f350 size 0x8 virtual false final false
inline void SetJsonData(::StringW  jsonData) ;

/// @brief Method LoadBeatmapSaveDataAsync addr 0x232f358 size 0xf4 virtual false final false
inline ::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>* LoadBeatmapSaveDataAsync() ;

/// @brief Method RunTaskAndLogException addr 0x232f44c size 0xc8 virtual false final false
inline ::System::Threading::Tasks::Task* RunTaskAndLogException(::System::Action*  action) ;

/// @brief Method Compress addr 0x232f514 size 0x458 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Compress(::StringW  s) ;

/// @brief Method Decompress addr 0x232ecc8 size 0x464 virtual false final false
static inline ::StringW Decompress(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

static inline ::GlobalNamespace::BeatmapDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x232f96c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataSO(BeatmapDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataSO(BeatmapDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataSO, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO*, "", "BeatmapDataSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*, "", "BeatmapDataSO/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*, "", "BeatmapDataSO/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*, "", "BeatmapDataSO/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0*, "", "BeatmapDataSO/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5, "", "BeatmapDataSO/<GetBeatmapDataAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4, "", "BeatmapDataSO/<GetBeatmapDataBasicInfoAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8, "", "BeatmapDataSO/<LoadBeatmapSaveDataAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9, "", "BeatmapDataSO/<RunTaskAndLogException>d__9");
