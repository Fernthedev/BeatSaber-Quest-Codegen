#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Touchable)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class Touchable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Touchable);
// Type: HMUI::Touchable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13566))
// CS Name: ::HMUI::Touchable*
class CORDL_TYPE Touchable : public ::UnityEngine::UI::Graphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::UI::Graphic)]{};

/// @brief Field _skew offset 0x9c
 __declspec(property(get=__get__skew, put=__set__skew)) float_t  _skew;

 __declspec(property(get=get_skew)) float_t  skew;

constexpr void __set__skew(float_t  value) ;

constexpr float_t& __get__skew() ;

constexpr float_t const& __get__skew() const;

/// @brief Method get_skew addr 0x21253bc size 0x8 virtual false final false
inline float_t get_skew() ;

/// @brief Method OnPopulateMesh addr 0x21253c4 size 0x18 virtual true final false
inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper*  vh) ;

static inline ::HMUI::Touchable* New_ctor() ;

/// @brief Method .ctor addr 0x2124bc0 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Touchable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Touchable(Touchable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Touchable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Touchable(Touchable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Touchable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Touchable, 0xa0>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::Touchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Touchable*, "HMUI", "Touchable");
