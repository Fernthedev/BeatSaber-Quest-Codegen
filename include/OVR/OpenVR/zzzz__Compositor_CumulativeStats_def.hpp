#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor_CumulativeStats)
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Compositor_CumulativeStats);
// Type: OVR.OpenVR::Compositor_CumulativeStats
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8705))
// CS Name: ::OVR.OpenVR::Compositor_CumulativeStats
struct CORDL_TYPE Compositor_CumulativeStats : public ::bs_hook::ValueTypeWrapper<0x3c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field m_nPid offset 0x0
 __declspec(property(get=__get_m_nPid, put=__set_m_nPid)) uint32_t  m_nPid;

/// @brief Field m_nNumFramePresents offset 0x4
 __declspec(property(get=__get_m_nNumFramePresents, put=__set_m_nNumFramePresents)) uint32_t  m_nNumFramePresents;

/// @brief Field m_nNumDroppedFrames offset 0x8
 __declspec(property(get=__get_m_nNumDroppedFrames, put=__set_m_nNumDroppedFrames)) uint32_t  m_nNumDroppedFrames;

/// @brief Field m_nNumReprojectedFrames offset 0xc
 __declspec(property(get=__get_m_nNumReprojectedFrames, put=__set_m_nNumReprojectedFrames)) uint32_t  m_nNumReprojectedFrames;

/// @brief Field m_nNumFramePresentsOnStartup offset 0x10
 __declspec(property(get=__get_m_nNumFramePresentsOnStartup, put=__set_m_nNumFramePresentsOnStartup)) uint32_t  m_nNumFramePresentsOnStartup;

/// @brief Field m_nNumDroppedFramesOnStartup offset 0x14
 __declspec(property(get=__get_m_nNumDroppedFramesOnStartup, put=__set_m_nNumDroppedFramesOnStartup)) uint32_t  m_nNumDroppedFramesOnStartup;

/// @brief Field m_nNumReprojectedFramesOnStartup offset 0x18
 __declspec(property(get=__get_m_nNumReprojectedFramesOnStartup, put=__set_m_nNumReprojectedFramesOnStartup)) uint32_t  m_nNumReprojectedFramesOnStartup;

/// @brief Field m_nNumLoading offset 0x1c
 __declspec(property(get=__get_m_nNumLoading, put=__set_m_nNumLoading)) uint32_t  m_nNumLoading;

/// @brief Field m_nNumFramePresentsLoading offset 0x20
 __declspec(property(get=__get_m_nNumFramePresentsLoading, put=__set_m_nNumFramePresentsLoading)) uint32_t  m_nNumFramePresentsLoading;

/// @brief Field m_nNumDroppedFramesLoading offset 0x24
 __declspec(property(get=__get_m_nNumDroppedFramesLoading, put=__set_m_nNumDroppedFramesLoading)) uint32_t  m_nNumDroppedFramesLoading;

/// @brief Field m_nNumReprojectedFramesLoading offset 0x28
 __declspec(property(get=__get_m_nNumReprojectedFramesLoading, put=__set_m_nNumReprojectedFramesLoading)) uint32_t  m_nNumReprojectedFramesLoading;

/// @brief Field m_nNumTimedOut offset 0x2c
 __declspec(property(get=__get_m_nNumTimedOut, put=__set_m_nNumTimedOut)) uint32_t  m_nNumTimedOut;

/// @brief Field m_nNumFramePresentsTimedOut offset 0x30
 __declspec(property(get=__get_m_nNumFramePresentsTimedOut, put=__set_m_nNumFramePresentsTimedOut)) uint32_t  m_nNumFramePresentsTimedOut;

/// @brief Field m_nNumDroppedFramesTimedOut offset 0x34
 __declspec(property(get=__get_m_nNumDroppedFramesTimedOut, put=__set_m_nNumDroppedFramesTimedOut)) uint32_t  m_nNumDroppedFramesTimedOut;

