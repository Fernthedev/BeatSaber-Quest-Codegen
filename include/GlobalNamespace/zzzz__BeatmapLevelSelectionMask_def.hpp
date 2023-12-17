#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelSelectionMask)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapLevelSelectionMask);
// Type: ::BeatmapLevelSelectionMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12686))
// CS Name: ::BeatmapLevelSelectionMask
struct CORDL_TYPE BeatmapLevelSelectionMask : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field difficulties offset 0x0
 __declspec(property(get=__get_difficulties, put=__set_difficulties)) ::GlobalNamespace::BeatmapDifficultyMask  difficulties;

/// @brief Field modifiers offset 0x2
 __declspec(property(get=__get_modifiers, put=__set_modifiers)) ::GlobalNamespace::GameplayModifierMask  modifiers;

/// @brief Field songPacks offset 0x8
 __declspec(property(get=__get_songPacks, put=__set_songPacks)) ::GlobalNamespace::SongPackMask  songPacks;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*() ;

constexpr void __set_difficulties(::GlobalNamespace::BeatmapDifficultyMask  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get_difficulties() ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get_difficulties() const;

constexpr void __set_modifiers(::GlobalNamespace::GameplayModifierMask  value) ;

constexpr ::GlobalNamespace::GameplayModifierMask& __get_modifiers() ;

constexpr ::GlobalNamespace::GameplayModifierMask const& __get_modifiers() const;

constexpr void __set_songPacks(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get_songPacks() ;

constexpr ::GlobalNamespace::SongPackMask const& __get_songPacks() const;

/// @brief Method .ctor addr 0xe299a4 size 0x18 virtual false final false
inline void _ctor(::GlobalNamespace::BeatmapDifficultyMask  difficulties, ::GlobalNamespace::GameplayModifierMask  modifiers, ::GlobalNamespace::SongPackMask  songPacks) ;

/// @brief Method Equals addr 0xe299bc size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0xe29a4c size 0x114 virtual true final true
inline bool Equals(::GlobalNamespace::BeatmapLevelSelectionMask  other) ;

/// @brief Method GetHashCode addr 0xe29b60 size 0x2c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Serialize addr 0xe29b8c size 0x50 virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  version) ;

/// @brief Method Deserialize addr 0xe29bdc size 0x80 virtual false final false
static inline ::GlobalNamespace::BeatmapLevelSelectionMask Deserialize(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  version) ;

/// @brief Method op_Equality addr 0xe29c5c size 0x88 virtual false final false
static inline bool op_Equality(::GlobalNamespace::BeatmapLevelSelectionMask  l, ::GlobalNamespace::BeatmapLevelSelectionMask  r) ;

/// @brief Method op_Inequality addr 0xe29ce4 size 0x88 virtual false final false
static inline bool op_Inequality(::GlobalNamespace::BeatmapLevelSelectionMask  l, ::GlobalNamespace::BeatmapLevelSelectionMask  r) ;

// Ctor Parameters [CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }]
constexpr BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask  difficulties, ::GlobalNamespace::GameplayModifierMask  modifiers, ::GlobalNamespace::SongPackMask  songPacks) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BeatmapLevelSelectionMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BeatmapLevelSelectionMask()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSelectionMask, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSelectionMask, "", "BeatmapLevelSelectionMask");
