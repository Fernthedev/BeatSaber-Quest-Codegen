#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneWeight)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoneWeight);
// Type: UnityEngine::BoneWeight
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10134))
// CS Name: ::UnityEngine::BoneWeight
struct CORDL_TYPE BoneWeight : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Weight0 offset 0x0
 __declspec(property(get=__get_m_Weight0, put=__set_m_Weight0)) float_t  m_Weight0;

/// @brief Field m_Weight1 offset 0x4
 __declspec(property(get=__get_m_Weight1, put=__set_m_Weight1)) float_t  m_Weight1;

/// @brief Field m_Weight2 offset 0x8
 __declspec(property(get=__get_m_Weight2, put=__set_m_Weight2)) float_t  m_Weight2;

/// @brief Field m_Weight3 offset 0xc
 __declspec(property(get=__get_m_Weight3, put=__set_m_Weight3)) float_t  m_Weight3;

/// @brief Field m_BoneIndex0 offset 0x10
 __declspec(property(get=__get_m_BoneIndex0, put=__set_m_BoneIndex0)) int32_t  m_BoneIndex0;

/// @brief Field m_BoneIndex1 offset 0x14
 __declspec(property(get=__get_m_BoneIndex1, put=__set_m_BoneIndex1)) int32_t  m_BoneIndex1;

/// @brief Field m_BoneIndex2 offset 0x18
 __declspec(property(get=__get_m_BoneIndex2, put=__set_m_BoneIndex2)) int32_t  m_BoneIndex2;

/// @brief Field m_BoneIndex3 offset 0x1c
 __declspec(property(get=__get_m_BoneIndex3, put=__set_m_BoneIndex3)) int32_t  m_BoneIndex3;

 __declspec(property(get=get_weight0, put=set_weight0)) float_t  weight0;

 __declspec(property(get=get_weight1, put=set_weight1)) float_t  weight1;

 __declspec(property(get=get_weight2, put=set_weight2)) float_t  weight2;

 __declspec(property(get=get_weight3, put=set_weight3)) float_t  weight3;

 __declspec(property(get=get_boneIndex0, put=set_boneIndex0)) int32_t  boneIndex0;

 __declspec(property(get=get_boneIndex1, put=set_boneIndex1)) int32_t  boneIndex1;

 __declspec(property(get=get_boneIndex2, put=set_boneIndex2)) int32_t  boneIndex2;

 __declspec(property(get=get_boneIndex3, put=set_boneIndex3)) int32_t  boneIndex3;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::BoneWeight>*() ;

constexpr void __set_m_Weight0(float_t  value) ;

constexpr float_t& __get_m_Weight0() ;

constexpr float_t const& __get_m_Weight0() const;

constexpr void __set_m_Weight1(float_t  value) ;

constexpr float_t& __get_m_Weight1() ;

constexpr float_t const& __get_m_Weight1() const;

constexpr void __set_m_Weight2(float_t  value) ;

constexpr float_t& __get_m_Weight2() ;

constexpr float_t const& __get_m_Weight2() const;

constexpr void __set_m_Weight3(float_t  value) ;

constexpr float_t& __get_m_Weight3() ;

constexpr float_t const& __get_m_Weight3() const;

constexpr void __set_m_BoneIndex0(int32_t  value) ;

constexpr int32_t& __get_m_BoneIndex0() ;

constexpr int32_t const& __get_m_BoneIndex0() const;

constexpr void __set_m_BoneIndex1(int32_t  value) ;

constexpr int32_t& __get_m_BoneIndex1() ;

constexpr int32_t const& __get_m_BoneIndex1() const;

constexpr void __set_m_BoneIndex2(int32_t  value) ;

constexpr int32_t& __get_m_BoneIndex2() ;

constexpr int32_t const& __get_m_BoneIndex2() const;

constexpr void __set_m_BoneIndex3(int32_t  value) ;

constexpr int32_t& __get_m_BoneIndex3() ;

constexpr int32_t const& __get_m_BoneIndex3() const;

/// @brief Method get_weight0 addr 0x2cc425c size 0x8 virtual false final false
inline float_t get_weight0() ;

/// @brief Method set_weight0 addr 0x2cc4264 size 0x8 virtual false final false
inline void set_weight0(float_t  value) ;

/// @brief Method get_weight1 addr 0x2cc426c size 0x8 virtual false final false
inline float_t get_weight1() ;

/// @brief Method set_weight1 addr 0x2cc4274 size 0x8 virtual false final false
inline void set_weight1(float_t  value) ;

/// @brief Method get_weight2 addr 0x2cc427c size 0x8 virtual false final false
inline float_t get_weight2() ;

/// @brief Method set_weight2 addr 0x2cc4284 size 0x8 virtual false final false
inline void set_weight2(float_t  value) ;

/// @brief Method get_weight3 addr 0x2cc428c size 0x8 virtual false final false
inline float_t get_weight3() ;

/// @brief Method set_weight3 addr 0x2cc4294 size 0x8 virtual false final false
inline void set_weight3(float_t  value) ;

/// @brief Method get_boneIndex0 addr 0x2cc429c size 0x8 virtual false final false
inline int32_t get_boneIndex0() ;

/// @brief Method set_boneIndex0 addr 0x2cc42a4 size 0x8 virtual false final false
inline void set_boneIndex0(int32_t  value) ;

/// @brief Method get_boneIndex1 addr 0x2cc42ac size 0x8 virtual false final false
inline int32_t get_boneIndex1() ;

/// @brief Method set_boneIndex1 addr 0x2cc42b4 size 0x8 virtual false final false
inline void set_boneIndex1(int32_t  value) ;

/// @brief Method get_boneIndex2 addr 0x2cc42bc size 0x8 virtual false final false
inline int32_t get_boneIndex2() ;

/// @brief Method set_boneIndex2 addr 0x2cc42c4 size 0x8 virtual false final false
inline void set_boneIndex2(int32_t  value) ;

/// @brief Method get_boneIndex3 addr 0x2cc42cc size 0x8 virtual false final false
inline int32_t get_boneIndex3() ;

/// @brief Method set_boneIndex3 addr 0x2cc42d4 size 0x8 virtual false final false
inline void set_boneIndex3(int32_t  value) ;

/// @brief Method GetHashCode addr 0x2cc42dc size 0x108 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2cc43e4 size 0x88 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cc446c size 0xd8 virtual true final true
inline bool Equals(::UnityEngine::BoneWeight  other) ;

// Ctor Parameters [CppParam { name: "m_Weight0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BoneWeight(float_t  m_Weight0, float_t  m_Weight1, float_t  m_Weight2, float_t  m_Weight3, int32_t  m_BoneIndex0, int32_t  m_BoneIndex1, int32_t  m_BoneIndex2, int32_t  m_BoneIndex3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BoneWeight(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BoneWeight()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoneWeight, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight, "UnityEngine", "BoneWeight");
