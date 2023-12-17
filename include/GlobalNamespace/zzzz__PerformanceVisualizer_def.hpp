#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PerformanceVisualizer)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceVisualizer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceVisualizer);
// Type: ::PerformanceVisualizer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5947))
// CS Name: ::PerformanceVisualizer*
class CORDL_TYPE PerformanceVisualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method Initialize addr 0x2304bb8 size 0xd4 virtual false final false
inline void Initialize(::UnityEngine::Camera*  mainCamera, bool  enableFPSModule, bool  enableMemoryModule) ;

static inline ::GlobalNamespace::PerformanceVisualizer* New_ctor() ;

/// @brief Method .ctor addr 0x2304c8c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceVisualizer(PerformanceVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceVisualizer(PerformanceVisualizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PerformanceVisualizer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceVisualizer, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceVisualizer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceVisualizer*, "", "PerformanceVisualizer");
