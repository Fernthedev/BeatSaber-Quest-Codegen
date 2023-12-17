#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CutoutEffect)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class CutoutEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CutoutEffect);
// Type: ::CutoutEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4841))
// CS Name: ::CutoutEffect*
class CORDL_TYPE CutoutEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _materialPropertyBlockController offset 0x18
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

/// @brief Field _useRandomCutoutOffset offset 0x20
 __declspec(property(get=__get__useRandomCutoutOffset, put=__set__useRandomCutoutOffset)) ::GlobalNamespace::BoolSO*  _useRandomCutoutOffset;

/// @brief Field _cutoutOffset offset 0x28
 __declspec(property(get=__get__cutoutOffset, put=__set__cutoutOffset)) ::UnityEngine::Vector3  _cutoutOffset;

/// @brief Field _randomNoiseTexOffset offset 0x34
 __declspec(property(get=__get__randomNoiseTexOffset, put=__set__randomNoiseTexOffset)) ::UnityEngine::Vector3  _randomNoiseTexOffset;

/// @brief Field _cutout offset 0x40
 __declspec(property(get=__get__cutout, put=__set__cutout)) float_t  _cutout;

 __declspec(property(get=get_useRandomCutoutOffset)) bool  useRandomCutoutOffset;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

constexpr void __set__useRandomCutoutOffset(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__useRandomCutoutOffset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__useRandomCutoutOffset() const;

constexpr void __set__cutoutOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__cutoutOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__cutoutOffset() const;

constexpr void __set__randomNoiseTexOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__randomNoiseTexOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__randomNoiseTexOffset() const;

constexpr void __set__cutout(float_t  value) ;

constexpr float_t& __get__cutout() ;

constexpr float_t const& __get__cutout() const;

static inline void setStaticF__cutoutPropertyID(int32_t  value) ;

static inline int32_t getStaticF__cutoutPropertyID() ;

static inline void setStaticF__cutoutTexOffsetPropertyID(int32_t  value) ;

static inline int32_t getStaticF__cutoutTexOffsetPropertyID() ;

/// @brief Method get_useRandomCutoutOffset addr 0x2396bac size 0x48 virtual false final false
inline bool get_useRandomCutoutOffset() ;

/// @brief Method Start addr 0x2396bf4 size 0x3c virtual false final false
inline void Start() ;

/// @brief Method SetCutout addr 0x2396968 size 0xc4 virtual false final false
inline void SetCutout(float_t  cutout) ;

/// @brief Method SetCutout addr 0x2396c30 size 0xe4 virtual false final false
inline void SetCutout(float_t  cutout, ::UnityEngine::Vector3  cutoutOffset) ;

static inline ::GlobalNamespace::CutoutEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2396d14 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CutoutEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CutoutEffect(CutoutEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CutoutEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CutoutEffect(CutoutEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CutoutEffect()  = default;
public:


// Fields

// Static field _cutoutPropertyID

// Static field _cutoutTexOffsetPropertyID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CutoutEffect, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CutoutEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutEffect*, "", "CutoutEffect");
