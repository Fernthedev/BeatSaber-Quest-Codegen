#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPropertyBlockColorSetter)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarPropertyBlockColorSetter;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter);
// Type: BeatSaber.BeatAvatarSDK::AvatarPropertyBlockColorSetter
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15688))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPropertyBlockColorSetter*
class CORDL_TYPE AvatarPropertyBlockColorSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _defaultColor offset 0x18
 __declspec(property(get=__get__defaultColor, put=__set__defaultColor)) ::UnityEngine::Color  _defaultColor;

/// @brief Field _darkerColorMultiplier offset 0x28
 __declspec(property(get=__get__darkerColorMultiplier, put=__set__darkerColorMultiplier)) float_t  _darkerColorMultiplier;

/// @brief Field _whiteBoost offset 0x2c
 __declspec(property(get=__get__whiteBoost, put=__set__whiteBoost)) float_t  _whiteBoost;

/// @brief Field _editInPlayMode offset 0x30
 __declspec(property(get=__get__editInPlayMode, put=__set__editInPlayMode)) bool  _editInPlayMode;

/// @brief Field _ignoreRimLight offset 0x31
 __declspec(property(get=__get__ignoreRimLight, put=__set__ignoreRimLight)) bool  _ignoreRimLight;

/// @brief Field _renderer offset 0x38
 __declspec(property(get=__get__renderer, put=__set__renderer)) ::UnityEngine::Renderer*  _renderer;

/// @brief Field _rimLightColor offset 0x40
 __declspec(property(get=__get__rimLightColor, put=__set__rimLightColor)) ::UnityEngine::Color  _rimLightColor;

/// @brief Field _mainColor offset 0x50
 __declspec(property(get=__get__mainColor, put=__set__mainColor)) ::UnityEngine::Color  _mainColor;

/// @brief Field _boostColor offset 0x60
 __declspec(property(get=__get__boostColor, put=__set__boostColor)) ::UnityEngine::Color  _boostColor;

/// @brief Field _highlighted offset 0x70
 __declspec(property(get=__get__highlighted, put=__set__highlighted)) bool  _highlighted;

constexpr void __set__defaultColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__defaultColor() ;

constexpr ::UnityEngine::Color const& __get__defaultColor() const;

constexpr void __set__darkerColorMultiplier(float_t  value) ;

constexpr float_t& __get__darkerColorMultiplier() ;

constexpr float_t const& __get__darkerColorMultiplier() const;

constexpr void __set__whiteBoost(float_t  value) ;

constexpr float_t& __get__whiteBoost() ;

constexpr float_t const& __get__whiteBoost() const;

constexpr void __set__editInPlayMode(bool  value) ;

constexpr bool& __get__editInPlayMode() ;

constexpr bool const& __get__editInPlayMode() const;

constexpr void __set__ignoreRimLight(bool  value) ;

constexpr bool& __get__ignoreRimLight() ;

constexpr bool const& __get__ignoreRimLight() const;

constexpr void __set__renderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__renderer() const;

static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock() ;

constexpr void __set__rimLightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__rimLightColor() ;

constexpr ::UnityEngine::Color const& __get__rimLightColor() const;

constexpr void __set__mainColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__mainColor() ;

constexpr ::UnityEngine::Color const& __get__mainColor() const;

constexpr void __set__boostColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__boostColor() ;

constexpr ::UnityEngine::Color const& __get__boostColor() const;

constexpr void __set__highlighted(bool  value) ;

constexpr bool& __get__highlighted() ;

constexpr bool const& __get__highlighted() const;

/// @brief Method Awake addr 0xe1a338 size 0x10 virtual false final false
inline void Awake() ;

/// @brief Method OnValidate addr 0xe1a348 size 0xa0 virtual false final false
inline void OnValidate() ;

/// @brief Method SetColor addr 0xe1a3e8 size 0x38 virtual false final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetColors addr 0xe1a420 size 0x14 virtual false final false
inline void SetColors(::UnityEngine::Color  mainColor, ::UnityEngine::Color  rimLightColor) ;

/// @brief Method SetHighlight addr 0xe1a5d4 size 0xc virtual false final false
inline void SetHighlight(bool  highlighted, int32_t  uvSegment) ;

/// @brief Method UpdateRenderer addr 0xe1a434 size 0x1a0 virtual false final false
inline void UpdateRenderer() ;

static inline ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* New_ctor() ;

/// @brief Method .ctor addr 0xe1a5e0 size 0x24 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPropertyBlockColorSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarPropertyBlockColorSetter(AvatarPropertyBlockColorSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPropertyBlockColorSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarPropertyBlockColorSetter(AvatarPropertyBlockColorSetter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarPropertyBlockColorSetter()  = default;
public:


// Fields

// Static field _materialPropertyBlock


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, 0x78>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*, "BeatSaber.BeatAvatarSDK", "AvatarPropertyBlockColorSetter");
