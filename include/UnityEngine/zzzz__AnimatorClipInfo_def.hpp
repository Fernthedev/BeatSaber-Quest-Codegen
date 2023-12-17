#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorClipInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorClipInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorClipInfo);
// Type: UnityEngine::AnimatorClipInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14878))
// CS Name: ::UnityEngine::AnimatorClipInfo
struct CORDL_TYPE AnimatorClipInfo : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ClipInstanceID offset 0x0
 __declspec(property(get=__get_m_ClipInstanceID, put=__set_m_ClipInstanceID)) int32_t  m_ClipInstanceID;

/// @brief Field m_Weight offset 0x4
 __declspec(property(get=__get_m_Weight, put=__set_m_Weight)) float_t  m_Weight;

constexpr void __set_m_ClipInstanceID(int32_t  value) ;

constexpr int32_t& __get_m_ClipInstanceID() ;

constexpr int32_t const& __get_m_ClipInstanceID() const;

constexpr void __set_m_Weight(float_t  value) ;

constexpr float_t& __get_m_Weight() ;

constexpr float_t const& __get_m_Weight() const;

// Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }]
constexpr AnimatorClipInfo(int32_t  m_ClipInstanceID, float_t  m_Weight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimatorClipInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimatorClipInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorClipInfo, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
