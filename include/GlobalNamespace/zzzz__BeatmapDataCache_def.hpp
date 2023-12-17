#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCache)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct __BeatmapDataCache___GetBeatmapData_d__4;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
struct __BeatmapDataCache___GetBeatmapData_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataCache);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4);
// Type: ::<GetBeatmapData>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5819))
// CS Name: ::BeatmapDataCache::<GetBeatmapData>d__4
struct CORDL_TYPE __BeatmapDataCache___GetBeatmapData_d__4 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder;

/// @brief Field difficultyBeatmap offset 0x20
 __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapDataCache*  __4__this;

/// @brief Field environmentInfo offset 0x30
 __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

/// @brief Field playerSpecificSettings offset 0x38
 __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> const& __get___t__builder() const;

constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get_difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get_difficultyBeatmap() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapDataCache*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCache* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCache*> __get___4__this() const;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get_environmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get_environmentInfo() const;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings* __get_playerSpecificSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> __get_playerSpecificSettings() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22eb1dc size 0x474 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22eb650 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmap", ty: "::GlobalNamespace::IDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataCache*", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
constexpr __BeatmapDataCache___GetBeatmapData_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::BeatmapDataCache*  __4__this, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapDataCache___GetBeatmapData_d__4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapDataCache___GetBeatmapData_d__4()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapDataCache
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5820))
// CS Name: ::BeatmapDataCache*
class CORDL_TYPE BeatmapDataCache : public ::System::Object {
public:
// Declarations
using _GetBeatmapData_d__4 = ::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field difficultyBeatmap offset 0x10
 __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap;

/// @brief Field environmentInfo offset 0x18
 __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

/// @brief Field playerSpecificSettings offset 0x20
 __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings;

/// @brief Field cachedMap offset 0x28
 __declspec(property(get=__get_cachedMap, put=__set_cachedMap)) ::GlobalNamespace::IReadonlyBeatmapData*  cachedMap;

constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get_difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get_difficultyBeatmap() const;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get_environmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get_environmentInfo() const;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings* __get_playerSpecificSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> __get_playerSpecificSettings() const;

constexpr void __set_cachedMap(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get_cachedMap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get_cachedMap() const;

/// @brief Method GetBeatmapData addr 0x22eb0c4 size 0x110 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapData(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings) ;

static inline ::GlobalNamespace::BeatmapDataCache* New_ctor() ;

/// @brief Method .ctor addr 0x22eb1d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataCache(BeatmapDataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataCache(BeatmapDataCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataCache()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataCache, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataCache*, "", "BeatmapDataCache");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, "", "BeatmapDataCache/<GetBeatmapData>d__4");
