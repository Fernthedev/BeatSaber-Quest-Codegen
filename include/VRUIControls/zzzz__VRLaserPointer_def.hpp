#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRLaserPointer)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace VRUIControls {
class VRLaserPointer;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRLaserPointer);
// Type: VRUIControls::VRLaserPointer
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15677))
// CS Name: ::VRUIControls::VRLaserPointer*
class CORDL_TYPE VRLaserPointer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _renderer offset 0x18
 __declspec(property(get=__get__renderer, put=__set__renderer)) ::UnityEngine::MeshRenderer*  _renderer;

constexpr void __set__renderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__renderer() const;

static inline void setStaticF__fadeStartNormalizedDistanceId(int32_t  value) ;

static inline int32_t getStaticF__fadeStartNormalizedDistanceId() ;

static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock() ;

/// @brief Method SetLocalPosition addr 0x2eb8848 size 0x48 virtual false final false
inline void SetLocalPosition(::UnityEngine::Vector3  position) ;

/// @brief Method SetLocalScale addr 0x2eb8890 size 0x48 virtual false final false
inline void SetLocalScale(::UnityEngine::Vector3  scale) ;

/// @brief Method SetFadeDistance addr 0x2eb88d8 size 0xfc virtual false final false
inline void SetFadeDistance(float_t  distance) ;

static inline ::VRUIControls::VRLaserPointer* New_ctor() ;

/// @brief Method .ctor addr 0x2eb89d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VRLaserPointer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRLaserPointer(VRLaserPointer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRLaserPointer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRLaserPointer(VRLaserPointer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VRLaserPointer()  = default;
public:


// Fields

// Static field _fadeStartNormalizedDistanceId

// Static field _materialPropertyBlock


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRLaserPointer, 0x20>, "Size mismatch!");

} // namespace end def VRUIControls
NEED_NO_BOX(::VRUIControls::VRLaserPointer);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRLaserPointer*, "VRUIControls", "VRLaserPointer");
