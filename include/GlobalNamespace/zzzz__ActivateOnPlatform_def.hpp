#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActivateOnPlatform)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
// Forward declare root types
namespace GlobalNamespace {
class ActivateOnPlatform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActivateOnPlatform);
// Type: ::ActivateOnPlatform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14330))
// CS Name: ::ActivateOnPlatform*
class CORDL_TYPE ActivateOnPlatform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _vrPlatformSdk offset 0x18
 __declspec(property(get=__get__vrPlatformSdk, put=__set__vrPlatformSdk)) ::GlobalNamespace::VRPlatformSDK  _vrPlatformSdk;

/// @brief Field _vrPlatformHelper offset 0x20
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

constexpr void __set__vrPlatformSdk(::GlobalNamespace::VRPlatformSDK  value) ;

constexpr ::GlobalNamespace::VRPlatformSDK& __get__vrPlatformSdk() ;

constexpr ::GlobalNamespace::VRPlatformSDK const& __get__vrPlatformSdk() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

/// @brief Method Awake addr 0x20ee708 size 0xd0 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::ActivateOnPlatform* New_ctor() ;

/// @brief Method .ctor addr 0x20ee7d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivateOnPlatform(ActivateOnPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivateOnPlatform(ActivateOnPlatform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ActivateOnPlatform()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActivateOnPlatform, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActivateOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActivateOnPlatform*, "", "ActivateOnPlatform");
