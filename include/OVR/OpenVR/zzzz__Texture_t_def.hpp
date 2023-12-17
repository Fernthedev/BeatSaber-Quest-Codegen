#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture_t)
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct EColorSpace;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Texture_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Texture_t);
// Type: OVR.OpenVR::Texture_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8657))
// CS Name: ::OVR.OpenVR::Texture_t
struct CORDL_TYPE Texture_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field handle offset 0x0
 __declspec(property(get=__get_handle, put=__set_handle)) ::cordl_internals::intptr_t  handle;

/// @brief Field eType offset 0x8
 __declspec(property(get=__get_eType, put=__set_eType)) ::OVR::OpenVR::ETextureType  eType;

/// @brief Field eColorSpace offset 0xc
 __declspec(property(get=__get_eColorSpace, put=__set_eColorSpace)) ::OVR::OpenVR::EColorSpace  eColorSpace;

constexpr void __set_handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_handle() ;

constexpr ::cordl_internals::intptr_t const& __get_handle() const;

constexpr void __set_eType(::OVR::OpenVR::ETextureType  value) ;

constexpr ::OVR::OpenVR::ETextureType& __get_eType() ;

constexpr ::OVR::OpenVR::ETextureType const& __get_eType() const;

constexpr void __set_eColorSpace(::OVR::OpenVR::EColorSpace  value) ;

constexpr ::OVR::OpenVR::EColorSpace& __get_eColorSpace() ;

constexpr ::OVR::OpenVR::EColorSpace const& __get_eColorSpace() const;

// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "eType", ty: "::OVR::OpenVR::ETextureType", modifiers: "", def_value: None }, CppParam { name: "eColorSpace", ty: "::OVR::OpenVR::EColorSpace", modifiers: "", def_value: None }]
constexpr Texture_t(::cordl_internals::intptr_t  handle, ::OVR::OpenVR::ETextureType  eType, ::OVR::OpenVR::EColorSpace  eColorSpace) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Texture_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Texture_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Texture_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Texture_t, "OVR.OpenVR", "Texture_t");
