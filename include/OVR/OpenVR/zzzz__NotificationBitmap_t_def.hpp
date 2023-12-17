#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotificationBitmap_t)
// Forward declare root types
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::NotificationBitmap_t);
// Type: OVR.OpenVR::NotificationBitmap_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8718))
// CS Name: ::OVR.OpenVR::NotificationBitmap_t
struct CORDL_TYPE NotificationBitmap_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_pImageData offset 0x0
 __declspec(property(get=__get_m_pImageData, put=__set_m_pImageData)) ::cordl_internals::intptr_t  m_pImageData;

/// @brief Field m_nWidth offset 0x8
 __declspec(property(get=__get_m_nWidth, put=__set_m_nWidth)) int32_t  m_nWidth;

/// @brief Field m_nHeight offset 0xc
 __declspec(property(get=__get_m_nHeight, put=__set_m_nHeight)) int32_t  m_nHeight;

/// @brief Field m_nBytesPerPixel offset 0x10
 __declspec(property(get=__get_m_nBytesPerPixel, put=__set_m_nBytesPerPixel)) int32_t  m_nBytesPerPixel;

constexpr void __set_m_pImageData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pImageData() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pImageData() const;

constexpr void __set_m_nWidth(int32_t  value) ;

constexpr int32_t& __get_m_nWidth() ;

constexpr int32_t const& __get_m_nWidth() const;

constexpr void __set_m_nHeight(int32_t  value) ;

constexpr int32_t& __get_m_nHeight() ;

constexpr int32_t const& __get_m_nHeight() const;

constexpr void __set_m_nBytesPerPixel(int32_t  value) ;

constexpr int32_t& __get_m_nBytesPerPixel() ;

constexpr int32_t const& __get_m_nBytesPerPixel() const;

// Ctor Parameters [CppParam { name: "m_pImageData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_nWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nBytesPerPixel", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NotificationBitmap_t(::cordl_internals::intptr_t  m_pImageData, int32_t  m_nWidth, int32_t  m_nHeight, int32_t  m_nBytesPerPixel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NotificationBitmap_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NotificationBitmap_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::NotificationBitmap_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::NotificationBitmap_t, "OVR.OpenVR", "NotificationBitmap_t");
