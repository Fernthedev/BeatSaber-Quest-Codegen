#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ImmediateRankUIPanel)
namespace GlobalNamespace {
struct __RankModel__Rank;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class RelativeScoreAndImmediateRankCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ImmediateRankUIPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImmediateRankUIPanel);
// Type: ::ImmediateRankUIPanel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5034))
// CS Name: ::ImmediateRankUIPanel*
class CORDL_TYPE ImmediateRankUIPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rankText offset 0x18
 __declspec(property(get=__get__rankText, put=__set__rankText)) ::TMPro::TextMeshProUGUI*  _rankText;

/// @brief Field _relativeScoreText offset 0x20
 __declspec(property(get=__get__relativeScoreText, put=__set__relativeScoreText)) ::TMPro::TextMeshProUGUI*  _relativeScoreText;

/// @brief Field _relativeScoreAndImmediateRankCounter offset 0x28
 __declspec(property(get=__get__relativeScoreAndImmediateRankCounter, put=__set__relativeScoreAndImmediateRankCounter)) ::GlobalNamespace::RelativeScoreAndImmediateRankCounter*  _relativeScoreAndImmediateRankCounter;

/// @brief Field _stringBuilder offset 0x30
 __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder)) ::System::Text::StringBuilder*  _stringBuilder;

/// @brief Field _prevRelativeScore offset 0x38
 __declspec(property(get=__get__prevRelativeScore, put=__set__prevRelativeScore)) float_t  _prevRelativeScore;

/// @brief Field _prevImmediateRank offset 0x3c
 __declspec(property(get=__get__prevImmediateRank, put=__set__prevImmediateRank)) ::GlobalNamespace::__RankModel__Rank  _prevImmediateRank;

constexpr void __set__rankText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__rankText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__rankText() const;

constexpr void __set__relativeScoreText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__relativeScoreText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__relativeScoreText() const;

constexpr void __set__relativeScoreAndImmediateRankCounter(::GlobalNamespace::RelativeScoreAndImmediateRankCounter*  value) ;

constexpr ::GlobalNamespace::RelativeScoreAndImmediateRankCounter* __get__relativeScoreAndImmediateRankCounter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*> __get__relativeScoreAndImmediateRankCounter() const;

constexpr void __set__stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__stringBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__stringBuilder() const;

constexpr void __set__prevRelativeScore(float_t  value) ;

constexpr float_t& __get__prevRelativeScore() ;

constexpr float_t const& __get__prevRelativeScore() const;

constexpr void __set__prevImmediateRank(::GlobalNamespace::__RankModel__Rank  value) ;

constexpr ::GlobalNamespace::__RankModel__Rank& __get__prevImmediateRank() ;

constexpr ::GlobalNamespace::__RankModel__Rank const& __get__prevImmediateRank() const;

/// @brief Method Start addr 0x23c0d50 size 0xc4 virtual false final false
inline void Start() ;

/// @brief Method HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange addr 0x23c101c size 0x4 virtual false final false
inline void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange() ;

/// @brief Method RefreshUI addr 0x23c0e14 size 0x16c virtual false final false
inline void RefreshUI() ;

static inline ::GlobalNamespace::ImmediateRankUIPanel* New_ctor() ;

/// @brief Method .ctor addr 0x23c1020 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateRankUIPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmediateRankUIPanel(ImmediateRankUIPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateRankUIPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmediateRankUIPanel(ImmediateRankUIPanel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ImmediateRankUIPanel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImmediateRankUIPanel, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImmediateRankUIPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImmediateRankUIPanel*, "", "ImmediateRankUIPanel");
