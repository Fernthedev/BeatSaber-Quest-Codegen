#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncState)
namespace GlobalNamespace {
template<typename T>
class IEquatableByReference_1;
}
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class IStateTable_3;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__StandardScoreSyncState__Score);
MARK_VAL_T(::GlobalNamespace::StandardScoreSyncState);
// Type: ::Score
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12977))
// CS Name: ::StandardScoreSyncState::Score
struct CORDL_TYPE __StandardScoreSyncState__Score : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____StandardScoreSyncState__Score_Unwrapped
enum struct ____StandardScoreSyncState__Score_Unwrapped : int32_t {
__E_ModifiedScore = static_cast<int32_t>(0x0),
__E_MultipliedScore = static_cast<int32_t>(0x1),
__E_ImmediateMaxPossibleMultipliedScore = static_cast<int32_t>(0x2),
__E_Combo = static_cast<int32_t>(0x3),
__E_Multiplier = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ModifiedScore value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__StandardScoreSyncState__Score const ModifiedScore;

/// @brief Field MultipliedScore value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__StandardScoreSyncState__Score const MultipliedScore;

/// @brief Field ImmediateMaxPossibleMultipliedScore value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__StandardScoreSyncState__Score const ImmediateMaxPossibleMultipliedScore;

/// @brief Field Combo value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__StandardScoreSyncState__Score const Combo;

/// @brief Field Multiplier value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__StandardScoreSyncState__Score const Multiplier;

/// @brief Field Count value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__StandardScoreSyncState__Score const Count;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____StandardScoreSyncState__Score_Unwrapped () const noexcept {
return std::bit_cast<____StandardScoreSyncState__Score_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StandardScoreSyncState__Score(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardScoreSyncState__Score(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardScoreSyncState__Score()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardScoreSyncState__Score, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StandardScoreSyncState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12978))
// CS Name: ::StandardScoreSyncState
struct CORDL_TYPE StandardScoreSyncState : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
using Score = ::GlobalNamespace::__StandardScoreSyncState__Score;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field _modifiedScore offset 0x0
 __declspec(property(get=__get__modifiedScore, put=__set__modifiedScore)) int32_t  _modifiedScore;

/// @brief Field _multipliedScore offset 0x4
 __declspec(property(get=__get__multipliedScore, put=__set__multipliedScore)) int32_t  _multipliedScore;

/// @brief Field _immediateMaxPossibleMultipliedScore offset 0x8
 __declspec(property(get=__get__immediateMaxPossibleMultipliedScore, put=__set__immediateMaxPossibleMultipliedScore)) int32_t  _immediateMaxPossibleMultipliedScore;

/// @brief Field _combo offset 0xc
 __declspec(property(get=__get__combo, put=__set__combo)) int32_t  _combo;

/// @brief Field _multiplier offset 0x10
 __declspec(property(get=__get__multiplier, put=__set__multiplier)) int32_t  _multiplier;

/// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t>"
constexpr operator  ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t>*() ;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr operator  ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*() ;

constexpr void __set__modifiedScore(int32_t  value) ;

constexpr int32_t& __get__modifiedScore() ;

constexpr int32_t const& __get__modifiedScore() const;

constexpr void __set__multipliedScore(int32_t  value) ;

constexpr int32_t& __get__multipliedScore() ;

constexpr int32_t const& __get__multipliedScore() const;

constexpr void __set__immediateMaxPossibleMultipliedScore(int32_t  value) ;

constexpr int32_t& __get__immediateMaxPossibleMultipliedScore() ;

constexpr int32_t const& __get__immediateMaxPossibleMultipliedScore() const;

constexpr void __set__combo(int32_t  value) ;

constexpr int32_t& __get__combo() ;

constexpr int32_t const& __get__combo() const;

constexpr void __set__multiplier(int32_t  value) ;

constexpr int32_t& __get__multiplier() ;

constexpr int32_t const& __get__multiplier() const;

/// @brief Method SetState addr 0xe5a584 size 0x48 virtual true final true
inline void SetState(::GlobalNamespace::__StandardScoreSyncState__Score  s, int32_t  value) ;

/// @brief Method GetDelta addr 0xe5a5cc size 0x24 virtual false final false
inline ::GlobalNamespace::StandardScoreSyncState GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState>  stateTable) ;

/// @brief Method ApplyDelta addr 0xe5a5f0 size 0x24 virtual false final false
inline ::GlobalNamespace::StandardScoreSyncState ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState>  delta) ;

/// @brief Method GetState addr 0xe5a614 size 0x50 virtual true final true
inline int32_t GetState(::GlobalNamespace::__StandardScoreSyncState__Score  s) ;

/// @brief Method Serialize addr 0xe5a664 size 0x6c virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0xe5a6d0 size 0x6c virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Equals addr 0xe5a73c size 0x5c virtual false final false
inline bool Equals(ByRef<::GlobalNamespace::StandardScoreSyncState>  other) ;

/// @brief Method GetSize addr 0xe5a798 size 0x8c virtual true final true
inline int32_t GetSize() ;

/// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta addr 0xe5a824 size 0x24 virtual true final true
inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState>  stateTable) ;

/// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta addr 0xe5a848 size 0x24 virtual true final true
inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState>  delta) ;

/// @brief Method IEquatableByReference<StandardScoreSyncState>.Equals addr 0xe5a86c size 0x4 virtual true final true
inline bool IEquatableByReference_StandardScoreSyncState__Equals(ByRef<::GlobalNamespace::StandardScoreSyncState>  other) ;

// Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multiplier", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StandardScoreSyncState(int32_t  _modifiedScore, int32_t  _multipliedScore, int32_t  _immediateMaxPossibleMultipliedScore, int32_t  _combo, int32_t  _multiplier) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StandardScoreSyncState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StandardScoreSyncState()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncState, 0x14>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardScoreSyncState__Score, "", "StandardScoreSyncState/Score");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
