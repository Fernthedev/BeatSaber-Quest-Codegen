#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FillIndicator)
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class FillIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FillIndicator);
// Type: ::FillIndicator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5418))
// CS Name: ::FillIndicator*
class CORDL_TYPE FillIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _bgImage offset 0x18
 __declspec(property(get=__get__bgImage, put=__set__bgImage)) ::UnityEngine::UI::Image*  _bgImage;

/// @brief Field _image offset 0x20
 __declspec(property(get=__get__image, put=__set__image)) ::UnityEngine::UI::Image*  _image;

 __declspec(property(get=get_fillAmount, put=set_fillAmount)) float_t  fillAmount;

constexpr void __set__bgImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__bgImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__bgImage() const;

constexpr void __set__image(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__image() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__image() const;

/// @brief Method set_fillAmount addr 0x2278948 size 0x44 virtual false final false
inline void set_fillAmount(float_t  value) ;

/// @brief Method get_fillAmount addr 0x2278a78 size 0x1c virtual false final false
inline float_t get_fillAmount() ;

static inline ::GlobalNamespace::FillIndicator* New_ctor() ;

/// @brief Method .ctor addr 0x2278a94 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FillIndicator(FillIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FillIndicator(FillIndicator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FillIndicator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FillIndicator, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FillIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FillIndicator*, "", "FillIndicator");
