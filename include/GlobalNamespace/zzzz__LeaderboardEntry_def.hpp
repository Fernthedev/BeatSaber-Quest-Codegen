#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntry)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardEntry;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardEntry);
// Type: ::LeaderboardEntry
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5533))
// CS Name: ::LeaderboardEntry*
class CORDL_TYPE LeaderboardEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _scoreText offset 0x18
 __declspec(property(get=__get__scoreText, put=__set__scoreText)) ::TMPro::TextMeshProUGUI*  _scoreText;

/// @brief Field _playerNameText offset 0x20
 __declspec(property(get=__get__playerNameText, put=__set__playerNameText)) ::TMPro::TextMeshProUGUI*  _playerNameText;

/// @brief Field _rankText offset 0x28
 __declspec(property(get=__get__rankText, put=__set__rankText)) ::TMPro::TextMeshProUGUI*  _rankText;

/// @brief Field _color offset 0x30
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

constexpr void __set__scoreText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__scoreText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__scoreText() const;

constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__playerNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__playerNameText() const;

constexpr void __set__rankText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__rankText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__rankText() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method SetScore addr 0x229e66c size 0x190 virtual false final false
inline void SetScore(int32_t  score, ::StringW  playerName, int32_t  rank, bool  highlighted, bool  showSeparator) ;

static inline ::GlobalNamespace::LeaderboardEntry* New_ctor() ;

/// @brief Method .ctor addr 0x229e7fc size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardEntry(LeaderboardEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardEntry(LeaderboardEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeaderboardEntry()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardEntry, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardEntry*, "", "LeaderboardEntry");
