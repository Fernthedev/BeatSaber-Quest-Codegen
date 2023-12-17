#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DriverDirectMode_FrameTiming)
// Forward declare root types
namespace OVR::OpenVR {
struct DriverDirectMode_FrameTiming;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::DriverDirectMode_FrameTiming);
// Type: OVR.OpenVR::DriverDirectMode_FrameTiming
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8701))
// CS Name: ::OVR.OpenVR::DriverDirectMode_FrameTiming
struct CORDL_TYPE DriverDirectMode_FrameTiming : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_nSize offset 0x0
 __declspec(property(get=__get_m_nSize, put=__set_m_nSize)) uint32_t  m_nSize;

/// @brief Field m_nNumFramePresents offset 0x4
 __declspec(property(get=__get_m_nNumFramePresents, put=__set_m_nNumFramePresents)) uint32_t  m_nNumFramePresents;

/// @brief Field m_nNumMisPresented offset 0x8
 __declspec(property(get=__get_m_nNumMisPresented, put=__set_m_nNumMisPresented)) uint32_t  m_nNumMisPresented;

/// @brief Field m_nNumDroppedFrames offset 0xc
 __declspec(property(get=__get_m_nNumDroppedFrames, put=__set_m_nNumDroppedFrames)) uint32_t  m_nNumDroppedFrames;

/// @brief Field m_nReprojectionFlags offset 0x10
 __declspec(property(get=__get_m_nReprojectionFlags, put=__set_m_nReprojectionFlags)) uint32_t  m_nReprojectionFlags;

constexpr void __set_m_nSize(uint32_t  value) ;

constexpr uint32_t& __get_m_nSize() ;

constexpr uint32_t const& __get_m_nSize() const;

constexpr void __set_m_nNumFramePresents(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumFramePresents() ;

constexpr uint32_t const& __get_m_nNumFramePresents() const;

constexpr void __set_m_nNumMisPresented(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumMisPresented() ;

constexpr uint32_t const& __get_m_nNumMisPresented() const;

constexpr void __set_m_nNumDroppedFrames(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumDroppedFrames() ;

constexpr uint32_t const& __get_m_nNumDroppedFrames() const;

constexpr void __set_m_nReprojectionFlags(uint32_t  value) ;

constexpr uint32_t& __get_m_nReprojectionFlags() ;

constexpr uint32_t const& __get_m_nReprojectionFlags() const;

// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DriverDirectMode_FrameTiming(uint32_t  m_nSize, uint32_t  m_nNumFramePresents, uint32_t  m_nNumMisPresented, uint32_t  m_nNumDroppedFrames, uint32_t  m_nReprojectionFlags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DriverDirectMode_FrameTiming(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DriverDirectMode_FrameTiming()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::DriverDirectMode_FrameTiming, 0x14>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::DriverDirectMode_FrameTiming, "OVR.OpenVR", "DriverDirectMode_FrameTiming");
