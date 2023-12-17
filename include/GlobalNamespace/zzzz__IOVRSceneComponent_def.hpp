#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOVRSceneComponent)
// Forward declare root types
namespace GlobalNamespace {
class IOVRSceneComponent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IOVRSceneComponent);
// Type: ::IOVRSceneComponent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7956))
// CS Name: ::IOVRSceneComponent*
class CORDL_TYPE IOVRSceneComponent {
public:
// Declarations
/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Initialize() ;

// Ctor Parameters [CppParam { name: "", ty: "IOVRSceneComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IOVRSceneComponent(IOVRSceneComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IOVRSceneComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOVRSceneComponent(IOVRSceneComponent const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IOVRSceneComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IOVRSceneComponent*, "", "IOVRSceneComponent");
