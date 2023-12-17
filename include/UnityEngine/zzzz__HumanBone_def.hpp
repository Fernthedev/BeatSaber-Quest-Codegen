#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HumanBone)
namespace UnityEngine {
struct HumanLimit;
}
// Forward declare root types
namespace UnityEngine {
struct HumanBone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanBone);
// Type: UnityEngine::HumanBone
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14851))
// CS Name: ::UnityEngine::HumanBone
struct CORDL_TYPE HumanBone : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_BoneName offset 0x0
 __declspec(property(get=__get_m_BoneName, put=__set_m_BoneName)) ::StringW  m_BoneName;

/// @brief Field m_HumanName offset 0x8
 __declspec(property(get=__get_m_HumanName, put=__set_m_HumanName)) ::StringW  m_HumanName;

/// @brief Field limit offset 0x10
 __declspec(property(get=__get_limit, put=__set_limit)) ::UnityEngine::HumanLimit  limit;

constexpr void __set_m_BoneName(::StringW  value) ;

constexpr ::StringW& __get_m_BoneName() ;

constexpr ::StringW const& __get_m_BoneName() const;

constexpr void __set_m_HumanName(::StringW  value) ;

constexpr ::StringW& __get_m_HumanName() ;

constexpr ::StringW const& __get_m_HumanName() const;

constexpr void __set_limit(::UnityEngine::HumanLimit  value) ;

constexpr ::UnityEngine::HumanLimit& __get_limit() ;

constexpr ::UnityEngine::HumanLimit const& __get_limit() const;

// Ctor Parameters [CppParam { name: "m_BoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_HumanName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "::UnityEngine::HumanLimit", modifiers: "", def_value: None }]
constexpr HumanBone(::StringW  m_BoneName, ::StringW  m_HumanName, ::UnityEngine::HumanLimit  limit) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HumanBone(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HumanBone()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanBone, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanBone, "UnityEngine", "HumanBone");
