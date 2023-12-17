#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactFilter2D)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine {
struct ContactFilter2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactFilter2D);
// Type: UnityEngine::ContactFilter2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15931))
// CS Name: ::UnityEngine::ContactFilter2D
struct CORDL_TYPE ContactFilter2D : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field useTriggers offset 0x0
 __declspec(property(get=__get_useTriggers, put=__set_useTriggers)) bool  useTriggers;

/// @brief Field useLayerMask offset 0x1
 __declspec(property(get=__get_useLayerMask, put=__set_useLayerMask)) bool  useLayerMask;

/// @brief Field useDepth offset 0x2
 __declspec(property(get=__get_useDepth, put=__set_useDepth)) bool  useDepth;

/// @brief Field useOutsideDepth offset 0x3
 __declspec(property(get=__get_useOutsideDepth, put=__set_useOutsideDepth)) bool  useOutsideDepth;

/// @brief Field useNormalAngle offset 0x4
 __declspec(property(get=__get_useNormalAngle, put=__set_useNormalAngle)) bool  useNormalAngle;

/// @brief Field useOutsideNormalAngle offset 0x5
 __declspec(property(get=__get_useOutsideNormalAngle, put=__set_useOutsideNormalAngle)) bool  useOutsideNormalAngle;

/// @brief Field layerMask offset 0x8
 __declspec(property(get=__get_layerMask, put=__set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field minDepth offset 0xc
 __declspec(property(get=__get_minDepth, put=__set_minDepth)) float_t  minDepth;

/// @brief Field maxDepth offset 0x10
 __declspec(property(get=__get_maxDepth, put=__set_maxDepth)) float_t  maxDepth;

/// @brief Field minNormalAngle offset 0x14
 __declspec(property(get=__get_minNormalAngle, put=__set_minNormalAngle)) float_t  minNormalAngle;

/// @brief Field maxNormalAngle offset 0x18
 __declspec(property(get=__get_maxNormalAngle, put=__set_maxNormalAngle)) float_t  maxNormalAngle;

constexpr void __set_useTriggers(bool  value) ;

constexpr bool& __get_useTriggers() ;

constexpr bool const& __get_useTriggers() const;

constexpr void __set_useLayerMask(bool  value) ;

constexpr bool& __get_useLayerMask() ;

constexpr bool const& __get_useLayerMask() const;

constexpr void __set_useDepth(bool  value) ;

constexpr bool& __get_useDepth() ;

constexpr bool const& __get_useDepth() const;

constexpr void __set_useOutsideDepth(bool  value) ;

constexpr bool& __get_useOutsideDepth() ;

constexpr bool const& __get_useOutsideDepth() const;

constexpr void __set_useNormalAngle(bool  value) ;

constexpr bool& __get_useNormalAngle() ;

constexpr bool const& __get_useNormalAngle() const;

constexpr void __set_useOutsideNormalAngle(bool  value) ;

constexpr bool& __get_useOutsideNormalAngle() ;

constexpr bool const& __get_useOutsideNormalAngle() const;

constexpr void __set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get_layerMask() ;

constexpr ::UnityEngine::LayerMask const& __get_layerMask() const;

constexpr void __set_minDepth(float_t  value) ;

constexpr float_t& __get_minDepth() ;

constexpr float_t const& __get_minDepth() const;

constexpr void __set_maxDepth(float_t  value) ;

constexpr float_t& __get_maxDepth() ;

constexpr float_t const& __get_maxDepth() const;

constexpr void __set_minNormalAngle(float_t  value) ;

constexpr float_t& __get_minNormalAngle() ;

constexpr float_t const& __get_minNormalAngle() const;

constexpr void __set_maxNormalAngle(float_t  value) ;

constexpr float_t& __get_maxNormalAngle() ;

constexpr float_t const& __get_maxNormalAngle() const;

/// @brief Method CheckConsistency addr 0x2d13270 size 0x3c virtual false final false
inline void CheckConsistency() ;

/// @brief Method SetLayerMask addr 0x2d132e8 size 0x10 virtual false final false
inline void SetLayerMask(::UnityEngine::LayerMask  layerMask) ;

/// @brief Method SetDepth addr 0x2d132f8 size 0x48 virtual false final false
inline void SetDepth(float_t  minDepth, float_t  maxDepth) ;

/// @brief Method CreateLegacyFilter addr 0x2d11cbc size 0x100 virtual false final false
static inline ::UnityEngine::ContactFilter2D CreateLegacyFilter(int32_t  layerMask, float_t  minDepth, float_t  maxDepth) ;

/// @brief Method CheckConsistency_Injected addr 0x2d132ac size 0x3c virtual false final false
static inline void CheckConsistency_Injected(ByRef<::UnityEngine::ContactFilter2D>  _unity_self) ;

// Ctor Parameters [CppParam { name: "useTriggers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useLayerMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useOutsideDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useNormalAngle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useOutsideNormalAngle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minNormalAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxNormalAngle", ty: "float_t", modifiers: "", def_value: None }]
constexpr ContactFilter2D(bool  useTriggers, bool  useLayerMask, bool  useDepth, bool  useOutsideDepth, bool  useNormalAngle, bool  useOutsideNormalAngle, ::UnityEngine::LayerMask  layerMask, float_t  minDepth, float_t  maxDepth, float_t  minNormalAngle, float_t  maxNormalAngle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ContactFilter2D(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ContactFilter2D()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactFilter2D, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactFilter2D, "UnityEngine", "ContactFilter2D");
