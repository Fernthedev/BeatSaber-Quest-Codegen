#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialPropertyBlockFloatCurve)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockFloatCurve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockFloatCurve);
// Type: ::MaterialPropertyBlockFloatCurve
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14568))
// CS Name: ::MaterialPropertyBlockFloatCurve*
class CORDL_TYPE MaterialPropertyBlockFloatCurve : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::MaterialPropertyBlockAnimator)]{};

/// @brief Field _curve offset 0x30
 __declspec(property(get=__get__curve, put=__set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _valueMultiplier offset 0x38
 __declspec(property(get=__get__valueMultiplier, put=__set__valueMultiplier)) float_t  _valueMultiplier;

/// @brief Field _speedMultiplier offset 0x3c
 __declspec(property(get=__get__speedMultiplier, put=__set__speedMultiplier)) float_t  _speedMultiplier;

constexpr void __set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__curve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__curve() const;

constexpr void __set__valueMultiplier(float_t  value) ;

constexpr float_t& __get__valueMultiplier() ;

constexpr float_t const& __get__valueMultiplier() const;

constexpr void __set__speedMultiplier(float_t  value) ;

constexpr float_t& __get__speedMultiplier() ;

constexpr float_t const& __get__speedMultiplier() const;

/// @brief Method SetProperty addr 0x21150a8 size 0x98 virtual true final false
inline void SetProperty() ;

static inline ::GlobalNamespace::MaterialPropertyBlockFloatCurve* New_ctor() ;

/// @brief Method .ctor addr 0x2115140 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockFloatCurve(MaterialPropertyBlockFloatCurve const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyBlockFloatCurve()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockFloatCurve, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockFloatCurve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockFloatCurve*, "", "MaterialPropertyBlockFloatCurve");
