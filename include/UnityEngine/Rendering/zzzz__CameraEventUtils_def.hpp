#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CameraEventUtils)
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CameraEventUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraEventUtils);
// Type: UnityEngine.Rendering::CameraEventUtils
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10338))
// CS Name: ::UnityEngine.Rendering::CameraEventUtils*
class CORDL_TYPE CameraEventUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IsValid addr 0x2cebc8c size 0xc virtual false final false
static inline bool IsValid(::UnityEngine::Rendering::CameraEvent  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CameraEventUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraEventUtils(CameraEventUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraEventUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraEventUtils(CameraEventUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CameraEventUtils()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraEventUtils, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CameraEventUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraEventUtils*, "UnityEngine.Rendering", "CameraEventUtils");
