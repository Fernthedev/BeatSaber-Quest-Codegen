#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BetaBuildInfoText)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BetaBuildInfoText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BetaBuildInfoText);
// Type: ::BetaBuildInfoText
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5773))
// CS Name: ::BetaBuildInfoText*
class CORDL_TYPE BetaBuildInfoText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

/// @brief Method Start addr 0x22dfa60 size 0x24 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::BetaBuildInfoText* New_ctor() ;

/// @brief Method .ctor addr 0x22dfa84 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BetaBuildInfoText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BetaBuildInfoText(BetaBuildInfoText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetaBuildInfoText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetaBuildInfoText(BetaBuildInfoText const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BetaBuildInfoText()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BetaBuildInfoText, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BetaBuildInfoText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetaBuildInfoText*, "", "BetaBuildInfoText");
