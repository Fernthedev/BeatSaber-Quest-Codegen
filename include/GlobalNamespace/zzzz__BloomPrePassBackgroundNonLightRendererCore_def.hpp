#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightRendererCore)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRendererCore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
// Type: ::BloomPrePassBackgroundNonLightRendererCore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14465))
// CS Name: ::BloomPrePassBackgroundNonLightRendererCore*
class CORDL_TYPE BloomPrePassBackgroundNonLightRendererCore : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::BloomPrePassNonLightPass)]{};

/// @brief Field _keepDefaultRendering offset 0x20
 __declspec(property(get=__get__keepDefaultRendering, put=__set__keepDefaultRendering)) bool  _keepDefaultRendering;

/// @brief Field _useCustomMaterial offset 0x21
 __declspec(property(get=__get__useCustomMaterial, put=__set__useCustomMaterial)) bool  _useCustomMaterial;

/// @brief Field _customMaterial offset 0x28
 __declspec(property(get=__get__customMaterial, put=__set__customMaterial)) ::UnityEngine::Material*  _customMaterial;

/// @brief Field _useCustomPropertyBlock offset 0x30
 __declspec(property(get=__get__useCustomPropertyBlock, put=__set__useCustomPropertyBlock)) bool  _useCustomPropertyBlock;

/// @brief Field _commandBuffer offset 0x38
 __declspec(property(get=__get__commandBuffer, put=__set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _commandBuffer;

/// @brief Field _customPropertyBlock offset 0x40
 __declspec(property(get=__get__customPropertyBlock, put=__set__customPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _customPropertyBlock;

 __declspec(property(get=get_renderer)) ::UnityEngine::Renderer*  renderer;

 __declspec(property(get=get_useCustomMaterial)) bool  useCustomMaterial;

 __declspec(property(get=get_customMaterial)) ::UnityEngine::Material*  customMaterial;

constexpr void __set__keepDefaultRendering(bool  value) ;

constexpr bool& __get__keepDefaultRendering() ;

constexpr bool const& __get__keepDefaultRendering() const;

constexpr void __set__useCustomMaterial(bool  value) ;

constexpr bool& __get__useCustomMaterial() ;

constexpr bool const& __get__useCustomMaterial() const;

constexpr void __set__customMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__customMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__customMaterial() const;

constexpr void __set__useCustomPropertyBlock(bool  value) ;

constexpr bool& __get__useCustomPropertyBlock() ;

constexpr bool const& __get__useCustomPropertyBlock() const;

static inline void setStaticF__worldSpaceCameraPosID(int32_t  value) ;

static inline int32_t getStaticF__worldSpaceCameraPosID() ;

constexpr void __set__commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr ::UnityEngine::Rendering::CommandBuffer* __get__commandBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> __get__commandBuffer() const;

static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock() ;

constexpr void __set__customPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get__customPropertyBlock() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get__customPropertyBlock() const;

/// @brief Method get_renderer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Renderer* get_renderer() ;

/// @brief Method get_useCustomMaterial addr 0x2105cec size 0x8 virtual false final false
inline bool get_useCustomMaterial() ;

/// @brief Method get_customMaterial addr 0x2105cf4 size 0x8 virtual false final false
inline ::UnityEngine::Material* get_customMaterial() ;

/// @brief Method SetCustomPropertyBlock addr 0x2105cfc size 0xbc virtual false final false
inline void SetCustomPropertyBlock(::UnityEngine::MaterialPropertyBlock*  bloomPropertyBlock) ;

/// @brief Method InitIfNeeded addr 0x2105b84 size 0x114 virtual true final false
inline void InitIfNeeded() ;

/// @brief Method Awake addr 0x2105a68 size 0xc virtual true final false
inline void Awake() ;

/// @brief Method Render addr 0x2105db8 size 0x310 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  dest, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore* New_ctor() ;

/// @brief Method .ctor addr 0x2104a20 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundNonLightRendererCore()  = default;
public:


// Fields

// Static field _worldSpaceCameraPosID

// Static field _materialPropertyBlock


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*, "", "BloomPrePassBackgroundNonLightRendererCore");
