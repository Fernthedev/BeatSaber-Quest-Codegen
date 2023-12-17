#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneWeight1)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoneWeight1);
// Type: UnityEngine::BoneWeight1
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10135))
// CS Name: ::UnityEngine::BoneWeight1
struct CORDL_TYPE BoneWeight1 : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Weight offset 0x0
 __declspec(property(get=__get_m_Weight, put=__set_m_Weight)) float_t  m_Weight;

/// @brief Field m_BoneIndex offset 0x4
 __declspec(property(get=__get_m_BoneIndex, put=__set_m_BoneIndex)) int32_t  m_BoneIndex;

 __declspec(property(get=get_weight)) float_t  weight;

 __declspec(property(get=get_boneIndex)) int32_t  boneIndex;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::BoneWeight1>*() ;

constexpr void __set_m_Weight(float_t  value) ;

constexpr float_t& __get_m_Weight() ;

constexpr float_t const& __get_m_Weight() const;

constexpr void __set_m_BoneIndex(int32_t  value) ;

constexpr int32_t& __get_m_BoneIndex() ;

constexpr int32_t const& __get_m_BoneIndex() const;

/// @brief Method get_weight addr 0x2cc4544 size 0x8 virtual false final false
inline float_t get_weight() ;

/// @brief Method get_boneIndex addr 0x2cc454c size 0x8 virtual false final false
inline int32_t get_boneIndex() ;

/// @brief Method Equals addr 0x2cc4554 size 0x78 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cc45cc size 0x5c virtual true final true
inline bool Equals(::UnityEngine::BoneWeight1  other) ;

/// @brief Method GetHashCode addr 0x2cc4628 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BoneWeight1(float_t  m_Weight, int32_t  m_BoneIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BoneWeight1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BoneWeight1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoneWeight1, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight1, "UnityEngine", "BoneWeight1");
