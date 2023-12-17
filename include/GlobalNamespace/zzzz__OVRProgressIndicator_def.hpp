#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRProgressIndicator)
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRProgressIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRProgressIndicator);
// Type: ::OVRProgressIndicator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8155))
// CS Name: ::OVRProgressIndicator*
class CORDL_TYPE OVRProgressIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field progressImage offset 0x18
 __declspec(property(get=__get_progressImage, put=__set_progressImage)) ::UnityEngine::MeshRenderer*  progressImage;

/// @brief Field currentProgress offset 0x20
 __declspec(property(get=__get_currentProgress, put=__set_currentProgress)) float_t  currentProgress;

constexpr void __set_progressImage(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get_progressImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get_progressImage() const;

constexpr void __set_currentProgress(float_t  value) ;

constexpr float_t& __get_currentProgress() ;

constexpr float_t const& __get_currentProgress() const;

/// @brief Method Awake addr 0x27b90f4 size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x27b9114 size 0x6c virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRProgressIndicator* New_ctor() ;

/// @brief Method .ctor addr 0x27b9180 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRProgressIndicator(OVRProgressIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRProgressIndicator(OVRProgressIndicator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRProgressIndicator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProgressIndicator, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRProgressIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProgressIndicator*, "", "OVRProgressIndicator");
