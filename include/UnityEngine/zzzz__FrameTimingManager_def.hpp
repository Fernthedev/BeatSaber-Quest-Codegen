#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FrameTimingManager)
namespace UnityEngine {
struct FrameTiming;
}
// Forward declare root types
namespace UnityEngine {
class FrameTimingManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::FrameTimingManager);
// Type: UnityEngine::FrameTimingManager
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10133))
// CS Name: ::UnityEngine::FrameTimingManager*
class CORDL_TYPE FrameTimingManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CaptureFrameTimings addr 0x2cc41f0 size 0x28 virtual false final false
static inline void CaptureFrameTimings() ;

/// @brief Method GetLatestTimings addr 0x2cc4218 size 0x44 virtual false final false
static inline uint32_t GetLatestTimings(uint32_t  numFrames, ::ArrayW<::UnityEngine::FrameTiming,::Array<::UnityEngine::FrameTiming>*>  timings) ;

// Ctor Parameters [CppParam { name: "", ty: "FrameTimingManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameTimingManager(FrameTimingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameTimingManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameTimingManager(FrameTimingManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FrameTimingManager()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FrameTimingManager, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::FrameTimingManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTimingManager*, "UnityEngine", "FrameTimingManager");
