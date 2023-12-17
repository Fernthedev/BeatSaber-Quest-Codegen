#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TileAnimationData)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileAnimationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileAnimationData);
// Type: UnityEngine.Tilemaps::TileAnimationData
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15944))
// CS Name: ::UnityEngine.Tilemaps::TileAnimationData
struct CORDL_TYPE TileAnimationData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_AnimatedSprites offset 0x0
 __declspec(property(get=__get_m_AnimatedSprites, put=__set_m_AnimatedSprites)) ::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>  m_AnimatedSprites;

/// @brief Field m_AnimationSpeed offset 0x8
 __declspec(property(get=__get_m_AnimationSpeed, put=__set_m_AnimationSpeed)) float_t  m_AnimationSpeed;

/// @brief Field m_AnimationStartTime offset 0xc
 __declspec(property(get=__get_m_AnimationStartTime, put=__set_m_AnimationStartTime)) float_t  m_AnimationStartTime;

constexpr void __set_m_AnimatedSprites(::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>& __get_m_AnimatedSprites() ;

constexpr ::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*> const& __get_m_AnimatedSprites() const;

constexpr void __set_m_AnimationSpeed(float_t  value) ;

constexpr float_t& __get_m_AnimationSpeed() ;

constexpr float_t const& __get_m_AnimationSpeed() const;

constexpr void __set_m_AnimationStartTime(float_t  value) ;

constexpr float_t& __get_m_AnimationStartTime() ;

constexpr float_t const& __get_m_AnimationStartTime() const;

// Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>", modifiers: "", def_value: None }, CppParam { name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr TileAnimationData(::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>  m_AnimatedSprites, float_t  m_AnimationSpeed, float_t  m_AnimationStartTime) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TileAnimationData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TileAnimationData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileAnimationData, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileAnimationData, "UnityEngine.Tilemaps", "TileAnimationData");
