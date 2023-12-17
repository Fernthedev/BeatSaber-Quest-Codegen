#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorTransitionInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorTransitionInfo);
// Type: UnityEngine::AnimatorTransitionInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14880))
// CS Name: ::UnityEngine::AnimatorTransitionInfo
struct CORDL_TYPE AnimatorTransitionInfo : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_FullPath offset 0x0
 __declspec(property(get=__get_m_FullPath, put=__set_m_FullPath)) int32_t  m_FullPath;

/// @brief Field m_UserName offset 0x4
 __declspec(property(get=__get_m_UserName, put=__set_m_UserName)) int32_t  m_UserName;

/// @brief Field m_Name offset 0x8
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) int32_t  m_Name;

/// @brief Field m_HasFixedDuration offset 0xc
 __declspec(property(get=__get_m_HasFixedDuration, put=__set_m_HasFixedDuration)) bool  m_HasFixedDuration;

/// @brief Field m_Duration offset 0x10
 __declspec(property(get=__get_m_Duration, put=__set_m_Duration)) float_t  m_Duration;

/// @brief Field m_NormalizedTime offset 0x14
 __declspec(property(get=__get_m_NormalizedTime, put=__set_m_NormalizedTime)) float_t  m_NormalizedTime;

/// @brief Field m_AnyState offset 0x18
 __declspec(property(get=__get_m_AnyState, put=__set_m_AnyState)) bool  m_AnyState;

/// @brief Field m_TransitionType offset 0x1c
 __declspec(property(get=__get_m_TransitionType, put=__set_m_TransitionType)) int32_t  m_TransitionType;

constexpr void __set_m_FullPath(int32_t  value) ;

constexpr int32_t& __get_m_FullPath() ;

constexpr int32_t const& __get_m_FullPath() const;

constexpr void __set_m_UserName(int32_t  value) ;

constexpr int32_t& __get_m_UserName() ;

constexpr int32_t const& __get_m_UserName() const;

constexpr void __set_m_Name(int32_t  value) ;

constexpr int32_t& __get_m_Name() ;

constexpr int32_t const& __get_m_Name() const;

constexpr void __set_m_HasFixedDuration(bool  value) ;

constexpr bool& __get_m_HasFixedDuration() ;

constexpr bool const& __get_m_HasFixedDuration() const;

constexpr void __set_m_Duration(float_t  value) ;

constexpr float_t& __get_m_Duration() ;

constexpr float_t const& __get_m_Duration() const;

constexpr void __set_m_NormalizedTime(float_t  value) ;

constexpr float_t& __get_m_NormalizedTime() ;

constexpr float_t const& __get_m_NormalizedTime() const;

constexpr void __set_m_AnyState(bool  value) ;

constexpr bool& __get_m_AnyState() ;

constexpr bool const& __get_m_AnyState() const;

constexpr void __set_m_TransitionType(int32_t  value) ;

constexpr int32_t& __get_m_TransitionType() ;

constexpr int32_t const& __get_m_TransitionType() const;

// Ctor Parameters [CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserName", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HasFixedDuration", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnyState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_TransitionType", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorTransitionInfo(int32_t  m_FullPath, int32_t  m_UserName, int32_t  m_Name, bool  m_HasFixedDuration, float_t  m_Duration, float_t  m_NormalizedTime, bool  m_AnyState, int32_t  m_TransitionType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimatorTransitionInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimatorTransitionInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorTransitionInfo, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorTransitionInfo, "UnityEngine", "AnimatorTransitionInfo");
