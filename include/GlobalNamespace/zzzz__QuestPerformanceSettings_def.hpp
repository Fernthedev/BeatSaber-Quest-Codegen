#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestPerformanceSettings)
namespace GlobalNamespace {
struct __QuestPerformanceSettings__ProcessorPerformanceLevel;
}
// Forward declare root types
namespace GlobalNamespace {
struct __QuestPerformanceSettings__ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
class QuestPerformanceSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel);
MARK_REF_PTR_T(::GlobalNamespace::QuestPerformanceSettings);
// Type: ::ProcessorPerformanceLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4444))
// CS Name: ::QuestPerformanceSettings::ProcessorPerformanceLevel
struct CORDL_TYPE __QuestPerformanceSettings__ProcessorPerformanceLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____QuestPerformanceSettings__ProcessorPerformanceLevel_Unwrapped
enum struct ____QuestPerformanceSettings__ProcessorPerformanceLevel_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_PowerSavings = static_cast<int32_t>(0x0),
__E_SustainedLow = static_cast<int32_t>(0x1),
__E_SustainedHigh = static_cast<int32_t>(0x2),
__E_Boost = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
static ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const Unknown;

/// @brief Field PowerSavings value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const PowerSavings;

/// @brief Field SustainedLow value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const SustainedLow;

/// @brief Field SustainedHigh value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const SustainedHigh;

/// @brief Field Boost value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const Boost;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____QuestPerformanceSettings__ProcessorPerformanceLevel_Unwrapped () const noexcept {
return std::bit_cast<____QuestPerformanceSettings__ProcessorPerformanceLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __QuestPerformanceSettings__ProcessorPerformanceLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QuestPerformanceSettings__ProcessorPerformanceLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QuestPerformanceSettings__ProcessorPerformanceLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::QuestPerformanceSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4445))
// CS Name: ::QuestPerformanceSettings*
class CORDL_TYPE QuestPerformanceSettings : public ::System::Object {
public:
// Declarations
using ProcessorPerformanceLevel = ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field gpuLevel offset 0x10
 __declspec(property(get=__get_gpuLevel, put=__set_gpuLevel)) ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel  gpuLevel;

/// @brief Field cpuLevel offset 0x14
 __declspec(property(get=__get_cpuLevel, put=__set_cpuLevel)) ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel  cpuLevel;

/// @brief Field foveatedRenderingLevel offset 0x18
 __declspec(property(get=__get_foveatedRenderingLevel, put=__set_foveatedRenderingLevel)) int32_t  foveatedRenderingLevel;

 __declspec(property(get=get_gpuPerformanceLevel)) ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel  gpuPerformanceLevel;

 __declspec(property(get=get_cpuPerformanceLevel)) ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel  cpuPerformanceLevel;

 __declspec(property(get=get_useFoveatedRenderingDuringGameplay)) bool  useFoveatedRenderingDuringGameplay;

constexpr void __set_gpuLevel(::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel  value) ;

constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel& __get_gpuLevel() ;

constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const& __get_gpuLevel() const;

constexpr void __set_cpuLevel(::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel  value) ;

constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel& __get_cpuLevel() ;

constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const& __get_cpuLevel() const;

constexpr void __set_foveatedRenderingLevel(int32_t  value) ;

constexpr int32_t& __get_foveatedRenderingLevel() ;

constexpr int32_t const& __get_foveatedRenderingLevel() const;

/// @brief Method get_gpuPerformanceLevel addr 0x23503e8 size 0x8 virtual false final false
inline ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel get_gpuPerformanceLevel() ;

/// @brief Method get_cpuPerformanceLevel addr 0x23503f0 size 0x8 virtual false final false
inline ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel get_cpuPerformanceLevel() ;

/// @brief Method get_useFoveatedRenderingDuringGameplay addr 0x234fe34 size 0x10 virtual false final false
inline bool get_useFoveatedRenderingDuringGameplay() ;

static inline ::GlobalNamespace::QuestPerformanceSettings* New_ctor() ;

/// @brief Method .ctor addr 0x23503f8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "QuestPerformanceSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuestPerformanceSettings(QuestPerformanceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuestPerformanceSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuestPerformanceSettings(QuestPerformanceSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QuestPerformanceSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestPerformanceSettings, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel, "", "QuestPerformanceSettings/ProcessorPerformanceLevel");
NEED_NO_BOX(::GlobalNamespace::QuestPerformanceSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestPerformanceSettings*, "", "QuestPerformanceSettings");
