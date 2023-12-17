#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorStateInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorStateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorStateInfo);
// Type: UnityEngine::AnimatorStateInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14879))
// CS Name: ::UnityEngine::AnimatorStateInfo
struct CORDL_TYPE AnimatorStateInfo : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_Name offset 0x0
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) int32_t  m_Name;

/// @brief Field m_Path offset 0x4
 __declspec(property(get=__get_m_Path, put=__set_m_Path)) int32_t  m_Path;

/// @brief Field m_FullPath offset 0x8
 __declspec(property(get=__get_m_FullPath, put=__set_m_FullPath)) int32_t  m_FullPath;

/// @brief Field m_NormalizedTime offset 0xc
 __declspec(property(get=__get_m_NormalizedTime, put=__set_m_NormalizedTime)) float_t  m_NormalizedTime;

/// @brief Field m_Length offset 0x10
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) float_t  m_Length;

/// @brief Field m_Speed offset 0x14
 __declspec(property(get=__get_m_Speed, put=__set_m_Speed)) float_t  m_Speed;

/// @brief Field m_SpeedMultiplier offset 0x18
 __declspec(property(get=__get_m_SpeedMultiplier, put=__set_m_SpeedMultiplier)) float_t  m_SpeedMultiplier;

/// @brief Field m_Tag offset 0x1c
 __declspec(property(get=__get_m_Tag, put=__set_m_Tag)) int32_t  m_Tag;

/// @brief Field m_Loop offset 0x20
 __declspec(property(get=__get_m_Loop, put=__set_m_Loop)) int32_t  m_Loop;

 __declspec(property(get=get_normalizedTime)) float_t  normalizedTime;

constexpr void __set_m_Name(int32_t  value) ;

constexpr int32_t& __get_m_Name() ;

constexpr int32_t const& __get_m_Name() const;

constexpr void __set_m_Path(int32_t  value) ;

constexpr int32_t& __get_m_Path() ;

constexpr int32_t const& __get_m_Path() const;

constexpr void __set_m_FullPath(int32_t  value) ;

constexpr int32_t& __get_m_FullPath() ;

constexpr int32_t const& __get_m_FullPath() const;

constexpr void __set_m_NormalizedTime(float_t  value) ;

constexpr float_t& __get_m_NormalizedTime() ;

constexpr float_t const& __get_m_NormalizedTime() const;

constexpr void __set_m_Length(float_t  value) ;

constexpr float_t& __get_m_Length() ;

constexpr float_t const& __get_m_Length() const;

constexpr void __set_m_Speed(float_t  value) ;

constexpr float_t& __get_m_Speed() ;

constexpr float_t const& __get_m_Speed() const;

constexpr void __set_m_SpeedMultiplier(float_t  value) ;

constexpr float_t& __get_m_SpeedMultiplier() ;

constexpr float_t const& __get_m_SpeedMultiplier() const;

constexpr void __set_m_Tag(int32_t  value) ;

constexpr int32_t& __get_m_Tag() ;

constexpr int32_t const& __get_m_Tag() const;

constexpr void __set_m_Loop(int32_t  value) ;

constexpr int32_t& __get_m_Loop() ;

constexpr int32_t const& __get_m_Loop() const;

/// @brief Method get_normalizedTime addr 0x2c90718 size 0x8 virtual false final false
inline float_t get_normalizedTime() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorStateInfo(int32_t  m_Name, int32_t  m_Path, int32_t  m_FullPath, float_t  m_NormalizedTime, float_t  m_Length, float_t  m_Speed, float_t  m_SpeedMultiplier, int32_t  m_Tag, int32_t  m_Loop) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimatorStateInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimatorStateInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorStateInfo, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorStateInfo, "UnityEngine", "AnimatorStateInfo");
