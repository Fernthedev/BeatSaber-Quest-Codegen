#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerformanceReport)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceReport;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceReport);
// Type: ::PerformanceReport
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5946))
// CS Name: ::PerformanceReport*
class CORDL_TYPE PerformanceReport : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kDefaultFpsWindow offset 0x0
static constexpr float_t  kDefaultFpsWindow{1.0};

/// @brief Method CreateTimestamp addr 0x23047ac size 0x50 virtual false final false
static inline ::StringW CreateTimestamp(::System::DateTime  timestamp) ;

/// @brief Method CreateReportDescriptor addr 0x23047fc size 0x33c virtual false final false
static inline ::StringW CreateReportDescriptor(::System::DateTime  timestamp, ::GlobalNamespace::GameplayCoreSceneSetupData*  sceneSetupData) ;

/// @brief Method ListAggregatedFps addr 0x2304488 size 0x324 virtual false final false
static inline ::StringW ListAggregatedFps(::ArrayW<float_t,::Array<float_t>*>  frameDurations, float_t  minWindowSize) ;

/// @brief Method ListFrameDurations addr 0x2304374 size 0x114 virtual false final false
static inline ::StringW ListFrameDurations(::ArrayW<float_t,::Array<float_t>*>  frameDurations) ;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceReport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceReport(PerformanceReport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceReport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceReport(PerformanceReport const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PerformanceReport()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceReport, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceReport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceReport*, "", "PerformanceReport");