/// @brief Field m_nNumReprojectedFramesTimedOut offset 0x38
 __declspec(property(get=__get_m_nNumReprojectedFramesTimedOut, put=__set_m_nNumReprojectedFramesTimedOut)) uint32_t  m_nNumReprojectedFramesTimedOut;

constexpr void __set_m_nPid(uint32_t  value) ;

constexpr uint32_t& __get_m_nPid() ;

constexpr uint32_t const& __get_m_nPid() const;

constexpr void __set_m_nNumFramePresents(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumFramePresents() ;

constexpr uint32_t const& __get_m_nNumFramePresents() const;

constexpr void __set_m_nNumDroppedFrames(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumDroppedFrames() ;

constexpr uint32_t const& __get_m_nNumDroppedFrames() const;

constexpr void __set_m_nNumReprojectedFrames(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumReprojectedFrames() ;

constexpr uint32_t const& __get_m_nNumReprojectedFrames() const;

constexpr void __set_m_nNumFramePresentsOnStartup(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumFramePresentsOnStartup() ;

constexpr uint32_t const& __get_m_nNumFramePresentsOnStartup() const;

constexpr void __set_m_nNumDroppedFramesOnStartup(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumDroppedFramesOnStartup() ;

constexpr uint32_t const& __get_m_nNumDroppedFramesOnStartup() const;

constexpr void __set_m_nNumReprojectedFramesOnStartup(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumReprojectedFramesOnStartup() ;

constexpr uint32_t const& __get_m_nNumReprojectedFramesOnStartup() const;

constexpr void __set_m_nNumLoading(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumLoading() ;

constexpr uint32_t const& __get_m_nNumLoading() const;

constexpr void __set_m_nNumFramePresentsLoading(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumFramePresentsLoading() ;

constexpr uint32_t const& __get_m_nNumFramePresentsLoading() const;

constexpr void __set_m_nNumDroppedFramesLoading(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumDroppedFramesLoading() ;

constexpr uint32_t const& __get_m_nNumDroppedFramesLoading() const;

constexpr void __set_m_nNumReprojectedFramesLoading(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumReprojectedFramesLoading() ;

constexpr uint32_t const& __get_m_nNumReprojectedFramesLoading() const;

constexpr void __set_m_nNumTimedOut(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumTimedOut() ;

constexpr uint32_t const& __get_m_nNumTimedOut() const;

constexpr void __set_m_nNumFramePresentsTimedOut(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumFramePresentsTimedOut() ;

constexpr uint32_t const& __get_m_nNumFramePresentsTimedOut() const;

constexpr void __set_m_nNumDroppedFramesTimedOut(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumDroppedFramesTimedOut() ;

constexpr uint32_t const& __get_m_nNumDroppedFramesTimedOut() const;

constexpr void __set_m_nNumReprojectedFramesTimedOut(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumReprojectedFramesTimedOut() ;

constexpr uint32_t const& __get_m_nNumReprojectedFramesTimedOut() const;

// Ctor Parameters [CppParam { name: "m_nPid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresentsOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresentsLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFramesLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresentsTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Compositor_CumulativeStats(uint32_t  m_nPid, uint32_t  m_nNumFramePresents, uint32_t  m_nNumDroppedFrames, uint32_t  m_nNumReprojectedFrames, uint32_t  m_nNumFramePresentsOnStartup, uint32_t  m_nNumDroppedFramesOnStartup, uint32_t  m_nNumReprojectedFramesOnStartup, uint32_t  m_nNumLoading, uint32_t  m_nNumFramePresentsLoading, uint32_t  m_nNumDroppedFramesLoading, uint32_t  m_nNumReprojectedFramesLoading, uint32_t  m_nNumTimedOut, uint32_t  m_nNumFramePresentsTimedOut, uint32_t  m_nNumDroppedFramesTimedOut, uint32_t  m_nNumReprojectedFramesTimedOut) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Compositor_CumulativeStats(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x3c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Compositor_CumulativeStats()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Compositor_CumulativeStats, 0x3c>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_CumulativeStats, "OVR.OpenVR", "Compositor_CumulativeStats");
