#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HumanDescription)
namespace UnityEngine {
struct SkeletonBone;
}
namespace UnityEngine {
struct HumanBone;
}
// Forward declare root types
namespace UnityEngine {
struct HumanDescription;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanDescription);
// Type: UnityEngine::HumanDescription
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14852))
// CS Name: ::UnityEngine::HumanDescription
struct CORDL_TYPE HumanDescription : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field human offset 0x0
 __declspec(property(get=__get_human, put=__set_human)) ::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>  human;

/// @brief Field skeleton offset 0x8
 __declspec(property(get=__get_skeleton, put=__set_skeleton)) ::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>  skeleton;

/// @brief Field m_ArmTwist offset 0x10
 __declspec(property(get=__get_m_ArmTwist, put=__set_m_ArmTwist)) float_t  m_ArmTwist;

/// @brief Field m_ForeArmTwist offset 0x14
 __declspec(property(get=__get_m_ForeArmTwist, put=__set_m_ForeArmTwist)) float_t  m_ForeArmTwist;

/// @brief Field m_UpperLegTwist offset 0x18
 __declspec(property(get=__get_m_UpperLegTwist, put=__set_m_UpperLegTwist)) float_t  m_UpperLegTwist;

/// @brief Field m_LegTwist offset 0x1c
 __declspec(property(get=__get_m_LegTwist, put=__set_m_LegTwist)) float_t  m_LegTwist;

/// @brief Field m_ArmStretch offset 0x20
 __declspec(property(get=__get_m_ArmStretch, put=__set_m_ArmStretch)) float_t  m_ArmStretch;

/// @brief Field m_LegStretch offset 0x24
 __declspec(property(get=__get_m_LegStretch, put=__set_m_LegStretch)) float_t  m_LegStretch;

/// @brief Field m_FeetSpacing offset 0x28
 __declspec(property(get=__get_m_FeetSpacing, put=__set_m_FeetSpacing)) float_t  m_FeetSpacing;

/// @brief Field m_GlobalScale offset 0x2c
 __declspec(property(get=__get_m_GlobalScale, put=__set_m_GlobalScale)) float_t  m_GlobalScale;

/// @brief Field m_RootMotionBoneName offset 0x30
 __declspec(property(get=__get_m_RootMotionBoneName, put=__set_m_RootMotionBoneName)) ::StringW  m_RootMotionBoneName;

/// @brief Field m_HasTranslationDoF offset 0x38
 __declspec(property(get=__get_m_HasTranslationDoF, put=__set_m_HasTranslationDoF)) bool  m_HasTranslationDoF;

/// @brief Field m_HasExtraRoot offset 0x39
 __declspec(property(get=__get_m_HasExtraRoot, put=__set_m_HasExtraRoot)) bool  m_HasExtraRoot;

/// @brief Field m_SkeletonHasParents offset 0x3a
 __declspec(property(get=__get_m_SkeletonHasParents, put=__set_m_SkeletonHasParents)) bool  m_SkeletonHasParents;

constexpr void __set_human(::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>  value) ;

constexpr ::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>& __get_human() ;

constexpr ::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*> const& __get_human() const;

constexpr void __set_skeleton(::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>  value) ;

constexpr ::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>& __get_skeleton() ;

constexpr ::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*> const& __get_skeleton() const;

constexpr void __set_m_ArmTwist(float_t  value) ;

constexpr float_t& __get_m_ArmTwist() ;

constexpr float_t const& __get_m_ArmTwist() const;

constexpr void __set_m_ForeArmTwist(float_t  value) ;

constexpr float_t& __get_m_ForeArmTwist() ;

constexpr float_t const& __get_m_ForeArmTwist() const;

constexpr void __set_m_UpperLegTwist(float_t  value) ;

constexpr float_t& __get_m_UpperLegTwist() ;

constexpr float_t const& __get_m_UpperLegTwist() const;

constexpr void __set_m_LegTwist(float_t  value) ;

constexpr float_t& __get_m_LegTwist() ;

constexpr float_t const& __get_m_LegTwist() const;

constexpr void __set_m_ArmStretch(float_t  value) ;

constexpr float_t& __get_m_ArmStretch() ;

constexpr float_t const& __get_m_ArmStretch() const;

constexpr void __set_m_LegStretch(float_t  value) ;

constexpr float_t& __get_m_LegStretch() ;

constexpr float_t const& __get_m_LegStretch() const;

constexpr void __set_m_FeetSpacing(float_t  value) ;

constexpr float_t& __get_m_FeetSpacing() ;

constexpr float_t const& __get_m_FeetSpacing() const;

constexpr void __set_m_GlobalScale(float_t  value) ;

constexpr float_t& __get_m_GlobalScale() ;

constexpr float_t const& __get_m_GlobalScale() const;

constexpr void __set_m_RootMotionBoneName(::StringW  value) ;

constexpr ::StringW& __get_m_RootMotionBoneName() ;

constexpr ::StringW const& __get_m_RootMotionBoneName() const;

constexpr void __set_m_HasTranslationDoF(bool  value) ;

constexpr bool& __get_m_HasTranslationDoF() ;

constexpr bool const& __get_m_HasTranslationDoF() const;

constexpr void __set_m_HasExtraRoot(bool  value) ;

constexpr bool& __get_m_HasExtraRoot() ;

constexpr bool const& __get_m_HasExtraRoot() const;

constexpr void __set_m_SkeletonHasParents(bool  value) ;

constexpr bool& __get_m_SkeletonHasParents() ;

constexpr bool const& __get_m_SkeletonHasParents() const;

// Ctor Parameters [CppParam { name: "human", ty: "::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>", modifiers: "", def_value: None }, CppParam { name: "skeleton", ty: "::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>", modifiers: "", def_value: None }, CppParam { name: "m_ArmTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ForeArmTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UpperLegTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LegTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ArmStretch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LegStretch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_FeetSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_GlobalScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RootMotionBoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_HasTranslationDoF", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_HasExtraRoot", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SkeletonHasParents", ty: "bool", modifiers: "", def_value: None }]
constexpr HumanDescription(::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>  human, ::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>  skeleton, float_t  m_ArmTwist, float_t  m_ForeArmTwist, float_t  m_UpperLegTwist, float_t  m_LegTwist, float_t  m_ArmStretch, float_t  m_LegStretch, float_t  m_FeetSpacing, float_t  m_GlobalScale, ::StringW  m_RootMotionBoneName, bool  m_HasTranslationDoF, bool  m_HasExtraRoot, bool  m_SkeletonHasParents) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HumanDescription(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HumanDescription()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanDescription, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanDescription, "UnityEngine", "HumanDescription");
