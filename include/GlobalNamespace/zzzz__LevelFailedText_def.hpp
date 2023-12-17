#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelFailedText)
namespace Polyglot {
class LocalizedTextMeshPro;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedText);
// Type: ::LevelFailedText
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4864))
// CS Name: ::LevelFailedText*
class CORDL_TYPE LevelFailedText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TMP_Text*  _text;

/// @brief Field _localizedText offset 0x20
 __declspec(property(get=__get__localizedText, put=__set__localizedText)) ::Polyglot::LocalizedTextMeshPro*  _localizedText;

constexpr void __set__text(::TMPro::TMP_Text*  value) ;

constexpr ::TMPro::TMP_Text* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> __get__text() const;

constexpr void __set__localizedText(::Polyglot::LocalizedTextMeshPro*  value) ;

constexpr ::Polyglot::LocalizedTextMeshPro* __get__localizedText() ;

constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizedTextMeshPro*> __get__localizedText() const;

/// @brief Method OverrideText addr 0x239a1f4 size 0x4c virtual false final false
inline void OverrideText(::StringW  text) ;

static inline ::GlobalNamespace::LevelFailedText* New_ctor() ;

/// @brief Method .ctor addr 0x239a240 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelFailedText(LevelFailedText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelFailedText(LevelFailedText const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelFailedText()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedText, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedText*, "", "LevelFailedText");
