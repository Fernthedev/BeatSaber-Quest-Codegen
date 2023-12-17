#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Resolution)
// Forward declare root types
namespace UnityEngine {
struct Resolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Resolution);
// Type: UnityEngine::Resolution
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10083))
// CS Name: ::UnityEngine::Resolution
struct CORDL_TYPE Resolution : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_Width offset 0x0
 __declspec(property(get=__get_m_Width, put=__set_m_Width)) int32_t  m_Width;

/// @brief Field m_Height offset 0x4
 __declspec(property(get=__get_m_Height, put=__set_m_Height)) int32_t  m_Height;

/// @brief Field m_RefreshRate offset 0x8
 __declspec(property(get=__get_m_RefreshRate, put=__set_m_RefreshRate)) int32_t  m_RefreshRate;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_refreshRate, put=set_refreshRate)) int32_t  refreshRate;

constexpr void __set_m_Width(int32_t  value) ;

constexpr int32_t& __get_m_Width() ;

constexpr int32_t const& __get_m_Width() const;

constexpr void __set_m_Height(int32_t  value) ;

constexpr int32_t& __get_m_Height() ;

constexpr int32_t const& __get_m_Height() const;

constexpr void __set_m_RefreshRate(int32_t  value) ;

constexpr int32_t& __get_m_RefreshRate() ;

constexpr int32_t const& __get_m_RefreshRate() const;

/// @brief Method get_width addr 0x2cb64f0 size 0x8 virtual false final false
inline int32_t get_width() ;

/// @brief Method set_width addr 0x2cb64f8 size 0x8 virtual false final false
inline void set_width(int32_t  value) ;

/// @brief Method get_height addr 0x2cb6500 size 0x8 virtual false final false
inline int32_t get_height() ;

/// @brief Method set_height addr 0x2cb6508 size 0x8 virtual false final false
inline void set_height(int32_t  value) ;

/// @brief Method get_refreshRate addr 0x2cb6510 size 0x8 virtual false final false
inline int32_t get_refreshRate() ;

/// @brief Method set_refreshRate addr 0x2cb6518 size 0x8 virtual false final false
inline void set_refreshRate(int32_t  value) ;

/// @brief Method ToString addr 0x2cb6520 size 0x16c virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RefreshRate", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Resolution(int32_t  m_Width, int32_t  m_Height, int32_t  m_RefreshRate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Resolution(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Resolution()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Resolution, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Resolution, "UnityEngine", "Resolution");
