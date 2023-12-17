#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
CORDL_MODULE_EXPORT(OVROnCompleteListener)
// Forward declare root types
namespace GlobalNamespace {
class OVROnCompleteListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVROnCompleteListener);
// Type: ::OVROnCompleteListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7653))
// CS Name: ::OVROnCompleteListener*
class CORDL_TYPE OVROnCompleteListener : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::AndroidJavaProxy)]{};

static inline ::GlobalNamespace::OVROnCompleteListener* New_ctor() ;

/// @brief Method .ctor addr 0x274605c size 0x70 virtual false final false
inline void _ctor() ;

/// @brief Method onSuccess addr 0x0 size 0xffffffffffffffff virtual true final false
inline void onSuccess() ;

/// @brief Method onFailure addr 0x0 size 0xffffffffffffffff virtual true final false
inline void onFailure() ;

// Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROnCompleteListener(OVROnCompleteListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROnCompleteListener(OVROnCompleteListener const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVROnCompleteListener()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROnCompleteListener, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVROnCompleteListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
