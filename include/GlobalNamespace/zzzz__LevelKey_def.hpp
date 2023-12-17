#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelKey)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelKey);
// Type: ::LevelKey
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4627))
// CS Name: ::LevelKey
struct CORDL_TYPE LevelKey : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field songId offset 0x0
 __declspec(property(get=__get_songId, put=__set_songId)) ::StringW  songId;

/// @brief Field difficulty offset 0x8
 __declspec(property(get=__get_difficulty, put=__set_difficulty)) ::GlobalNamespace::BeatmapDifficulty  difficulty;

/// @brief Field characteristic offset 0x10
 __declspec(property(get=__get_characteristic, put=__set_characteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  characteristic;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LevelKey>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::LevelKey>*() ;

constexpr void __set_songId(::StringW  value) ;

constexpr ::StringW& __get_songId() ;

constexpr ::StringW const& __get_songId() const;

constexpr void __set_difficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_difficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_difficulty() const;

constexpr void __set_characteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get_characteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get_characteristic() const;

/// @brief Method Equals addr 0x236bbb8 size 0x9c virtual true final true
inline bool Equals(::GlobalNamespace::LevelKey  other) ;

/// @brief Method Equals addr 0x236bc54 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x236bce4 size 0xbc virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x236bda0 size 0x30 virtual false final false
static inline bool op_Equality(::GlobalNamespace::LevelKey  left, ::GlobalNamespace::LevelKey  right) ;

/// @brief Method op_Inequality addr 0x236bdd0 size 0x34 virtual false final false
static inline bool op_Inequality(::GlobalNamespace::LevelKey  left, ::GlobalNamespace::LevelKey  right) ;

// Ctor Parameters [CppParam { name: "songId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO*", modifiers: "", def_value: None }]
constexpr LevelKey(::StringW  songId, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  characteristic) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LevelKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LevelKey()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelKey, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelKey, "", "LevelKey");
