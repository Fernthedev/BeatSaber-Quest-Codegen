#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace UnityEngine {
struct Vector4;
}
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Utils);
// Type: Unity.XR.Oculus::Utils
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15125))
// CS Name: ::Unity.XR.Oculus::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetColorScaleAndOffset addr 0x2c770b4 size 0x40 virtual false final false
static inline void SetColorScaleAndOffset(::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset) ;

/// @brief Method GetSystemHeadsetType addr 0x2c770fc size 0x4 virtual false final false
static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method SetFoveationLevel addr 0x2c77104 size 0x8c virtual false final false
static inline bool SetFoveationLevel(int32_t  level) ;

/// @brief Method EnableDynamicFFR addr 0x2c77198 size 0x8c virtual false final false
static inline bool EnableDynamicFFR(bool  enable) ;

/// @brief Method GetFoveationLevel addr 0x2c7722c size 0x78 virtual false final false
static inline int32_t GetFoveationLevel() ;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Utils()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Utils, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils*, "Unity.XR.Oculus", "Utils");
