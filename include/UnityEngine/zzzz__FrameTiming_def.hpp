#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameTiming)
// Forward declare root types
namespace UnityEngine {
struct FrameTiming;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FrameTiming);
// Type: UnityEngine::FrameTiming
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10132))
// CS Name: ::UnityEngine::FrameTiming
struct CORDL_TYPE FrameTiming : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field cpuTimePresentCalled offset 0x0
 __declspec(property(get=__get_cpuTimePresentCalled, put=__set_cpuTimePresentCalled)) uint64_t  cpuTimePresentCalled;

/// @brief Field cpuFrameTime offset 0x8
 __declspec(property(get=__get_cpuFrameTime, put=__set_cpuFrameTime)) double_t  cpuFrameTime;

/// @brief Field cpuTimeFrameComplete offset 0x10
 __declspec(property(get=__get_cpuTimeFrameComplete, put=__set_cpuTimeFrameComplete)) uint64_t  cpuTimeFrameComplete;

/// @brief Field gpuFrameTime offset 0x18
 __declspec(property(get=__get_gpuFrameTime, put=__set_gpuFrameTime)) double_t  gpuFrameTime;

/// @brief Field heightScale offset 0x20
 __declspec(property(get=__get_heightScale, put=__set_heightScale)) float_t  heightScale;

/// @brief Field widthScale offset 0x24
 __declspec(property(get=__get_widthScale, put=__set_widthScale)) float_t  widthScale;

/// @brief Field syncInterval offset 0x28
 __declspec(property(get=__get_syncInterval, put=__set_syncInterval)) uint32_t  syncInterval;

constexpr void __set_cpuTimePresentCalled(uint64_t  value) ;

constexpr uint64_t& __get_cpuTimePresentCalled() ;

constexpr uint64_t const& __get_cpuTimePresentCalled() const;

constexpr void __set_cpuFrameTime(double_t  value) ;

constexpr double_t& __get_cpuFrameTime() ;

constexpr double_t const& __get_cpuFrameTime() const;

constexpr void __set_cpuTimeFrameComplete(uint64_t  value) ;

constexpr uint64_t& __get_cpuTimeFrameComplete() ;

constexpr uint64_t const& __get_cpuTimeFrameComplete() const;

constexpr void __set_gpuFrameTime(double_t  value) ;

constexpr double_t& __get_gpuFrameTime() ;

constexpr double_t const& __get_gpuFrameTime() const;

constexpr void __set_heightScale(float_t  value) ;

constexpr float_t& __get_heightScale() ;

constexpr float_t const& __get_heightScale() const;

constexpr void __set_widthScale(float_t  value) ;

constexpr float_t& __get_widthScale() ;

constexpr float_t const& __get_widthScale() const;

constexpr void __set_syncInterval(uint32_t  value) ;

constexpr uint32_t& __get_syncInterval() ;

constexpr uint32_t const& __get_syncInterval() const;

// Ctor Parameters [CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "syncInterval", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FrameTiming(uint64_t  cpuTimePresentCalled, double_t  cpuFrameTime, uint64_t  cpuTimeFrameComplete, double_t  gpuFrameTime, float_t  heightScale, float_t  widthScale, uint32_t  syncInterval) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FrameTiming(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FrameTiming()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FrameTiming, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTiming, "UnityEngine", "FrameTiming");
