#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockColorAnimator)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockColorAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockColorAnimator);
// Type: ::MaterialPropertyBlockColorAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14564))
// CS Name: ::MaterialPropertyBlockColorAnimator*
class CORDL_TYPE MaterialPropertyBlockColorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::MaterialPropertyBlockAnimator)]{};

/// @brief Field _color offset 0x30
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method get_color addr 0x2114d14 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2114d20 size 0xc virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method SetProperty addr 0x2114d2c size 0x34 virtual true final false
inline void SetProperty() ;

static inline ::GlobalNamespace::MaterialPropertyBlockColorAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x2114dcc size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockColorAnimator(MaterialPropertyBlockColorAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockColorAnimator(MaterialPropertyBlockColorAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyBlockColorAnimator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockColorAnimator, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockColorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockColorAnimator*, "", "MaterialPropertyBlockColorAnimator");
